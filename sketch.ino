#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Button Pins
const int writeBtn = 2;
const int readBtn  = 3;
const int sleepBtn = 4;
const int wakeBtn  = 5;

// LED Pin
const int led = 8;

// Simulated SRAM Data
String memoryData = "10101010";

void setup() {
  pinMode(writeBtn, INPUT_PULLUP);
  pinMode(readBtn, INPUT_PULLUP);
  pinMode(sleepBtn, INPUT_PULLUP);
  pinMode(wakeBtn, INPUT_PULLUP);
  pinMode(led, OUTPUT);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);

  display.setCursor(10, 10);
  display.println("Ultra Low Power");
  display.setCursor(25, 25);
  display.println("SRAM");
  display.setCursor(15, 40);
  display.println("Simulator");
  display.display();

  delay(2000);
}

void loop() {

  // WRITE
  if (digitalRead(writeBtn) == LOW) {

    digitalWrite(led, HIGH);

    display.clearDisplay();
    display.setCursor(0,0);
    display.println("WRITE SUCCESS");
    display.println();
    display.print("Stored Data:");
    display.println(memoryData);
    display.display();

    delay(1000);
    digitalWrite(led, LOW);
  }

  // READ
  if (digitalRead(readBtn) == LOW) {

    digitalWrite(led, HIGH);

    display.clearDisplay();
    display.setCursor(0,0);
    display.println("READ SUCCESS");
    display.println();
    display.print("Data:");
    display.println(memoryData);
    display.display();

    delay(1000);
    digitalWrite(led, LOW);
  }

  // SLEEP
  if (digitalRead(sleepBtn) == LOW) {

    digitalWrite(led, LOW);

    display.clearDisplay();
    display.setCursor(0,0);
    display.println("LOW POWER MODE");
    display.println();
    display.println("Sleeping...");
    display.display();

    delay(2000);
  }

  // WAKE
  if (digitalRead(wakeBtn) == LOW) {

    digitalWrite(led, HIGH);

    display.clearDisplay();
    display.setCursor(0,0);
    display.println("SYSTEM AWAKE");
    display.println();
    display.print("Stored Data:");
    display.println(memoryData);
    display.display();

    delay(1000);
    digitalWrite(led, LOW);
  }
}
