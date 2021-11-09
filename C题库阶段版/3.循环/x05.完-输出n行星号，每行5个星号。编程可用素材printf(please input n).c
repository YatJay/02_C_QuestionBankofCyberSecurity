/*输出 n 行星号，每行 5 个星号“*”。*/
#include <stdio.h>
int main(void)
{
    int i,j,n;
    printf("Please input n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	for(j=1;j<=5;j++){
    		printf("* ");
		}
		printf("\n");
	}
    
    return 0;
}

