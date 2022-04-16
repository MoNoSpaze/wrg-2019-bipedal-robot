#include<ATX2.h>
int x, a;
void setup() {
  OK();
  servo(1, 97);
  servo(5, 97);
  servo(2, 87);
  servo(3, 85);
  servo(4, 88);
  servo(6, 95);
  servo(7, 90);
  servo(8, 87);
}

void loop() {
  while (uart1_ready() > 0) {
    x = uart1_read();
  }
  switch (x) {
    case 0x80:
      for (a = 87; a <= 97; a++) {
        servo(8, a);
        delay(10);
      }
      for (a = 92; a >=82; a--) {
        servo(4, a);
        delay(10);
      }
      for (a = 95; a <= 130; a++) {
        servo(6, a);
        delay(10);
      }
      for (a = 90; a >= 60; a--) {
        servo(7, a);
        delay(10);
      }
      for (a = 90; a >= 60; a--) {
        servo(2, 67);
        delay(10);
      }
      for (a = 95; a <= 130; a++) {
        servo(3, 105);
        delay(10);
      }
      break;

    case 0x08:
      servo(4,102);
      delay(100);
      servo(8,70);
      delay(100);
      servo(4,75);
      break;

      case 0x01:
      servo(8,97);
      delay(100);
      servo(4,75);
      delay(100);
      servo(8,87);
      delay(100);//ยกขา
      servo(6,130);
      servo(7,70);
      delay(100);//งอขา
      servo(1,85);
      delay(50);
      servo(5,87);
      delay(100); //จังหวะมุนตัวก้าว
      servo(6,120);
      servo(7,80);  
      servo(4,88);
      servo(8,87);
      delay(200);//จังหวะงอขาลง
      servo(1,95);
      servo(5,90); 
      
      servo(2, 87);
      servo(3, 85);
      servo(4, 88);
      servo(6, 95);
      servo(7, 90);
      servo(8, 87);
      
      servo(4,85);
      delay(100);
      servo(8,82);
      delay(100);
      servo(4,92);
      delay(100);//ยกขา
      servo(2,122);
      servo(3,60);
      delay(100);//งอขา
      servo(5,105);
      delay(50);
      servo(1,110);
      servo(6, 115);
      delay(100); //จังหวะมุนตัวก้าว
      servo(2,102);
      servo(3,75);  
      servo(8,83);
      servo(4,88);
      delay(200);//จังหวะงอขาลง
      servo(1,95);
      servo(5,90);
      servo(2, 87);
      servo(3, 85);
      servo(4, 88);
      servo(6, 95);
      servo(7, 90);
      servo(8, 87);
      

      break;

      case 0x20:

      
      
       servo(4,78);
      delay(100);
      servo(8,77);
      delay(100);
      servo(4,92);
      servo(5,105);
      servo(1,110);
      delay(100);//ยกขา
      servo(2,122);
      servo(3,55);
      delay(100);//งอขา
      servo(6, 115);
      delay(100); //จังหวะมุนตัวก้าว
      servo(2,112);
      servo(3,65);  
      servo(8,83);
      servo(4,88);
    
      delay(300);//จังหวะงอขาลง
      servo(1,95);
      servo(5,90);
       
      servo(2, 87);
      servo(3, 85);
      servo(4, 88);
      servo(6, 95);
      servo(7, 90);
      servo(8, 87);
      delay(100);

      break;

      case 0x40:
    servo(8,97);
      delay(100);
      servo(4,75);
      delay(100);
      servo(8,87);
      delay(100);//ยกขา
      servo(6,130);
      servo(7,70);
      delay(100);//งอขา
      servo(1,85);
      delay(50);
      servo(5,87);
      delay(100); //จังหวะมุนตัวก้าว
      servo(6,120);
      servo(7,80);  
      servo(4,88);
      servo(8,87);
      delay(300);//จังหวะงอขาลง
     
      servo(2, 87);
      servo(3, 85);
      servo(4, 88);
      servo(6, 95);
      servo(7, 90);
      servo(8, 87);
      delay(100);
     
        break;
    case 0xFF:
     
      servo(1, 95);
      servo(5, 97);
      servo(2, 87);
      servo(3, 85);
      servo(4, 88);
      servo(6, 95);
      servo(7, 90);
      servo(8, 87);
    default:
      AO();
  }
}