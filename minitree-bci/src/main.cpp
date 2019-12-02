#include <Arduino.h>

const int redPin = 11; 
const int greenPin = 10;
const int bluePin = 9;
unsigned long time = 100;

void setup() {
  Serial.begin(19200);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  Serial.print("Start :)");
  Serial.print('\n');
}
void loop() {
    /*byte x = Serial.available();
    int red = Serial.parseInt();
    int green = Serial.parseInt();
    int blue = Serial.parseInt();
    char buff = Serial.read();
    /*(millis() - time1 >= 100){
    time1 = millis();
    analogWrite(red, 255);
    }    
    task void job1 (void);  
    _task void job2 (void);                                           
    os_tsk_create (job1, 0);*/
      /*while (Serial.available() >= 0){                          
                if (Serial.available() == 0&&(buff == '\n' || buff == '\r')){                                          
                    analogWrite(redPin, 255);
                    analogWrite(greenPin, 255);
                    analogWrite(bluePin, 255);
                    Serial.println(redPin, DEC);
                    Serial.println(greenPin, DEC);
                    Serial.println(bluePin, DEC);
                    break;}                                    
                else if (Serial.available() > 0&&(buff == '\n' || buff == '\r')){
                    red = constrain(red, 0, 255);
                    green = constrain(green, 0, 255);
                    blue = constrain(blue, 0, 255);
                    analogWrite(redPin, red);
                    analogWrite(greenPin, green);
                    analogWrite(bluePin, blue);
                    Serial.println(red, DEC);
                    Serial.println(green, DEC);
                    Serial.println(blue, DEC);
                       }
                     }
                  }*/
                  
       
          
          byte x = Serial.available();
          char buff = Serial.read();
          if(millis() - x = 0 && buff == '\n' || buff == '\r'){
            time = millis();
            red1 = analogWrite(redPin, 255);
            green1 = analogWrite(greenPin, 255);
            blue1 = analogWrite(bluePin, 255);
            
            }
          if(millis() - x >0 && buff == '\n' || buff == '\r'){
            time = millis();
            red2 = constrain(red, 0, 255);
            green2 = constrain(green, 0, 255);
            blue2 = constrain(blue, 0, 255);
            }  
          }
          

       void set1(){ {
        
        break;
        }}

        void set2(){if (buff == '\r' || buff == '\r'){
          red = constrain(red, 0, 255);
          green = constrain(green, 0, 255);
          blue = constrain(blue, 0, 255);
          analogWrite(redPin, red);
          analogWrite(greenPin, green);
          analogWrite(bluePin, blue);
          delay(300);
          Serial.println(red, DEC);
          Serial.println(green, DEC);
          Serial.println(blue, DEC);
          break;
          }}