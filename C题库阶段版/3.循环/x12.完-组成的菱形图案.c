/*根据输入的n在屏幕上显示对应的以#组成的实心菱形图案。*/


/*
	注意上下对称情况下的行号变化 
*/
#include <stdio.h>
int main(void){
    int i,j,n;
    printf("Please input n:");
    scanf("%d",&n);
    //上半菱形 
    //菱形特征是在其中线两侧一定距离范围内输出字符 ，其行列之间关系为 j>=n-(i-1)&&j<=n+(i-1) 
    for(i=1;i<=n;i++){
    	for(j=1;j<=2*n-1;j++){
    		if(j>=n-(i-1)&&j<=n+(i-1)){
    			printf("#");
			}
			else{
				printf(" ");
			}
		}
		putchar(10);
	}
	//下半菱形 
	//从i=n-1开始计数并累减至i=1即一开始的初始行值，根据对称性，j的取值特征不作变化
	/*也即行号和列号标记(以n=4为例)为
		1 2 3 4 5 6 7
	1	      # 
	2	  	# # #
	3	  # # # # #
	4	# # # # # # #
	3	  # # # # #
	2	  	# # #
	1	      # 
	*/
	for(i=n-1;i>=1;i--){
    	for(j=1;j<=2*n-1;j++){
    		if(j>=n-(i-1)&&j<=n+(i-1)){
    			printf("#");
			}
			else{
				printf(" ");
			}
		}
		putchar(10);
	}
    
    return 0;
}
