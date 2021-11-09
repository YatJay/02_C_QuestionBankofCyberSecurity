/*дһ������η���ax2+bx+c���ĺ��������������������ɼ�������a��b��c��Ȼ���������ĺ���resolve()�󷽳̵ĸ����������ע��b2-4ac���ڡ����ڻ�С��0�������*/

#include <stdio.h>
#include <math.h>

/******start******/
void resolve(double a,double b,double c);
/******end******/

int main()
{
	double a, b, c=0;
	printf("input a b c: ");
	scanf("%lf%lf%lf", &a, &b, &c);

	resolve(a, b, c);

	return 0;
}

/******start******/
void resolve(double a,double b,double c){
	double res1,res2;
	double delta=b*b-4*a*c;
	if(delta>0){
		res1=(0-b+sqrt(delta))/(2*a);
		res2=(0-b-sqrt(delta))/(2*a);
		printf("%.2f %.2f",res1,res2);
	}
	else if(delta==0){
		res1=(0-b)/(2*a); 
		printf("%.2f",res1);
	}
	else if(delta<0){
		printf("��ʵ����");
	}
}
/******end******/
