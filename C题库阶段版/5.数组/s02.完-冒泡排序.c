/*��Ŀ����	�������n�����������������
�����ʽ	����ĵ�һ�а���һ������n(1<=n<=100)�� ��������һ�а���n��������
���	��������n�����������ÿ�������涼��һ���ո�*/

#include <stdio.h>
int main(void){
    int a[100],i,j,temp,n;
    printf("Please input n(1<=n<=100):");
    scanf("%d",&n);
    printf("Please input %d numbers:\n",n);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	
	for(i=1;i<=n-1;i++){
		for(j=0;j<=n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("After sorted:\n");
	for(i=0;i<n;i++){
    	printf("%d ",a[i]);
	}
    
    return 0;
}
