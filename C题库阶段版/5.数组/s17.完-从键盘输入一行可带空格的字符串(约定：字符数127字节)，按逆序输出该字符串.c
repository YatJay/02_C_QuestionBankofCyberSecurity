/*�Ӽ�������һ�пɴ��ո���ַ���(Լ�����ַ�����127�ֽ�)��������������ַ�����
��̿����زģ�printf("Input a string: ")...��printf("Output: ")...��*/

#include <stdio.h>
#include <string.h>
int main(void){
    char str[128],str1[128];
    int i,j,len;
    printf("Input a string: ");
    gets(str);
    len=strlen(str);
    for(i=len-1,j=0;i>=0;i--){
    	str1[j]=str[i];
    	j++;
	}
	str1[j]='\0';
	printf("%s",str1);
    return 0;
}
