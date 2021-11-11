/*根据输入的n(约定n>0)在屏幕上显示对应的X图案。*/

/*
	观察图形特征，判断确定是在矩阵的i，j满足何种条件下在该处区别输出 
*/
#include <stdio.h>
int main(void){
    int n,i,j;
	printf("Please input n: ");
	scanf("%d",&n);
	
	for(i=1;i<=2*n-1;i++){
		for(j=1;j<=2*n-1;j++){
			//输出字符位置的特征就是 i==j||i+j==2*n 
			if(i==j||i+j==2*n){
				printf("%c",'@');
			}
			else{
				printf("%c",' ');
			}
		}
		putchar(10);	
	}
    return 0;
}
