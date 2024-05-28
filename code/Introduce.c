#include   <stdio.h>
 
int gcd(int a,int b)
{
     if(a<=0 || b<=0) return 0;    //如果传进来的参数小于0则返回0
     if(a%b==0) return b;           //如果b能被a整除则b就是最大公约数
     else gcd(b,a%b);                //递归 调用函数本身
 
}
 
int main()
{
    int a,b,c;
    printf("请输入两个数:\n");
    scanf("%d,%d",&b,&c);
    a=gcd(b,c);
    printf("%d和%d的最大公约数为：%d\n",b,c,a);
}
