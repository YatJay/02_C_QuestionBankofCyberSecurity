/*���������n(Լ��n>0)����Ļ����ʾ��Ӧ��Xͼ����*/

/*
	�۲�ͼ���������ж�ȷ�����ھ����i��j��������������ڸô�������� 
*/
#include <stdio.h>
int main(void){
    int n,i,j;
	printf("Please input n: ");
	scanf("%d",&n);
	
	for(i=1;i<=2*n-1;i++){
		for(j=1;j<=2*n-1;j++){
			//����ַ�λ�õ��������� i==j||i+j==2*n 
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
