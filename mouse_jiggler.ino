#include <Mouse.h>


void setup()
{
  Mouse.begin();
}


void loop()
{
  int size = 16; // size of the circles
  int x = 3;
  int y = 3;  // step
  int timer = 35; // delay timer

  while(true) {
    for (int i = 0; i < size; i++){
      Mouse.move(-3, -3,0);
      delay(timer);
    }    
    for (int i = 0; i < size; i++){
      Mouse.move(-x, y,0);
      delay(timer);
    }    
    for (int i = 0; i < size; i++){
      Mouse.move(x, y,0);
      delay(timer);
    }    
    for (int i = 0; i < size*2; i++){
      Mouse.move(x, -y,0);
      delay(timer);
    }    
    for (int i = 0; i < size; i++){
      Mouse.move(x, y,0);
      delay(timer);
    }    
    for (int i = 0; i < size; i++){
      Mouse.move(-x, y,0);
      delay(timer);
    }
    for (int i = 0; i < size; i++){
      Mouse.move(-x, -y,0);
      delay(timer);
    }
    delay(500);
  }
}