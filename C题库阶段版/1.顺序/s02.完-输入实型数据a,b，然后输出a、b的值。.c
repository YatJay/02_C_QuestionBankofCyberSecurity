/*输入实型数据a,b，然后输出a、b的值*/
/*
double定义的实型数据
	接收输入时使用%lf作为格式占位符
	输出时使用%f作为格式占位符 
*/
#include <stdio.h>
int main(void){
    double num1,num2;
    printf("Please input 2 number: ");
    scanf("%lf %lf",&num1,&num2);
    printf("\nOutput:%.2f %.2f",num1,num2);
    
    return 0;
}
