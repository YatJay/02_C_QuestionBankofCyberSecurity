/*�ü����������������5*5����N������������þ���ÿ��Ԫ��ռ4����λ���Ҷ��롣
  Ч����ͼʾ*/
  
#include <stdio.h>
int main(void){
    int a[5][5],i,j,n;
	printf("Please input an integer:");
	scanf("%d",&n);
	for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		a[i][j]=n+i+j;
		}
	} 
    
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		printf("%4d",a[i][j]);
		}
		putchar(10);
	} 
    
    return 0;
}


