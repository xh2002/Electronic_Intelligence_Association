#include   <stdio.h>
 
int gcd(int a,int b)
{
     if(a<=0 || b<=0) return 0;    //����������Ĳ���С��0�򷵻�0
     if(a%b==0) return b;           //���b�ܱ�a������b�������Լ��
     else gcd(b,a%b);                //�ݹ� ���ú�������
 
}
 
int main()
{
    int a,b,c;
    printf("������������:\n");
    scanf("%d,%d",&b,&c);
    a=gcd(b,c);
    printf("%d��%d�����Լ��Ϊ��%d\n",b,c,a);
}
