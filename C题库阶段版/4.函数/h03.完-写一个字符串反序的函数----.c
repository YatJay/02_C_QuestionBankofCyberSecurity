/*������´����еĺ��������Ͷ��塣�ú������ڽ��ַ���������"abc"����Ϊ"cba"��*/

#include <stdio.h>
#include <string.h>

/******start******/
void ReverseString(char *str);
/******end******/

int main()
{
	char str[200]={0};
	printf("input a string: ");
	gets(str);

	ReverseString(str);

	puts("output:");
	puts(str);

	return 0;
}

/******start******/
void ReverseString(char *str){
	char temp;
	int len = strlen(str),i;
	//ע�����len/2-1:��lenΪ��������len/2-1λ�����������ַ�ǰһ���������ַ����仯������
    //				 ��lenΪż������len/2-1λ��������ǰһ������һ���ַ���ǰ���ཻ��������
	for(i=0;i<=len/2-1;i++){
		temp=*(str+i);
		*(str+i)=*(str+len-1-i);
		*(str+len-1-i)=temp;
	} 
}
/******end******/

