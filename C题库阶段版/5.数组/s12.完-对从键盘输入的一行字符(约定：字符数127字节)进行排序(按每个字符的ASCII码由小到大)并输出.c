/* �ԴӼ��������һ���ַ�(Լ�����ַ�����127�ֽ�)��������(��ÿ���ַ���ASCII����С����)�������
��̿����زģ�printf("input the string: \n")...��printf("Output:")...��
���������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�32679 dsg j7u6k dsvs346r23v5h@#sfsaf�ǴӼ�����������ݡ�*/

/*
�Ķ��汾����ʹ��gets()����������ʹ��getchar()ʵ�ֶԴ��ո��ַ��������� 
*/
#include <stdio.h>
#include <string.h>
int main(void){
    char a[128],temp;
    int i,j,len;
    printf("input the string: \n");
    gets(a);
    
    len=strlen(a);
	for(i=1;i<=len-1;i++){
		for(j=0;j<=len-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Output:%s",a);
    return 0;
}
