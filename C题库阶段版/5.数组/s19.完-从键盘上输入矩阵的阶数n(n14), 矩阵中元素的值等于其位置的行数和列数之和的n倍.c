/*�Ӽ������������Ľ���n(n<=14), ������Ԫ�ص�ֵ������λ�õ�����������֮�͵�n�������е�ֵ��0��ʼ����������n=3ʱ������Ϊ
        0   3   6
        3   6   9
        6   9   12
����������þ���(��ʾʱÿ�������Ϊ4���Ҷ���)��Ȼ��������sum1��sum2��ֵ��sum1Ϊ���������в�����Ԫ��֮�͡�sum2Ϊ�����һ���Խ���Ԫ��֮�͡�
	��̿����زģ�printf("Enter n: ")...��printf("sum1=...\nsum2=...\n"...��
*/
#include <stdio.h>
int main(void){
    int a[14][14],i,j,sum1=0,sum2=0,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		a[i][j]=n*(i+j);
    		printf("%4d",a[i][j]);
    		
    		if(!(i==0||i==n-1||j==0||j==n-1)){
    			sum1+=a[i][j];
			}
			if(i==j){
				sum2+=a[i][j];
			}
		}
		putchar(10);
	}
	
	printf("sum1=%d\nsum2=%d\n",sum1,sum2);   
    return 0;
}
