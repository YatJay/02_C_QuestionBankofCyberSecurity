/*�Ӽ��̶���һ���ַ�(Լ�����ַ�����127�ֽ�)�������е������ַ��Լ���Щ�����ַ�����������Ļ����ʾ��
	ע�⣺Ҫ������ʾ��Щ�����ַ���������
	��̿����زģ�printf("Input:\nPlease input string:\n")...��printf("\nOutput:\nThe Digit Number is:...��printf("\nThe Digit Number is following:...��
  ���������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�this is a test!,ada12313 231 4*(*232 233�ǴӼ�������*/
  
#include <stdio.h>
#include <string.h>
int main(void){
    char str[128];
    int count=0,i;
    printf("Input:\nPlease input string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++){
    	if(str[i]>='0'&&str[i]<='9'){
    		count++;
		}
	}
	
	printf("\nOutput:\nThe Digit Number is %d",count);
	printf("\nThe Digit Number is following:");
	for(i=0;str[i]!='\0';i++){
    	if(str[i]>='0'&&str[i]<='9'){
    		printf("%c",str[i]);
		}
	}
    return 0;
}
