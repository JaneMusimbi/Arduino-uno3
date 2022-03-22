// int Black = 1
// int Green = 0
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
}
void loop()
{
  digitalWrite(1, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(1, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(0, HIGH);
  delay(300);
  digitalWrite(0,LOW);
  delay(300);
}
  
i love coding 

  
  