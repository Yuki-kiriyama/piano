#include <PCA9685.h>
#include<Wire.h>

PCA9685 pwm = PCA9685(0x40);

#define SERVOMIN 150
#define SERVOMAX 600

void servo_write(int ch,int ang)
{
  ang=map(ang,0,180,SERVOMIN,SERVOMAX);
  pwm.setPWM(ch,0,ang);
  return(0);
}

/*
int kaeru()//カエルの歌
{
  Serial.print("カエルの歌");
  int ORU_PIN=4;
  int kaeru_kirakira;
  int mode_val;
  const byte MODE_PIN=3;
  pinMode(MODE_PIN,INPUT_PULLUP);
  int song_val;
  const byte SONG_PIN=2;
  pinMode(SONG_PIN,INPUT_PULLUP);
  pinMode(ORU_PIN,INPUT_PULLUP);
  kaeru_kirakira=digitalRead(ORU_PIN);
  
  servo_write(0,90);tone(12,261);//ド
  delay(500);
  servo_write(0,0);
  servo_write(1,90);tone(12,293);//レ
  delay(500);
  servo_write(1,0);
  servo_write(2,90);tone(12,329);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(3,90);tone(12,349);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(2,90);tone(12,329);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(1,90);tone(12,293);//レ
  delay(500);
  servo_write(1,0);
  servo_write(0,90);tone(12,261,700);//ド
  delay(1000);
  servo_write(0,0);
  
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
 // if(song_val==0)
   //   kirakira();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  
  servo_write(2,90);tone(12,329);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(3,90);tone(12,349);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(4,90);tone(12,392);//ソ
  delay(500);
  servo_write(4,0);
  servo_write(5,90);tone(12,440);//ラ
  delay(500);
  servo_write(5,0);
  servo_write(4,90);tone(12,392);//ソ
  delay(500);
  servo_write(4,0);
  servo_write(3,90);tone(12,349);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(2,90);tone(12,329,700);//ミ
  delay(1000);
  servo_write(2,0);
  
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
//  if(song_val==0)
  //    kirakira();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  
  servo_write(0,90);tone(12,261,800);;//ド
  delay(900);
  //servo_write(0,0);
  delay(150);
  servo_write(0,90);tone(12,261,800);//ド
  delay(900);
  //servo_write(0,0);
  delay(150);
  servo_write(0,90);tone(12,261,800);//ド
  delay(900);
  //servo_write(0,0);
  delay(150);
  servo_write(0,90);tone(12,261,800);//ド
  delay(900);
  servo_write(0,0);
  delay(150);
  
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
    
 // if(song_val==0)
    //  kirakira();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  
  servo_write(0,90);tone(12,261,200);//ド
  delay(300);
  //servo_write(0,0);
  servo_write(0,90);tone(12,261,300);//ド
  delay(300);
  servo_write(0,0);
  servo_write(1,90);tone(12,293,200);;//レ
  delay(300);
  //servo_write(1,0);
  servo_write(1,90);tone(12,293,300);//レ
  delay(300);
  servo_write(1,0);
  servo_write(2,90);tone(12,329,200);//ミ
  delay(300);
  //servo_write(2,0);
  servo_write(2,90);tone(12,329,300);//ミ
  delay(300);
  servo_write(2,0);
  servo_write(3,90);tone(12,349,200);//ファ
  delay(300);
  //servo_write(3,0);
  servo_write(3,90);tone(12,349,300);//ファ
  delay(300);
  servo_write(3,0);
  servo_write(2,90);tone(12,329,500);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(1,90);tone(12,293,500);//レ
  delay(500);
  servo_write(1,0);
  servo_write(0,90);tone(12,261,500);//ド
  delay(1000);
  servo_write(0,0);
  
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
//  if(song_val==0)
  //    kirakira();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  
}

int kirakira()//きらきら星
{
  Serial.print("きらきら");
  int ORU_PIN=4;
  int kaeru_kirakira;
  int mode_val;
  const byte MODE_PIN=3;
  pinMode(MODE_PIN,INPUT_PULLUP);
  int song_val;
  const byte SONG_PIN=2;
  pinMode(SONG_PIN,INPUT_PULLUP);
  pinMode(ORU_PIN,INPUT_PULLUP);
  kaeru_kirakira=digitalRead(ORU_PIN);
  
  servo_write(0,90);tone(12,261,200);//ド
  delay(500);
  //servo_write(0,0);
  servo_write(0,90);tone(12,261,300);//ド
  delay(500);
  servo_write(0,0);
  servo_write(4,90);tone(12,392,200);//ソ
  delay(500);
  //servo_write(4,0);
  servo_write(4,90);tone(12,392,300);//ソ
  delay(500);
  servo_write(4,0);
  servo_write(5,90);tone(12,440,200);//ラ
  delay(500);
  //servo_write(5,0);
   servo_write(5,90);tone(12,440,300);//ラ
  delay(500);
  servo_write(5,0);
  servo_write(4,90);tone(12,392,600);//ソ
  delay(500);
  servo_write(4,0);
  delay(500);

  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
//  if(song_val==1)
//      kaeru();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }

  servo_write(3,90);tone(12,349,200);//ファ
  delay(500);
  //servo_write(3,0);
  servo_write(3,90);tone(12,349,300);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(2,90);tone(12,329,200);//ミ
  delay(500);
  //servo_write(2,0);
  servo_write(2,90);tone(12,329,300);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(1,90);tone(12,293,200);//レ
  delay(500);
  //servo_write(1,0);
  servo_write(1,90);tone(12,293,300);//レ
  delay(500);
  servo_write(1,0);
  servo_write(0,90);tone(12,261,600);//ド
  delay(500);
  servo_write(0,0);
  delay(500);
  
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
 // if(song_val==1)
   //   kaeru();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  
  servo_write(4,90);tone(12,392,200);//ソ
  delay(500);
  //servo_write(4,0);
  servo_write(4,90);tone(12,392,300);//ソ
  delay(500);
  servo_write(4,0);
  servo_write(3,90);tone(12,349,200);//ファ
  delay(500);
  //servo_write(3,0);
  servo_write(3,90);tone(12,349,300);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(2,90);tone(12,329,200);//ミ
  delay(500);
  //servo_write(2,0);
  servo_write(2,90);tone(12,329,300);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(1,90);tone(12,293,600);//レ
  delay(500);
  servo_write(1,0);
  delay(500);
  
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
//  if(song_val==1)
  //    kaeru();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }

  servo_write(4,90);tone(12,392,200);//ソ
  delay(500);
  //servo_write(4,0);
  servo_write(4,90);tone(12,392,300);//ソ
  delay(500);
  servo_write(4,0);
  servo_write(3,90);tone(12,349,200);//ファ
  delay(500);
  //servo_write(3,0);
  servo_write(3,90);tone(12,349,300);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(2,90);tone(12,329,200);//ミ
  delay(500);
  //servo_write(2,0);
  servo_write(2,90);tone(12,329,300);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(1,90);tone(12,293,600);//レ
  delay(500);
  servo_write(1,0);
  delay(500);
  
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
//  if(song_val==1)
  //    kaeru();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }

   servo_write(0,90);tone(12,261,200);//ド
  delay(500);
  //servo_write(0,0);
  servo_write(0,90);tone(12,261,300);//ド
  delay(500);
  servo_write(0,0);
  servo_write(4,90);tone(12,392,200);//ソ
  delay(500);
  //servo_write(4,0);
  servo_write(4,90);tone(12,392,300);//ソ
  delay(500);
  servo_write(4,0);
  servo_write(5,90);tone(12,440,200);//ラ
  delay(500);
  //servo_write(5,0);
   servo_write(5,90);tone(12,440,300);//ラ
  delay(500);
  servo_write(5,0);
  servo_write(4,90);tone(12,392,600);//ソ
  delay(500);
  servo_write(4,0);
  delay(500);
  
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
//  if(song_val==1)
  //    kaeru();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  
  servo_write(3,90);tone(12,349,200);//ファ
  delay(500);
  //servo_write(3,0);
  servo_write(3,90);tone(12,349,300);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(2,90);tone(12,329,200);//ミ
  delay(500);
  //servo_write(2,0);
  servo_write(2,90);tone(12,329,300);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(1,90);tone(12,293,200);//レ
  delay(500);
  //servo_write(1,0);
  servo_write(1,90);tone(12,293,300);//レ
  delay(500);
  servo_write(1,0);
  servo_write(0,90);tone(12,261,600);//ド
  delay(500);
  servo_write(0,0);
  delay(500);
  
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
 // if(song_val==1)
   //   kaeru();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  
}
*/

