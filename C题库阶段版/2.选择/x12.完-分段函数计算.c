/*x(xֻ��������int�ұ��붨��Ϊint����F(x)��ȫ���ܳ���int�ı�ʾ��Χ)ͨ����������(����ǰ������ʾPlease input x:)��Ȼ����㲢����Ļ���������ֵ��*/

#include <stdio.h>
int main(void)
{
    int x;
	float res;
    printf("Please input x:");
    scanf("%d",&x);
    if(x<0){
    	res = -5*(float)x+27; 
	}
    if(x==0){
    	res = 7909;
	}
    else{
		res = 2*(float)x - 1;
	} 
    
    printf("F(%d) = %.0f",x,res);
    
    return 0;
}
