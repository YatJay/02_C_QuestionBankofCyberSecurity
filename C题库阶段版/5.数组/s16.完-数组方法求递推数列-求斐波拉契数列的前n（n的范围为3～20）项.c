/* 求斐波拉契数列的前n（n的范围为：3～20）项，并输出到屏幕上（数和数之间用字符'\t'隔开）。
斐波拉契公式：f(1)=1,f(2)=1,f(n)=f(n-1)+f(n-2) (n≥3)。
编程可用素材：printf("input a data(3--20):")...printf("Output:\n")...。
　程序的运行效果应类似地如图1所示，图1中的11是从键盘输入的内容。*/

#include <stdio.h>
int main(void){
    int a[20],i,n;
	printf("input a data(3--20):");
	scanf("%d",&n);
	
	a[0]=1;
	a[1]=1;
	for(i=2;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	
	printf("Output:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
    
    return 0;
}
