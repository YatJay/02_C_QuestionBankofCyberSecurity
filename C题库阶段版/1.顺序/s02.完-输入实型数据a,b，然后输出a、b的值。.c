/*����ʵ������a,b��Ȼ�����a��b��ֵ*/
/*
double�����ʵ������
	��������ʱʹ��%lf��Ϊ��ʽռλ��
	���ʱʹ��%f��Ϊ��ʽռλ�� 
*/
#include <stdio.h>
int main(void){
    double num1,num2;
    printf("Please input 2 number: ");
    scanf("%lf %lf",&num1,&num2);
    printf("\nOutput:%.2f %.2f",num1,num2);
    
    return 0;
}
