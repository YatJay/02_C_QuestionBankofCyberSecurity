/* �Ӽ����϶���һ���ַ�(Լ�����ַ�����127�ֽ�)�������·���������ܱ任��
��������A->Z   ��a->z
��������B->Y   ��b->y
��������C->X   ��c->x
������������   ������
��������Z->A   ��z->a
����ĸA���Z����ĸB���Y...������ĸ�ַ����䡣�������Ļ������ʾ��һ���ַ��ĳ��ȣ�����ʾ���ɵ����ġ�
��̿����زģ�printf("Please input string:")...��printf("Output:\nzi fu chuan chang du:...��printf("\nmi wen:...��
���������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�sfasfk,lmw4tywerysfcvasgewr xfasftg�ǴӼ������������*/

#include <stdio.h>
#include <string.h>
char encrypt(char ch);
int main(void){
    char str[128];
    printf("Please input string:");
    gets(str);
    int i,len;
    len=strlen(str);
    for(i=0;str[i]!='\0';i++){
    	if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
    		str[i]=encrypt(str[i]);
		}
	}
	printf("Output:\nzi fu chuan chang du:%d",len);
	printf("\nmi wen:%s",str);
    return 0;
}

char encrypt(char ch){
	char res;
	if(ch>='A'&&ch<='Z'){
		res='A'+25-(ch-'A');  //'A'+25����'Z',ch-'A'����ch��'A'֮�����ľ��� 
	}
	else if(ch>='a'&&ch<='z'){
		res='a'+25-(ch-'a');  //'a'+25����'z',ch-'a'����ch��'a'֮�����ľ��� 
	}
	return res;
}
