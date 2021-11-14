/*从键盘输入一个整数n(n≥0)和x，计算对应的n阶勒让德多项式Pn(x)的值，并按示例格式输出相应信息。n阶勒让德多项式Pn(x)的定义如下：
　　　　 　　　┌　1                                  (n=0)
　　　　Pn(x)= ├　x                                  (n=1)
　　　　 　　　└((2n-1)*P 下标n-1 (x) - (n-1)*P 下标n-2 (x)) / n      (n>1)
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
