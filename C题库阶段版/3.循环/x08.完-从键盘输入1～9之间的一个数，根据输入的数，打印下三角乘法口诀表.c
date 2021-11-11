/*从键盘输入1～9之间的一个数，根据输入的数，打印下三角乘法口诀表。要求积的输出占3个宽度，且左对齐。*/

/*
细节：
	printf("%-3d",a); 表示输出 输出占3个宽度，且左对齐
	printf()对于整数和小数，默认右对齐，不足的宽度以空格补齐
*/
#include <stdio.h>
int main(void){
    int n,i,j;
    printf("Please input n(1～9):");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
    	for(j=1;j<=i;j++){
    		printf("%d*%d=%-3d  ",j,i,i*j);
		}
		puts("\n");
	}
    
    return 0;
}
