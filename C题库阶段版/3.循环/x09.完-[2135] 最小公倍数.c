/*��Ŀ����
��������������������������������С��������

�����ʽ
����������ݣ���������������1000����������

���
����ÿ����������������������������С��������ÿ��ʵ�����һ�С�
*/

#include <stdio.h>
int main(void){
    int m,n,i,zdgys,zxgbs;
    printf("Please input a and b: ");
    scanf("%d %d",&m,&n);
    
    if(m>=1000||n>=1000||m<=0||n<=0){
    	printf("Input error!\n");
    	return 0;
	}
    for(i=1;i<=m&&i<=n;i++){
    	if(m%i==0&&n%i==0){
    		zdgys=i;
		}
	}
	zxgbs=m*n/zdgys;
	printf("Output:%d",zxgbs);
    
    return 0;
}
