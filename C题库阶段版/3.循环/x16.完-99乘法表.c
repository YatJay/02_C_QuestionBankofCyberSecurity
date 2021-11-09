/*输入：n(0<n<=9),输入越界时，提示"Input error!\n"并结束。
输出9*9乘法表，它的积左对齐，占3位
*/

#include <stdio.h>
int main(void){
    int n,i,j;
	printf("Please input n(<0n<=9): ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d * %d = %3d\t",j,i,i*j);
		}
		puts("\n");
	} 
    
    return 0;
}
