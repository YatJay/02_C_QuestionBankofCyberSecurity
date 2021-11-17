/*从键盘上输入矩阵的阶数n(n<=14), 矩阵中元素的值等于其位置的行数和列数之和的n倍（行列的值从0开始计数），如n=3时，矩阵为
        0   3   6
        3   6   9
        6   9   12
　　先输出该矩阵(显示时每个数宽度为4、右对齐)，然后计算输出sum1和sum2的值：sum1为矩阵中所有不靠边元素之和、sum2为矩阵的一条对角线元素之和。
	编程可用素材：printf("Enter n: ")...、printf("sum1=...\nsum2=...\n"...。
*/
#include <stdio.h>
int main(void){
    int a[14][14],i,j,sum1=0,sum2=0,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		a[i][j]=n*(i+j);
    		printf("%4d",a[i][j]);
    		
    		if(!(i==0||i==n-1||j==0||j==n-1)){
    			sum1+=a[i][j];
			}
			if(i==j){
				sum2+=a[i][j];
			}
		}
		putchar(10);
	}
	
	printf("sum1=%d\nsum2=%d\n",sum1,sum2);   
    return 0;
}