int oniki(){
  Serial.println("piano");
  int OTO_PIN=2;
  int low_high;
  pinMode(OTO_PIN,INPUT_PULLUP);
  low_high=digitalRead(OTO_PIN);

  Serial.println(low_high);
  if(low_high==1){
    Serial.println("high");
    int value1;
    float volt1;
    int value2;
    float volt2;
    const int VOL1_PIN = A0;
    const int VOL2_PIN = A1;
    #define BEATTIME 250

    value1 = analogRead( VOL1_PIN );
    volt1 = value1 * 5.0 / 1023.0;

    value2 = analogRead( VOL2_PIN );
    volt2 = value2 * 5.0 / 1023.0;

    Serial.print( "Value1: " );
    Serial.print( value1 );
    Serial.print( "  Volt1: " );
    Serial.println( volt1 );

   Serial.print( "Value2: " );
    Serial.print( value2 );
    Serial.print( "  Volt2: " );
    Serial.println( volt2 );

    if(volt1<0.5){
    tone(12,523,BEATTIME);//ソ
      delay(100);
      }
    else{
      if(volt1<1){
        tone(12,493,BEATTIME);//ラ
        delay(100);
      }
      else{
        if(volt1<2){
          tone(12,440,BEATTIME);//シ
          delay(100);
        }
        else{
          if(volt1<2.8){
             tone(12,391,BEATTIME);//ド
             delay(100);
          }
          else{
            delay(100);
          }
        }
      }
    }
      if(volt2<0.5){
    tone(12,261,BEATTIME);//ド
      delay(100);
      }
  
    else{
      if(volt2<1){
        tone(12,293,BEATTIME);//レ
        delay(100);
      }
      else{
        if(volt2<2){
          tone(12,329,BEATTIME);//ミ
          delay(100);
        }
        else{
          if(volt2<2.8){
             tone(12,349,BEATTIME);//ファ
             delay(100);
          }
          else{
            delay(100);
          }
        }
      }
    }
  }
  if(low_high==0){
    Serial.println("low");
    int value1;
    float volt1;
    int value2;
    float volt2;
    const int VOL1_PIN = A0;
    const int VOL2_PIN = A1;
    #define BEATTIME 250


    value1 = analogRead( VOL1_PIN );
    volt1 = value1 * 5.0 / 1023.0;

    value2 = analogRead( VOL2_PIN );
    volt2 = value2 * 5.0 / 1023.0;

    Serial.print( "Value1: " );
    Serial.print( value1 );
    Serial.print( "  Volt1: " );
    Serial.println( volt1 );

   Serial.print( "Value2: " );
    Serial.print( value2 );
    Serial.print( "  Volt2: " );
    Serial.println( volt2 );

    if(volt1<0.5){
    tone(12,1046,BEATTIME);//ソ
      delay(100);
      }
    else{
      if(volt1<1){
        tone(12,987,BEATTIME);//ラ
        delay(100);
      }
      else{
        if(volt1<2){
          tone(12,880,BEATTIME);//シ
          delay(100);
        }
        else{
          if(volt1<2.8){
             tone(12,783,BEATTIME);//ド
             delay(100);
          }
          else{
            delay(100);
          }
        }
      }
    }
      if(volt2<0.5){
    tone(12,523,BEATTIME);//ド
      delay(100);
      }
  
    else{
      if(volt2<1){
        tone(12,587,BEATTIME);//レ
        delay(100);
      }
      else{
        if(volt2<2){
          tone(12,659,BEATTIME);//ミ
          delay(100);
        }
        else{
          if(volt2<2.8){
             tone(12,698,BEATTIME);//ファ
             delay(100);
          }
          else{
            delay(100);
          }
        }
      }
    }
  }
  return(0);
}


