/* ��쳲��������е�ǰn��n�ķ�ΧΪ��3��20������������Ļ�ϣ�������֮�����ַ�'\t'��������
쳲�������ʽ��f(1)=1,f(2)=1,f(n)=f(n-1)+f(n-2) (n��3)��
��̿����زģ�printf("input a data(3--20):")...printf("Output:\n")...��
�����������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�11�ǴӼ�����������ݡ�*/

#include <stdio.h>
int main(void){
    int a[20],i,n;
	printf("input a data(3--20):");
	scanf("%d",&n);
	
	a[0]=1;
	a[1]=1;
	for(i=2;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	
	printf("Output:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
    
    return 0;
}
