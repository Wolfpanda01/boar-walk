#include <Servo.h>
//user's guide: it runs by itself, 
//it does the front leg first 
//then the back and repeat
//b relates to the back leg while f or f in something means front leg
const int bh = 7;
const int bk = 4;
const int ba= 3;
const int fh = 8;
const int fk = 9;
const int fa = 13;
//origin point for the joints
int hipf= 90;
int kneef = 90;
int anlkf = 90;
int hip = 70;
int knee = 45;
int anlke = 90;
//servo stuff
Servo hipjointb;
Servo kneejointb;
Servo  ajointb;
Servo hipjointf;
Servo kneejointf;
Servo ajointf;
void setup()
{
  //all of the attached servos for the 2 legs
  hipjointb.attach(7);
  kneejointb.attach(4);
  ajointb.attach(3); 
  hipjointf.attach(8);
  kneejointf.attach(9);
  ajointf.attach(13);
}
//front leg control writes
void flforshort(int fh,int fk, int fa){
  //angle postion
hipjointf.write(hipf+fh);
  kneejointf.write(kneef+fk);
  ajointf.write(anlkf+fa);
  delay(500);
}
//back leg control writes
void blforshort(int h,int kb, int ab){
  //angle postion
hipjointb.write(hip+h);
  kneejointb.write(knee+kb);
  ajointb.write(anlke+ab);
  delay(500);
}

void loop()
{  delay(500);
 //front leg
 flforshort(15,30,-15);
 flforshort(30,35,15);
flforshort(10,30,10);
 flforshort(5,40,5);
  flforshort(0,0,0);
 //backleg
 delay(100);
  blforshort(25,10,30);
  blforshort(40,30,15);
 blforshort(25,10,30);
blforshort(40,30,15);
 blforshort(0,0,0);
}