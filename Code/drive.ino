void drive() {
  delay(100);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Fuelht Auf");
  servoArm.write(0);
  delay(500);

  if (button1 == 1) {
    servoArm.write(20);
    delay(100);
    for (int i = 0; i < füllmenge * 60; i++) {
      digitalWrite(pumpe, HIGH);
    }
    digitalWrite(pumpe, LOW);
    button1 = 0;
    delay (100);
  }

  if (button2 == 1) {
    servoArm.write(40);
    delay(100);
    for (int i = 0; i < füllmenge * 60; i++) {
      digitalWrite(pumpe, HIGH);
    }
    digitalWrite(pumpe, LOW);
    button2 = 0;
    delay (100);
  }

  if (button3 == 1) {
    servoArm.write(60);
    delay(100);
    for (int i = 0; i < füllmenge * 60; i++) {
      digitalWrite(pumpe, HIGH);
    }
    digitalWrite(pumpe, LOW);
    button3 = 0;
    delay (100);
  }
}
