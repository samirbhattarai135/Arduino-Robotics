/*
Don't forget to check out my YouTube channel: https://www.youtube.com/channel/UCKp8cQWkiGGfAV5FM_Q0mxA
*/
 
void setup() {

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void allLayer() {
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  }

void noLayer() {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  }

void rotate() {
  allLayer();
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(100);
  empty();
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  empty();
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  empty();
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(100);
  empty();
  noLayer();  
  }

void fill() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  }

void swirl() {
  digitalWrite(2, HIGH);
  delay(50);
  digitalWrite(3, HIGH);
  delay(50);
  digitalWrite(4, HIGH);
  delay(50);
  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(6, HIGH);
  delay(50);
  }

void myName() {
  //Y
  digitalWrite(11, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(13, HIGH);
  delay(200);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(11, HIGH);
  delay(100);
  noLayer();
  empty();

  //O
  digitalWrite(11, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(13, HIGH);
  delay(200);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(11, HIGH);
  delay(100);
  noLayer();
  empty();

  //U
  digitalWrite(11, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(13, HIGH);
  delay(200);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(11, HIGH);
  delay(100);
  noLayer();
  empty();

  //R
  digitalWrite(11, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  delay(100);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(13, HIGH);
  delay(200);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(11, HIGH);
  delay(100);
  noLayer();
  empty();

  //I
  digitalWrite(11, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(13, HIGH);
  delay(200);
  noLayer();
  digitalWrite(12, HIGH);
  delay(100);
  noLayer();
  digitalWrite(11, HIGH);
  delay(100);
  noLayer();
  empty();
  }

void empty() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  }  

void createX() {
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(200);
   digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(200);
   digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(200);
 digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(200);
   digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(200);
   digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(200);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(200);
   digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(200);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(500);
}


void loop() {
  
//FILL - UP AND DOWN

 digitalWrite(13, HIGH);
 fill();
 delay(200);
 empty();
 noLayer();
 digitalWrite(12, HIGH);
 fill();
 delay(100);
 empty();
 noLayer();
 digitalWrite(11, HIGH);
 fill();
 delay(200);
 empty();
 noLayer();
 digitalWrite(12, HIGH);
 fill();
 delay(100);
 empty();
 noLayer();
 digitalWrite(13, HIGH);
 fill();
 delay(200);
 empty();
 noLayer();
 digitalWrite(12, HIGH);
 fill();
 delay(100);
 empty();
 noLayer();
 digitalWrite(11, HIGH);
 fill();
 delay(200);
 empty();
 noLayer();
 digitalWrite(12, HIGH);
 fill();
 delay(100);
 empty();
 noLayer();
 digitalWrite(13, HIGH);
 fill();
 delay(200);
 empty();
 noLayer();
 digitalWrite(12, HIGH);
 fill();
 delay(100);
 empty();
 noLayer();
 digitalWrite(11, HIGH);
 fill();
 delay(200);
 empty();
 noLayer();
 digitalWrite(12, HIGH);
 fill();
 delay(100);
 empty();
 noLayer();
 digitalWrite(13, HIGH);
 fill();
 delay(200);
 empty();
 noLayer();
 delay(1000);

//SWIRL - 1 LAYER EACH TIME

 digitalWrite(13, HIGH);
 swirl();
 delay(10);
 empty();
 noLayer();
 digitalWrite(12, HIGH);
 swirl();
 delay(10);
 empty();
 noLayer();
 digitalWrite(11, HIGH);
 swirl();
 delay(10);
 delay(400);
 empty();
 noLayer();

//SWIRL - ALL LAYERS AT ONCE

 allLayer();
 swirl();
 delay(400);
 empty();
 noLayer();
 delay(1000);

//NAME COMES UP
myName();
delay(1000);

//ROTATING PANE - ALL LAYERS
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
rotate();
delay(1000);
}
