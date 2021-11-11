/*根据输入的n(约定n>0)在屏幕上显示对应的K形图案。*/

#include <stdio.h>
int main(void){
    int i,j,n;
    printf("Please input n:");
    scanf("%d",&n);
    //上半K 
    for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++){
    		//K形的特征是每列第1行 行列数相加等于n+1时输出字符 即j==1||j+i==n+1
    		if(j==1||j+i==n+1){
    			printf("$");
			}
			else{
				printf(" ");
			}
		}
		putchar(10);
	}
	//下半K 
	//从i=n-1开始计数并累减至i=1即一开始的初始行值，根据对称性，j的取值特征不作变化
	/*也即行号和列号标记(以n=4为例)为
		1 2 3 4
	1	#     # 
	2	# 	#    
	3	# #        
	4	#            
	3	# #        
	2	# 	#    
	1	#     # 
	*/
	for(i=n-1;i>=1;i--){
		for(j=1;j<=n;j++){
    		if(j==1||j+i==n+1){
    			printf("$");
			}
			else{
				printf(" ");
			}
		}
		putchar(10);
	}
    
    return 0;
}
