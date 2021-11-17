/* 输入3行3列的矩阵，输出所有元素的累加和（整型）。编程可用素材：printf("Please input the 3x3 Matrix:\n"...、printf("Output:\nsum=...\n"...。
　　程序的运行效果应类似地如图1所示，图1中的
        9  20 13
        16 51 79
        32 8  6
　　是从键盘输入的内容。*/

#include <stdio.h>
int main(void){
    int a[3][3],i,j,sum=0;
    printf("Please input the 3x3 Matrix:\n");
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		scanf("%d",&a[i][j]);
    		sum+=a[i][j];
		}
	}
    printf("Output:\nsum=%d",sum);
    return 0;
}
