/*��������������m��n���������Լ������С��������
ע�����Լ��Ҳ��������ӣ�ָĳ����������������������һ����
�����������еı�����Ϊ���ǵĹ�������������С��һ����������Ϊ������������С��������*/

#include <stdio.h>
int main(void){
    int m,n,i,zdgys,zxgbs;
    printf("please input two integer numbers: ");
    scanf("%d %d",&m,&n);
    
    for(i=1;i<=m&&i<=n;i++){
    	if(m%i==0&&n%i==0){
    		zdgys=i;
		}
	}
	
	zxgbs=m*n/zdgys;
	printf("Output:\nthe greatest common divisor is %d\n",zdgys);
	printf("the least common multiple is %d\n",zxgbs);
    
    return 0;
}
