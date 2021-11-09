/*x(x只考虑整数int且必须定义为int、但F(x)完全可能超过int的表示范围)通过键盘输入(输入前给出提示Please input x:)，然后计算并在屏幕上输出函数值。*/

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
