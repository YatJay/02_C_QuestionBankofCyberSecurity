/* 有一递推数列，满足f(0)=0,f(1)=1,f(2)=2,  f(n+1)=2f(n)+f(n-1)f(n-2) (n>=2), 
	编写程序求f(n)的值（n由键盘输入，13>=n>=2）。
	编程可用素材：printf("Input n (13>=n>=2): ")...、printf("Output:\nf(...)=...\n"...。
　　程序的运行效果应类似地如图1所示，图1中的10是从键盘输入的内容。*/

/*
本题改动版本使用数组实现递归，不使用递归函数 
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
		res=2*fun(n-1)+fun(n-2)*fun(n-3);  //注意把题目函数中的n使用n-1代换
	}
	return res;
}
