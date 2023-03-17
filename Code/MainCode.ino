#include <LiquidCrystal_I2C.h>
#include <Servo.h>
#include <WiFi.h>

// Fürs WIFI
const char* ssid = "Schnapshäcksler";
const char* password = "Penisbirne123";
const int channel = 10;  // WiFi Channel number between 1 and 13
const bool hide_SSID = false;
const int max_connection = 1;
// Set web server port number to 80
WiFiServer server(80);
// Variable to store the HTTP request
String header;


Servo servoArm;
LiquidCrystal_I2C lcd(0x27, 16, 2);

int button1 = 0, button2 = 0, button3 = 0;
int pumpe = 15;
int füllmenge = 5;
int einschalter = 4;
int einschalterstatus = 0;

void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(115200);
  servoArm.attach(2);
  pinMode(pumpe, OUTPUT);
}

void loop() {
  einschalterstatus = digitalRead(einschalter);
  if (einschalterstatus == HIGH) {
    drive();
    einschalterstatus == 0;
  }
}
