/*从键盘输入a,b,x,y的值，计算以下算术表达式的值：	(double)(a+b)/2+(int)x%(int)y 
输入格式	只有一行，包含四个数a，b，x，y，用空格隔开。其中x和y是浮点数，a和b是整数。 
输出	输出题目描述中表达式的值并保留6位小数。注意行尾输出换行。 */

#include <stdio.h>
int main(void){
    int a,b;
    double x,y;
    double res;
    printf("Please input a b x y: ");
    scanf("%d %d %lf %lf",&a,&b,&x,&y);
    res=(double)(a+b)/2+(int)x%(int)y;
    printf("\nThe result is %f",res);
    return 0;
}
