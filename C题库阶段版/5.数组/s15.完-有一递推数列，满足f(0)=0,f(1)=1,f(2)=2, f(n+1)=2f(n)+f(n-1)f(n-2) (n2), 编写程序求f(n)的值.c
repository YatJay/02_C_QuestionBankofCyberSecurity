/* ��һ�������У�����f(0)=0,f(1)=1,f(2)=2,  f(n+1)=2f(n)+f(n-1)f(n-2) (n>=2), 
	��д������f(n)��ֵ��n�ɼ������룬13>=n>=2����
	��̿����زģ�printf("Input n (13>=n>=2): ")...��printf("Output:\nf(...)=...\n"...��
�������������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�10�ǴӼ�����������ݡ�*/

/*
����Ķ��汾ʹ������ʵ�ֵݹ飬��ʹ�õݹ麯�� 
*/
#include <stdio.h>
int fun(int n);
int main(void){
    int n;
    printf("Input n (13>=n>=2): ");
    scanf("%d",&n);
    printf("Output:\nf(%d)=%d\n",n,fun(n));
    return 0;
}

int fun(int n){
	int res;
	if(n==0) res=0;
	else if(n==1) res=1;
	else if(n==2) res=2;
	else if(n-1>=2){
		res=2*fun(n-1)+fun(n-2)*fun(n-3);  //ע�����Ŀ�����е�nʹ��n-1����
	}
	return res;
}
