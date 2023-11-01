using Microsoft.VisualBasic.Devices;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Net.Mime.MediaTypeNames;

namespace lw2
{
    public partial class MiniPaint : Form
    {
        public MiniPaint()
        {
            InitializeComponent();
            SetSoftLine();
        }
        private void MiniPaint_Load(object sender, EventArgs e)
        {
            this.Text = "Рисование кистью";
            NewImgButton.Text = "New Image";
            OpenImgButton.Text = "Open Image";
            SaveImgButton.Text = "Save Image";
        }

        private Bitmap drawImage = new Bitmap(764, 410);
        Graphics? graphics;
        Pen pen = new Pen(Color.Black, 5f);
        private bool isMouse = false;
        private List<Point> arrayPoints = new List<Point>();
        //private ArrayPoints arrayPoints = new ArrayPoints(2);

        private void SetSoftLine()
        {
            pen.StartCap = System.Drawing.Drawing2D.LineCap.Round;
            pen.EndCap = System.Drawing.Drawing2D.LineCap.Round;
        }

        //Оствить только массив, использовать существующие классы 
        //private class ArrayPoints
        //{
        //    private int index = 0;
        //    private Point[] points;

        //    public ArrayPoints(int size) //конструктор класса, принимает целое число, инцилизируем массив
        //    {
        //        if (size <= 0) { size = 2; }
        //        points = new Point[size];
        //    }

        //    public void SetPoint(int x, int y) //Установка точки
        //    {
        //        if (index >= points.Length)
        //        {
        //            index = 0;
        //        }
        //        points[index] = new Point(x, y);
        //        index++;
        //    }

        //    public void RecentPoints() //Сброс точек
        //    {
        //        index = 0;
        //    }

        //    //Переименовать метод
        //    public int GetCoutPoints() //Получение размера массива точек
        //    {
        //        return index;
        //    }

        //    public Point[] GetPoints() //Получение массива точек
        //    {
        //        return points;
        //    }
        //}
        private void DrawPanel_MouseDown(object sender, MouseEventArgs e)
        {
            isMouse = true;
        }

        private void DrawPanel_MouseUp(object sender, MouseEventArgs e)
        {
            isMouse = false;
            //arrayPoints.RecentPoints();
            arrayPoints.Clear();
        }
        private void DrawPanel_MouseMove(object sender, MouseEventArgs e)
        {
            if (!isMouse) { return; }

            //arrayPoints.SetPoint(e.X, e.Y);
            arrayPoints.Add(new Point(e.X, e.Y));
            graphics = Graphics.FromImage(drawImage);
            //if (arrayPoints.GetCoutPoints() >= 2)
            if (arrayPoints.Count() >= 2)
            {
                graphics.DrawLines(pen, arrayPoints.ToArray());
                //graphics.DrawLines(pen, arrayPoints.GetPoints());
                DrawPanel.Image = drawImage;
                //arrayPoints.SetPoint(e.X, e.Y);
                arrayPoints.Add(new Point(e.X, e.Y));
            }
        }

        private void OpenImgButton_Click(object sender, EventArgs e)
        {
            OpenFileDialog open_dialog = new OpenFileDialog();
            open_dialog.Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG|All files (*.*)|*.*";
            if (open_dialog.ShowDialog() == DialogResult.OK)
            {
                drawImage = new Bitmap(open_dialog.FileName);
                this.DrawPanel.Size = drawImage.Size;
                DrawPanel.Image = drawImage;
                DrawPanel.Invalidate();
            }
        }

        private void NewImgButtonButton_Click(object sender, EventArgs e)
        {
            DrawPanel.Image = drawImage;
            graphics = Graphics.FromImage(drawImage);
            graphics.Clear(Color.White);
            this.DrawPanel.Size = new System.Drawing.Size(764, 410);
        }

        private void SaveImgButton_Click(object sender, EventArgs e)
        {
            if (DrawPanel.Image != null)
            {
                SaveFileDialog savedialog = new SaveFileDialog();
                savedialog.Filter = "Image Files(*.BMP)|*.BMP|Image Files(*.JPG)|*.JPG|Image Files(*.GIF) | *.GIF | Image Files(*.PNG) | *.PNG | All files(*.*) | *.* ";
                if (savedialog.ShowDialog() == DialogResult.OK)
                {
                    DrawPanel.Image.Save(savedialog.FileName);
                }
            }
        }

        private void ChangeColor_Click(object sender, EventArgs e)
        {
            pen.Color = ((Button)sender).BackColor;
        }

        private void ColourPalette_Click(object sender, EventArgs e)
        {
            if (colorDialog1.ShowDialog() == DialogResult.OK)
            {
                pen.Color = colorDialog1.Color;
                ((Button)sender).BackColor = colorDialog1.Color;
            }
        }


    }
}
