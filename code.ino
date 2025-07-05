#include <Servo.h>
#include <LiquidCrystal_I2C.h>

Servo myservo;
LiquidCrystal_I2C lcd(32, 16, 2);

int trig = 13;
int echo = 11;
float d,time;
int pos = 0;
int temp,r;

void setup(){
  myservo.attach(9);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
  randomSeed(0);
  lcd.init();
  lcd.backlight();
}

void loop(){
  int temp = 0;
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  time = pulseIn(echo,HIGH);
  d = time *0.034/2;
  if(d<60){
    if(r == 0){
    myservo.write(90);
      Serial.println(r);
        lcd.setCursor(0,0);
  lcd.print("STONE");
        temp = 0;}
    else if(r==1){
    myservo.write(180);
      Serial.println(r);
        lcd.setCursor(0,0);
  lcd.print("PAPER");
        temp = 0;}
    else if(r==2){
    myservo.write(270);
      Serial.println(r);
        lcd.setCursor(0,0);
  lcd.print("SCISSORS");
    temp = 0;}
    }
  else{
  myservo.write(0);
  Serial.println(10);
    lcd.clear();
  temp = 1;}
  if(temp == 1){
  r = random(3);}
}
