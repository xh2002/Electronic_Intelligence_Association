const int buttonPin = 7;  //按钮引起电平改变的输入引脚

void setup() {
  int i;    //定义数据类型，设置输出引脚
    for (i=2;i<=5;i++){
      pinMode(i,OUTPUT);   //数字化脚位，指定输入输出
    } 
}

void loop() {              
    if(digitalRead(buttonPin)==HIGH)// F1子程序
    {
    F1();      
    delay(1000);    
    }
    
    else  //F2子程序
    {
    F2();
    delay(1000);  
    }
}

void F1()     //led从左往右依次点亮，从右到左依次熄灭
{
  int j;
  for(j=2;j<=5;j++)
  {
    digitalWrite(j,HIGH); //2-5号引脚为低电平，使灯一起亮
    delay(200);
  }
   for(j=5;j>=2;j--)
  {
    digitalWrite(j,LOW);  //2-5号引脚为高电平，使灯一起灭
    delay(200);
  } 
}

void F2()     //led从右往左依次点亮，从左到右依次熄灭
{
  int j;
  for(j=5;j>=2;j--)
  {
    digitalWrite(j,HIGH);
    delay(200);
  }
   for(j=2;j<=5;j++)
  {
    digitalWrite(j,LOW);
    delay(200);
  } 
}