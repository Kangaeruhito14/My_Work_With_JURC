int buttonStatus1 = 0;
int buttonStatus2 = 0;
int buttonStatus3 = 0;
int buttonStatus4 = 0;

int lastPinValue1 = LOW;
int lastPinValue2 = LOW;
int lastPinValue3 = LOW;
int lastPinValue4 = LOW;

int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  Serial.begin(9600);
  lastPinValue1 = digitalRead(2);
  lastPinValue2 = digitalRead(3);
  lastPinValue3 = digitalRead(4);
  lastPinValue4 = digitalRead(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonStatus1 = digitalRead(2);
  buttonStatus2 = digitalRead(3);
  buttonStatus3 = digitalRead(4);
  buttonStatus4 = digitalRead(5);

  if (buttonStatus1 != lastPinValue1){
    if(buttonStatus1 == HIGH)
    {
      count1++;
      Serial.print("1st Button Clicked: ");
      Serial.println(count1);
    }
    lastPinValue1 = buttonStatus1;
  }

  if (buttonStatus2 != lastPinValue2){
    if(buttonStatus2 == HIGH)
    {
      count2++;
      Serial.print("2nd Button Clicked: ");
      Serial.println(count2);
    }
    lastPinValue2 = buttonStatus2;
  }

  if (buttonStatus3 != lastPinValue3){
    if(buttonStatus3 == HIGH)
    {
      count3++;
      Serial.print("3rd Button Clicked: ");
      Serial.println(count3);
    }
    lastPinValue3 = buttonStatus3;
  }

  if (buttonStatus4 != lastPinValue4){
    if(buttonStatus4 == HIGH)
    {
      count4++;
      Serial.print("4th Button Clicked: ");
      Serial.println(count4);
    }
    lastPinValue4 = buttonStatus4;
  }
}
