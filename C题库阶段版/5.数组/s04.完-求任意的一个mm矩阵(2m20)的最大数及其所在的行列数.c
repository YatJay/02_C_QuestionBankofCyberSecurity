/* 求任意的一个m×m矩阵的最大数及其所在的行列数，m(2<=m<=20)及矩阵元素从键盘输入(只考虑int型)。
程序的运行效果应类似地如图所示，图中的5和
1 45 67 235 464
35 6 89 32342 8 
347 9346 47 95 746
46 785 436 19434 634
3235 567 24 8465 25*/

#include <stdio.h>
int main(void){
    int i,j,a[20][20],m;
    int max,maxi=0,maxj=0;
    printf("Please input m(2<=m<=20):");
    scanf("%d",&m);
    printf("Please input the matrix:\n");
    for(i=0;i<m;i++){
    	for(j=0;j<m;j++){
    		scanf("%d",&a[i][j]);
		}
	}
	
	max=a[0][0];
    for(i=0;i<m;i++){
    	for(j=0;j<m;j++){
    		if(max<a[i][j]){
    			max=a[i][j];
    			maxi=i;
    			maxj=j;
			}
		}
	}
	printf("Output:\nmax=%d,i=%d,j=%d",max,maxi,maxj);
    return 0;
}
