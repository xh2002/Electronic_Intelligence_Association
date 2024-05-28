int ledPin = 9;  //ledPin是变量名，定义接口为9 
void setup() 
{
 pinMode(ledPin, OUTPUT);  //设置Arduino数字引脚的模式
}
void loop() 
{
  digitalWrite(ledPin,HIGH); //设置为高电平
  delay(1000);  //延迟一秒
  digitalWrite(ledPin,LOW);  //设置为低电平
  delay(1000);  //延迟一秒
}