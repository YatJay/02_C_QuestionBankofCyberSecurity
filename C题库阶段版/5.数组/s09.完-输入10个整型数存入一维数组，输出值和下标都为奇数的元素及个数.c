/*����10������������һά���飬���ֵ���±궼Ϊ����(�����1��Ԫ�ص��±�Ϊ0)��Ԫ�ؼ��������Ҫ�������������
��̿����زģ�printf("Input 10 integers.\n")...��printf("Output:\ncount=...\n"...��printf("a[...]=...\n"...��
���������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�2 45 34 56 78 12 41 55 86 37�ǴӼ�����������ݡ�*/

#include <stdio.h>
int main(void){
	int a[10],i,count=0;
	printf("Input 10 integers.\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(i%2==1&&a[i]%2==1){
			printf("a[%d]=%d\n",i,a[i]);
			count++;
		}
	}
	printf("Output:\ncount=%d",count);
	
	
    return 0;
}
