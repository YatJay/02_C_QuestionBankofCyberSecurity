/*�Ӽ�������a,b,x,y��ֵ�����������������ʽ��ֵ��	(double)(a+b)/2+(int)x%(int)y 
�����ʽ	ֻ��һ�У������ĸ���a��b��x��y���ÿո����������x��y�Ǹ�������a��b�������� 
���	�����Ŀ�����б��ʽ��ֵ������6λС����ע����β������С� */

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
