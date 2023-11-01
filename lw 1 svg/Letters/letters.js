window.onload = () => {
  const canvas = document.getElementById("letters");
  const context = canvas.getContext("2d");

  //буква С
  context.beginPath();
  context.moveTo(415, 433); //внешняя дуга нижняя точка
  context.bezierCurveTo(40, 420,  100, -5,  415, 20); //внешняя дуга верхняя точка
  context.lineTo(410, 70); //внутрення дуга верхняя точка
  context.bezierCurveTo(180, 55,  120, 370,  410, 380); //внутренняя дуга нижняя точка
  context.lineTo(415, 435)
  context.closePath();

  context.strokeStyle = '#000FA6';
  context.fillStyle = "#000FA6";
  context.lineWidth = 5;
  context.fill();
  context.stroke();
  

  //буква А
  context.beginPath();
  context.moveTo(700, 25);
  context.lineTo(575, 440);
  context.lineTo(630, 440);
  context.lineTo(755, 25);
  context.lineTo(700, 25);
  context.lineTo(875, 440);
  context.lineTo(930, 440);
  context.lineTo(755, 25);
  context.moveTo(685, 260);
  context.lineTo(800, 258);
  context.lineTo(815, 300);
  context.lineTo(673, 302);
  context.closePath();

  context.strokeStyle = '#246FFF';
  context.fillStyle = "#246FFF";
  context.lineWidth = 5;
  context.fill();
  context.stroke();


  // буква С
  context.beginPath();
  context.moveTo(1250, 433); //внешняя дуга нижняя точка
  context.bezierCurveTo(875, 420,  935, -5,  1250, 20); //внешняя дуга верхняя точка
  context.lineTo(1245, 70); //внутрення дуга верхняя точка
  context.bezierCurveTo(1015, 55,  955, 370,  1245, 380); //внутренняя дуга нижняя точка
  context.lineTo(1250, 435)
  context.closePath();

  context.strokeStyle = '#66D1FF';
  context.fillStyle = "#66D1FF";
  context.lineWidth = 5;
  context.fill();
  context.stroke();
}
// код рисования должен быть один раз, но цвет и буквы был дпугой, чотобы легко было поменять позицию буквы, чтобы инициалы переделать, transform  
