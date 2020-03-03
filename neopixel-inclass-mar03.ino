/*Liam Gonzales Neo-Pixel LEDs March 3rd 2020
 * 
 */

#include <Adafruit_NeoPixel.h>//Including the Neopixel Libraries
#define LED_PIN 6//defining the pin on which the LED is attached

#define LED_COUNT 16//defining the number of LEDs on the strip

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);//more Neo Pixel Stuff

void setup() {
  // put your setup code here, to run once:
  strip.begin();//Initializes the Neo Pixel Strip
  strip.show();//Turns off all pixels
  strip.setBrightness(100);//Sets the brightness of the pixels
  pinMode(13, INPUT);//sets the pin mode of pin 13 to Input
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(13) == 1){//if the button is pressed
    variety(50);//displays random colors on the strip
  }else{
    colorWipe(strip.Color(255, 255, 0), 20);//displays the color yellow on the strip
    colorWipe(strip.Color(255, 0, 255), 20);//displays the color pink on the strip
  }
}

void colorWipe(uint32_t color, int wait){//function that handles the yellow - pink Blink
  //arguements include the RGB color values as well as an integer variable that sets the length of the delay
  for(int i = 0; i<strip.numPixels(); i++){//for loop that cycles through each individual LED
    strip.setPixelColor(i, color);//sets the individual LED color
    strip.show();//activates the LED
    delay(wait);//sets a delay
  }
}

void variety( int wait){//function that handles the random colors on the LED
  //arguements include the integer variable that sets the length of the delay
  for(int i = 0; i<strip.numPixels(); i++){//for loop that cycles through each individual LED
    strip.setPixelColor(i, strip.Color(random(0, 255),random(0, 255),random(0,255)));//sets the individual LED color, Colors are random
    strip.show();//activates the LED
    delay(wait);//sets a delay
  }
}
