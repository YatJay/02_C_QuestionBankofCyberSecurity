/*�Ӽ�������һ���������εı߳������ͣ�������������ε�������ܳ���
ע�����ݡ����ף��ؾ��ء���ʽ��area����p(p-a)(p-b)(p-c)������p��(a+b+c)/2��a,b,cΪ�����ε�3���߳���*/

/*
sqrt()��������
	�����ܡ�sqrt() ���������ֵ��ƽ������
	��ԭ�͡�double sqrt(double x);
	��ͷ�ļ���#include <math.h>
	��������x ΪҪ����ƽ������ֵ��
	��������� x < 0�����ᵼ�� domain error ���󣬲���ȫ�ֱ��� errno ��ֵΪ����Ϊ EDOM��
	������ֵ������ x ƽ������Ϊdouble���͡�
*/
#include <stdio.h>
#include <math.h> 
int main(void){
    int a,len;
    double p,area;
    printf("Please input the length of the Equilateral triangle: ");
    scanf("%d",&a);
    
    len=3*a;
    p=len/2;
    area=sqrt(p*(p-a)*(p-a)*(p-a));
    
    printf("\nThe area of this triangle is %.2f , the perimeter of this triangle is %d.",area,len);   
    return 0;
}
