/*���������n(Լ��n>0)����Ļ����ʾ��Ӧ��K��ͼ����*/

#include <stdio.h>
int main(void){
    int i,j,n;
    printf("Please input n:");
    scanf("%d",&n);
    //�ϰ�K 
    for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++){
    		//K�ε�������ÿ�е�1�� ��������ӵ���n+1ʱ����ַ� ��j==1||j+i==n+1
    		if(j==1||j+i==n+1){
    			printf("$");
			}
			else{
				printf(" ");
			}
		}
		putchar(10);
	}
	//�°�K 
	//��i=n-1��ʼ�������ۼ���i=1��һ��ʼ�ĳ�ʼ��ֵ�����ݶԳ��ԣ�j��ȡֵ���������仯
	/*Ҳ���кź��кű��(��n=4Ϊ��)Ϊ
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
