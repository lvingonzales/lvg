/*Liam Gonzales Neo-Pixel LEDs March 3rd 2020

*/

#include <Adafruit_NeoPixel.h>//Including the Neopixel Libraries
#define LED_PIN 6//defining the pin on which the LED is attached

#define LED_COUNT 16//defining the number of LEDs on the strip
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);//more Neo Pixel Stuff
int varc[3];//an array that houses random values for the colors
void setup() {
  // put your setup code here, to run once:
  strip.begin();//Initializes the Neo Pixel Strip
  strip.show();//Turns off all pixels
  strip.setBrightness(100);//Sets the brightness of the pixels
  pinMode(13, INPUT);//sets the pin mode of pin 13 to Input
  for (int i = 0; i <= 3; i++) { //randomising the values in the color array
    varc[i] = random(0, 255);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(13) == 1) { //if the button is pressed
    variety();//displays random colors on the strip
  } else {
    colorWipe(strip.Color(255, 255, 0), 20);//displays the color yellow on the strip
    colorWipe(strip.Color(255, 0, 255), 20);//displays the color pink on the strip
  }
}

void colorWipe(uint32_t color, int wait) { //function that handles the yellow - pink Blink
  //arguements include the RGB color values as well as an integer variable that sets the length of the delay
  for (int i = 0; i < strip.numPixels(); i++) { //for loop that cycles through each individual LED
    strip.setPixelColor(i, color);//sets the individual LED color
    strip.show();//activates the LED
    delay(wait);//sets a delay
  }
}

void variety() { //function that handles the random colors on the LED
  //arguements include the integer variable that sets the length of the delay
  strip.setPixelColor(0, strip.Color(varc[0], varc[1], varc[2])); //sets the individual LED color, Colors are random
  strip.setPixelColor(1, strip.Color(varc[2], varc[1], varc[3])); //sets the individual LED color, Colors are random
  strip.setPixelColor(2, strip.Color(varc[1], varc[3], varc[1])); //sets the individual LED color, Colors are random
  strip.setPixelColor(3, strip.Color(varc[2], varc[2], varc[2])); //sets the individual LED color, Colors are random
  strip.setPixelColor(4, strip.Color(varc[1], varc[1], varc[1])); //sets the individual LED color, Colors are random
  strip.setPixelColor(5, strip.Color(varc[3], varc[2], varc[1])); //sets the individual LED color, Colors are random
  strip.setPixelColor(6, strip.Color(varc[2], varc[1], varc[2])); //sets the individual LED color, Colors are random
  strip.setPixelColor(7, strip.Color(varc[1], varc[3], varc[2])); //sets the individual LED color, Colors are random
  strip.setPixelColor(8, strip.Color(varc[3], varc[2], varc[2])); //sets the individual LED color, Colors are random
  strip.setPixelColor(9, strip.Color(varc[2], varc[3], varc[2])); //sets the individual LED color, Colors are random
  strip.setPixelColor(10, strip.Color(varc[1], varc[1], varc[3])); //sets the individual LED color, Colors are random
  strip.setPixelColor(11, strip.Color(varc[1], varc[3], varc[3])); //sets the individual LED color, Colors are random
  strip.setPixelColor(12, strip.Color(varc[2], varc[2], varc[1])); //sets the individual LED color, Colors are random
  strip.setPixelColor(13, strip.Color(varc[1], varc[2], varc[2])); //sets the individual LED color, Colors are random
  strip.setPixelColor(14, strip.Color(varc[3], varc[3], varc[1])); //sets the individual LED color, Colors are random
  strip.setPixelColor(15, strip.Color(varc[1], varc[1], varc[2])); //sets the individual LED color, Colors are random
  strip.show();//activates the LED
  delay(50);//sets a delay

}
