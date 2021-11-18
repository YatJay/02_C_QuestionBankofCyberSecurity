/*用键盘输入的整数产生5*5矩阵N，并按行输出该矩阵，每个元素占4个数位、右对齐。
  效果见图示*/
  
#include <stdio.h>
int main(void){
    int a[5][5],i,j,n;
	printf("Please input an integer:");
	scanf("%d",&n);
	for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		a[i][j]=n+i+j;
		}
	} 
    
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		printf("%4d",a[i][j]);
		}
		putchar(10);
	} 
    
    return 0;
}


