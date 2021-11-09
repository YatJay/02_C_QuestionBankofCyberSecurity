/*设某企业2006年的产值为5000万，计划以后每年的增长率为（x x从键盘输入，例如输入8.75表示8.75%），
 计算该企业的产值在哪年实现翻番以及翻番时的产值，然后输出（输出时以万为单位，应考虑有小数）。*/

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

