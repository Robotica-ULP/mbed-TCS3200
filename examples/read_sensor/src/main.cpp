#include "mbed.h"
#include <color.h>

Serial pc(USBTX,USBRX);

ColorSensor c1(PTC2,PTA2,PTC3);
ColorSensor c2(PTB9,PTB23,PTA1);

int main(){

  while(1){

        pc.printf("red: %d blue: %d green: %d \n",c1.getRed(),c1.getBlue(),c1.getGreen());
        pc.printf("red2: %d blue2: %d green3: %d \n",c2.getRed(),c2.getBlue(),c2.getGreen());

        wait_ms(100);
  }

}
