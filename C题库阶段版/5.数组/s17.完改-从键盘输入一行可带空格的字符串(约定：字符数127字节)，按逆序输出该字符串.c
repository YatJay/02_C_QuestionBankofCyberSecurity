/*�Ӽ�������һ�пɴ��ո���ַ���(Լ�����ַ�����127�ֽ�)��������������ַ�����
��̿����زģ�printf("Input a string: ")...��printf("Output: ")...��*/

#include <stdio.h>
#include <string.h>
int main(void){
    char str[128],temp;
    int i,len;
    printf("Input a string: ");
    gets(str);
    len=strlen(str);
    for(i=0;i<=len/2-1;i++){
    	temp=str[i];
    	str[i]=str[len-1-i];
    	str[len-1-i]=temp;
	}
	puts(str);
    return 0;
}
