/*��ĳ��ҵ2006��Ĳ�ֵΪ5000�򣬼ƻ��Ժ�ÿ���������Ϊ��x x�Ӽ������룬��������8.75��ʾ8.75%����
 �������ҵ�Ĳ�ֵ������ʵ�ַ����Լ�����ʱ�Ĳ�ֵ��Ȼ����������ʱ����Ϊ��λ��Ӧ������С������*/

#include <stdio.h>
int main(void)
{
    float x0,x,y=5000;
    int year=2006;
    printf("Please input the rate: ");
    scanf("%f",&x0);
    x=x0/100; 
    while(y<=10000){
    	y=y*(1+x);
    	year++;
	}
	printf("The year that output value will achieve is %d \n that time the output value is %.2f\n",year,y);
    return 0;
}

