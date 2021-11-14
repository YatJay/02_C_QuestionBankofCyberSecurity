/*�Ӽ�������һ������n(n��0)��x�������Ӧ��n�����õ¶���ʽPn(x)��ֵ������ʾ����ʽ�����Ӧ��Ϣ��n�����õ¶���ʽPn(x)�Ķ������£�
�������� ����������1                                  (n=0)
��������Pn(x)= ����x                                  (n=1)
�������� ��������((2n-1)*P �±�n-1 (x) - (n-1)*P �±�n-2 (x)) / n      (n>1)
*/

#include <stdio.h>
double fun(int n,int x); 
int main(void){
    int n,x;
    double res;
    printf("Please input n & x:");
    scanf("%d %d",&n,&x);
    res=fun(n,x);
    printf("\n%.6f",res);
    return 0;
}

double fun(int n,int x){
	double res;
	if(n==0) res=1;
	else if(n==1) res=x;
	else{
		res=((2*n-1)*x*fun(n-1,x)-(n-1)*fun(n-2,x))/(double)n;
	}
	
	return res;
}
