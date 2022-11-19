char command; 

void setup() 
{       
  Serial.begin(9600);  //Set the baud rate to your Bluetooth module.
}

void loop()
{
  if(Serial.available() > 0)
  {
    command = Serial.read();
    Serial.println(command);
  }
}

