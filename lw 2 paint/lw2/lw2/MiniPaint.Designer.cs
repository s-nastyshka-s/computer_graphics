namespace lw2
{
    partial class MiniPaint
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            DrawPanel = new PictureBox();
            NewImgButton = new Button();
            OpenImgButton = new Button();
            SaveImgButton = new Button();
            saveFileDialog = new SaveFileDialog();
            openFileDialog = new OpenFileDialog();
            white = new Button();
            red = new Button();
            yellow = new Button();
            green = new Button();
            blue = new Button();
            violet = new Button();
            black = new Button();
            orange = new Button();
            colour = new Button();
            colorDialog1 = new ColorDialog();
            ((System.ComponentModel.ISupportInitialize)DrawPanel).BeginInit();
            SuspendLayout();
            // 
            // DrawPanel
            // 
            DrawPanel.BackColor = SystemColors.ButtonHighlight;
            DrawPanel.Location = new Point(12, 111);
            DrawPanel.Margin = new Padding(3, 2, 3, 2);
            DrawPanel.Name = "DrawPanel";
            DrawPanel.Size = new Size(764, 410);
            DrawPanel.TabIndex = 0;
            DrawPanel.TabStop = false;
            DrawPanel.MouseDown += DrawPanel_MouseDown;
            DrawPanel.MouseMove += DrawPanel_MouseMove;
            DrawPanel.MouseUp += DrawPanel_MouseUp;
            // 
            // NewImgButton
            // 
            NewImgButton.BackColor = SystemColors.ButtonHighlight;
            NewImgButton.Location = new Point(328, 31);
            NewImgButton.Margin = new Padding(3, 2, 3, 2);
            NewImgButton.Name = "NewImgButton";
            NewImgButton.Size = new Size(130, 36);
            NewImgButton.TabIndex = 1;
            NewImgButton.Text = "New Image";
            NewImgButton.UseVisualStyleBackColor = false;
            NewImgButton.Click += NewImgButtonButton_Click;
            // 
            // OpenImgButton
            // 
            OpenImgButton.BackColor = SystemColors.ButtonHighlight;
            OpenImgButton.Location = new Point(12, 33);
            OpenImgButton.Margin = new Padding(3, 2, 3, 2);
            OpenImgButton.Name = "OpenImgButton";
            OpenImgButton.Size = new Size(130, 39);
            OpenImgButton.TabIndex = 2;
            OpenImgButton.Text = "Open Image";
            OpenImgButton.UseVisualStyleBackColor = false;
            OpenImgButton.Click += OpenImgButton_Click;
            // 
            // SaveImgButton
            // 
            SaveImgButton.BackColor = SystemColors.ButtonHighlight;
            SaveImgButton.Location = new Point(174, 31);
            SaveImgButton.Margin = new Padding(3, 2, 3, 2);
            SaveImgButton.Name = "SaveImgButton";
            SaveImgButton.Size = new Size(130, 41);
            SaveImgButton.TabIndex = 3;
            SaveImgButton.Text = "Save Image";
            SaveImgButton.UseVisualStyleBackColor = false;
            SaveImgButton.Click += SaveImgButton_Click;
            // 
            // saveFileDialog
            // 
            saveFileDialog.FileName = "saveFileDialog";
            // 
            // openFileDialog
            // 
            openFileDialog.FileName = "openFileDialog";
            // 
            // white
            // 
            white.BackColor = Color.White;
            white.Location = new Point(637, 22);
            white.Margin = new Padding(3, 2, 3, 2);
            white.Name = "white";
            white.Size = new Size(28, 24);
            white.TabIndex = 4;
            white.UseVisualStyleBackColor = false;
            white.Click += ChangeColor_Click;
            // 
            // red
            // 
            red.BackColor = Color.FromArgb(255, 128, 128);
            red.Location = new Point(671, 22);
            red.Margin = new Padding(3, 2, 3, 2);
            red.Name = "red";
            red.Size = new Size(28, 24);
            red.TabIndex = 5;
            red.UseVisualStyleBackColor = false;
            red.Click += ChangeColor_Click;
            // 
            // yellow
            // 
            yellow.BackColor = Color.Yellow;
            yellow.Location = new Point(705, 23);
            yellow.Margin = new Padding(3, 2, 3, 2);
            yellow.Name = "yellow";
            yellow.Size = new Size(28, 24);
            yellow.TabIndex = 6;
            yellow.UseVisualStyleBackColor = false;
            yellow.Click += ChangeColor_Click;
            // 
            // green
            // 
            green.BackColor = Color.FromArgb(0, 192, 0);
            green.Location = new Point(739, 23);
            green.Margin = new Padding(3, 2, 3, 2);
            green.Name = "green";
            green.Size = new Size(28, 24);
            green.TabIndex = 7;
            green.UseVisualStyleBackColor = false;
            green.Click += ChangeColor_Click;
            // 
            // blue
            // 
            blue.BackColor = Color.LightBlue;
            blue.Location = new Point(739, 54);
            blue.Margin = new Padding(3, 2, 3, 2);
            blue.Name = "blue";
            blue.Size = new Size(28, 24);
            blue.TabIndex = 8;
            blue.UseVisualStyleBackColor = false;
            blue.Click += ChangeColor_Click;
            // 
            // violet
            // 
            violet.BackColor = Color.FromArgb(128, 128, 255);
            violet.Location = new Point(637, 54);
            violet.Margin = new Padding(3, 2, 3, 2);
            violet.Name = "violet";
            violet.Size = new Size(28, 24);
            violet.TabIndex = 9;
            violet.UseVisualStyleBackColor = false;
            violet.Click += ChangeColor_Click;
            // 
            // black
            // 
            black.BackColor = Color.Black;
            black.Location = new Point(671, 54);
            black.Margin = new Padding(3, 2, 3, 2);
            black.Name = "black";
            black.Size = new Size(28, 24);
            black.TabIndex = 10;
            black.UseVisualStyleBackColor = false;
            black.Click += ChangeColor_Click;
            // 
            // orange
            // 
            orange.BackColor = Color.FromArgb(255, 128, 0);
            orange.Location = new Point(705, 54);
            orange.Margin = new Padding(3, 2, 3, 2);
            orange.Name = "orange";
            orange.Size = new Size(28, 24);
            orange.TabIndex = 11;
            orange.UseVisualStyleBackColor = false;
            orange.Click += ChangeColor_Click;
            // 
            // colour
            // 
            colour.BackColor = SystemColors.ButtonHighlight;
            colour.Location = new Point(490, 38);
            colour.Margin = new Padding(3, 2, 3, 2);
            colour.Name = "colour";
            colour.Size = new Size(130, 22);
            colour.TabIndex = 12;
            colour.Text = "Choose color";
            colour.UseVisualStyleBackColor = false;
            colour.Click += ColourPalette_Click;
            // 
            // MiniPaint
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            AutoScroll = true;
            AutoSize = true;
            BackColor = Color.Azure;
            ClientSize = new Size(797, 532);
            Controls.Add(colour);
            Controls.Add(orange);
            Controls.Add(black);
            Controls.Add(violet);
            Controls.Add(blue);
            Controls.Add(green);
            Controls.Add(yellow);
            Controls.Add(red);
            Controls.Add(white);
            Controls.Add(SaveImgButton);
            Controls.Add(OpenImgButton);
            Controls.Add(NewImgButton);
            Controls.Add(DrawPanel);
            Margin = new Padding(3, 2, 3, 2);
            Name = "MiniPaint";
            Text = "MiniPaint";
            Load += MiniPaint_Load;
            ((System.ComponentModel.ISupportInitialize)DrawPanel).EndInit();
            ResumeLayout(false);
        }

        #endregion

        private PictureBox DrawPanel;
        private Button NewImgButton;
        private Button OpenImgButton;
        private Button SaveImgButton;
        private SaveFileDialog saveFileDialog;
        private OpenFileDialog openFileDialog;
        private Button white;
        private Button red;
        private Button yellow;
        private Button green;
        private Button blue;
        private Button violet;
        private Button black;
        private Button orange;
        private Button colour;
        private ColorDialog colorDialog1;
    }
}