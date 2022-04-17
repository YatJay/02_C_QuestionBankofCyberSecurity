/*求任意的一个m×m矩阵的主副对角线上元素之和（注：每个元素只计一次），m(2<=m<=20)及矩阵元素从键盘输入(只考虑int型，且不需考虑求和的结果可能超出int型能表示的范围)。
程序的运行效果应类似地如图所示，图中的5和
1 45 67 235 464
35 6 89 32342 8 
347 9346 47 95 746
46 785 436 19434 634
3235 567 24 8465 25
是从键盘输入的内容。*/

#include <stdio.h>
int main(void){
    int a[20][20],m,i,j,sum=0;
    printf("\nPlease input m: ");
    scanf("%d",&m);
    printf("\nPlease input array:\n");
    for(i=0;i<m;i++){
    	for(j=0;j<m;j++){
    		scanf("%d",&a[i][j]);
    		if(i==j||i+j==m-1){
    			sum+=a[i][j];
			}
		}
	}
	printf("Output:\nsum=%d",sum); 
    return 0;
}