int oru(){
  Serial.println("oru");
  int ORU_PIN=4;
  int kaeru_kirakira;
  int mode_val;
  const byte MODE_PIN=3;
  pinMode(MODE_PIN,INPUT_PULLUP);
  int song_val;
  const byte SONG_PIN=2;
  pinMode(SONG_PIN,INPUT_PULLUP);
  pinMode(ORU_PIN,INPUT_PULLUP);
  kaeru_kirakira=digitalRead(ORU_PIN);

  if(kaeru_kirakira==1){
    Serial.print("カエルの歌");
  
  servo_write(0,90);tone(12,261);//ド
  delay(500);
  servo_write(0,0);
  servo_write(1,90);tone(12,293);//レ
  delay(500);
  servo_write(1,0);
  servo_write(2,90);tone(12,329);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(3,90);tone(12,349);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(2,90);tone(12,329);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(1,90);tone(12,293);//レ
  delay(500);
  servo_write(1,0);
  servo_write(0,90);tone(12,261,700);//ド
  delay(1000);
  servo_write(0,0);
  /*
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
 // if(song_val==0)
   //   kirakira();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  */
  servo_write(2,90);tone(12,329);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(3,90);tone(12,349);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(4,90);tone(12,392);//ソ
  delay(500);
  servo_write(4,0);
  servo_write(5,90);tone(12,440);//ラ
  delay(500);
  servo_write(5,0);
  servo_write(4,90);tone(12,392);//ソ
  delay(500);
  servo_write(4,0);
  servo_write(3,90);tone(12,349);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(2,90);tone(12,329,700);//ミ
  delay(1000);
  servo_write(2,0);
  /*
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
 // if(song_val==0)
   //   kirakira();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  */
  servo_write(0,90);tone(12,261,800);;//ド
  delay(900);
  //servo_write(0,0);
  delay(150);
  servo_write(0,90);tone(12,261,800);//ド
  delay(900);
  //servo_write(0,0);
  delay(150);
  servo_write(0,90);tone(12,261,800);//ド
  delay(900);
  //servo_write(0,0);
  delay(150);
  servo_write(0,90);tone(12,261,800);//ド
  delay(900);
  servo_write(0,0);
  delay(150);
  /*
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
    
 // if(song_val==0)
   //   kirakira();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  */
  servo_write(0,90);tone(12,261,200);//ド
  delay(300);
  //servo_write(0,0);
  servo_write(0,90);tone(12,261,300);//ド
  delay(300);
  servo_write(0,0);
  servo_write(1,90);tone(12,293,200);;//レ
  delay(300);
  //servo_write(1,0);
  servo_write(1,90);tone(12,293,300);//レ
  delay(300);
  servo_write(1,0);
  servo_write(2,90);tone(12,329,200);//ミ
  delay(300);
  //servo_write(2,0);
  servo_write(2,90);tone(12,329,300);//ミ
  delay(300);
  servo_write(2,0);
  servo_write(3,90);tone(12,349,200);//ファ
  delay(300);
  //servo_write(3,0);
  servo_write(3,90);tone(12,349,300);//ファ
  delay(300);
  servo_write(3,0);
  servo_write(2,90);tone(12,329,500);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(1,90);tone(12,293,500);//レ
  delay(500);
  servo_write(1,0);
  servo_write(0,90);tone(12,261,500);//ド
  delay(1000);
  servo_write(0,0);
  /*
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
//  if(song_val==0)
  //    kirakira();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  */
 }
  if(kaeru_kirakira==0){
    Serial.print("きらきら");
  
  servo_write(0,90);tone(12,261,200);//ド
  delay(500);
  //servo_write(0,0);
  servo_write(0,90);tone(12,261,300);//ド
  delay(500);
  servo_write(0,0);
  servo_write(4,90);tone(12,392,200);//ソ
  delay(500);
  //servo_write(4,0);
  servo_write(4,90);tone(12,392,300);//ソ
  delay(500);
  servo_write(4,0);
  servo_write(5,90);tone(12,440,200);//ラ
  delay(500);
  //servo_write(5,0);
   servo_write(5,90);tone(12,440,300);//ラ
  delay(500);
  servo_write(5,0);
  servo_write(4,90);tone(12,392,600);//ソ
  delay(500);
  servo_write(4,0);
  delay(500);
/*
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
//  if(song_val==1)
  //    kaeru();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
*/
  servo_write(3,90);tone(12,349,200);//ファ
  delay(500);
  //servo_write(3,0);
  servo_write(3,90);tone(12,349,300);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(2,90);tone(12,329,200);//ミ
  delay(500);
  //servo_write(2,0);
  servo_write(2,90);tone(12,329,300);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(1,90);tone(12,293,200);//レ
  delay(500);
  //servo_write(1,0);
  servo_write(1,90);tone(12,293,300);//レ
  delay(500);
  servo_write(1,0);
  servo_write(0,90);tone(12,261,600);//ド
  delay(500);
  servo_write(0,0);
  delay(500);
  /*
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
//  if(song_val==1)
  //    kaeru();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  */
  servo_write(4,90);tone(12,392,200);//ソ
  delay(500);
  //servo_write(4,0);
  servo_write(4,90);tone(12,392,300);//ソ
  delay(500);
  servo_write(4,0);
  servo_write(3,90);tone(12,349,200);//ファ
  delay(500);
  //servo_write(3,0);
  servo_write(3,90);tone(12,349,300);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(2,90);tone(12,329,200);//ミ
  delay(500);
  //servo_write(2,0);
  servo_write(2,90);tone(12,329,300);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(1,90);tone(12,293,600);//レ
  delay(500);
  servo_write(1,0);
  delay(500);
  /*
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
//  if(song_val==1)
  //    kaeru();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
*/
  servo_write(4,90);tone(12,392,200);//ソ
  delay(500);
  //servo_write(4,0);
  servo_write(4,90);tone(12,392,300);//ソ
  delay(500);
  servo_write(4,0);
  servo_write(3,90);tone(12,349,200);//ファ
  delay(500);
  //servo_write(3,0);
  servo_write(3,90);tone(12,349,300);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(2,90);tone(12,329,200);//ミ
  delay(500);
  //servo_write(2,0);
  servo_write(2,90);tone(12,329,300);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(1,90);tone(12,293,600);//レ
  delay(500);
  servo_write(1,0);
  delay(500);
  /*
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
//  if(song_val==1)
  //    kaeru();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
*/
   servo_write(0,90);tone(12,261,200);//ド
  delay(500);
  //servo_write(0,0);
  servo_write(0,90);tone(12,261,300);//ド
  delay(500);
  servo_write(0,0);
  servo_write(4,90);tone(12,392,200);//ソ
  delay(500);
  //servo_write(4,0);
  servo_write(4,90);tone(12,392,300);//ソ
  delay(500);
  servo_write(4,0);
  servo_write(5,90);tone(12,440,200);//ラ
  delay(500);
  //servo_write(5,0);
   servo_write(5,90);tone(12,440,300);//ラ
  delay(500);
  servo_write(5,0);
  servo_write(4,90);tone(12,392,600);//ソ
  delay(500);
  servo_write(4,0);
  delay(500);
  /*
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
 // if(song_val==1)
   //   kaeru();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  */
  servo_write(3,90);tone(12,349,200);//ファ
  delay(500);
  //servo_write(3,0);
  servo_write(3,90);tone(12,349,300);//ファ
  delay(500);
  servo_write(3,0);
  servo_write(2,90);tone(12,329,200);//ミ
  delay(500);
  //servo_write(2,0);
  servo_write(2,90);tone(12,329,300);//ミ
  delay(500);
  servo_write(2,0);
  servo_write(1,90);tone(12,293,200);//レ
  delay(500);
  //servo_write(1,0);
  servo_write(1,90);tone(12,293,300);//レ
  delay(500);
  servo_write(1,0);
  servo_write(0,90);tone(12,261,600);//ド
  delay(500);
  servo_write(0,0);
  delay(500);
  /*
  mode_val=digitalRead(MODE_PIN);
  song_val=digitalRead(SONG_PIN);
  
//  if(song_val==1)
  //    kaeru();
      
  if(mode_val==0)
  {
    oniki();
    return 0;
  }
  */
  }
  
  return(0);

}





void setup()
{
  pwm.begin();
  pwm.setPWMFreq(60);
  Serial.begin( 115200 );
}

void loop(){
  int mode_val;
  const byte MODE_PIN=3;
  
  pinMode(MODE_PIN,INPUT_PULLUP);
  mode_val=digitalRead(MODE_PIN);
  
  servo_write(0,0);
  servo_write(1,0);
  servo_write(2,0);
  servo_write(3,0);
  servo_write(4,0);
  servo_write(5,0);
  
  if(mode_val==1){
    Serial.println("oru");
    oru();
  }
  if(mode_val==0){
    Serial.println("oniki");
    oniki();
  }
  return(0);
}
