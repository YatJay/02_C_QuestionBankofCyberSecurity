/*�Ӽ�������1��9֮���һ���������������������ӡ�����ǳ˷��ھ���Ҫ��������ռ3����ȣ�������롣*/

/*
ϸ�ڣ�
	printf("%-3d",a); ��ʾ��� ���ռ3����ȣ��������
	printf()����������С����Ĭ���Ҷ��룬����Ŀ���Կո���
*/
#include <stdio.h>
int main(void){
    int n,i,j;
    printf("Please input n(1��9):");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
    	for(j=1;j<=i;j++){
    		printf("%d*%d=%-3d  ",j,i,i*j);
		}
		puts("\n");
	}
    
    return 0;
}
