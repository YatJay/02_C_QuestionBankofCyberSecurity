/*题目描述
给定两个正整数，计算这两个数的最小公倍数。

输入格式
输入测试数据，包括两个不大于1000的正整数。

输出
对于每个测试用例，给出这两个数的最小公倍数，每个实例输出一行。
*/

#include <stdio.h>
int main(void){
    int m,n,i,zdgys,zxgbs;
    printf("Please input a and b: ");
    scanf("%d %d",&m,&n);
    
    if(m>=1000||n>=1000||m<=0||n<=0){
    	printf("Input error!\n");
    	return 0;
	}
    for(i=1;i<=m&&i<=n;i++){
    	if(m%i==0&&n%i==0){
    		zdgys=i;
		}
	}
	zxgbs=m*n/zdgys;
	printf("Output:%d",zxgbs);
    
    return 0;
}
