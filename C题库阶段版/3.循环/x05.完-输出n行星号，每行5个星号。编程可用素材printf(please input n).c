/*��� n ���Ǻţ�ÿ�� 5 ���Ǻš�*����*/
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

