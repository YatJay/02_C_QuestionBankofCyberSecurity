//�Ӽ����϶���һ���ַ�(Լ�����ַ�����127�ֽ�)���ж����е�ע���Ƿ�Ϸ������Ϸ��򱨴��Ϸ�ʱ��ɾ��ע�ͺ���������Ϸ�ע����ָ��/*�����ע�Ϳ�ʼ����*/�����ע�ͽ�����ͨ������Ϊ/* ����*/��
//ע�����
//����(1)ֻ�����������ֻ����һ��ע�͵������
//����(2)���Ϸ���ע������кܶ��֣����� ����*/ȱע�Ϳ�ʼ��ǡ�/  * ����*/ȱע�Ϳ�ʼ��ǡ�/* ����ȱע�ͽ�����ǡ�/* ����*  /ȱ������ǡ�
//����(3)��̿����زģ�printf("input a string:")...��printf("Output:\nThe result is :")...��printf("Output:\ncomment is error\n")...��
//�������������Ч��Ӧ���Ƶ���ͼ1��ͼ2��ͼ3��ͼ4��ʾ��ͼ1�е�int main(void){char ch;/*ding yi*/ int i}��ͼ2�е�int main(void){char ch;ding yi*/ int i}��ͼ3�е�int main(void){char ch;/*ding yi* / int i}��ͼ4�е�int main(void){char ch; int i}�ǴӼ�����������ݡ�

/*
strcpy()�Ļ��ƣ�
	 C �⺯�� char *strcpy(char *dest, const char *src) �� src ��ָ����ַ������Ƶ� dest��ָ���λ�á�
	��Ҫע��������Ŀ������ dest �����󣬶�Դ�ַ����ĳ�����̫�������ܻ���ɻ�������������
*/
#include <stdio.h>
#include <string.h>
int findfirst(char str[128]);
int findlast(char str[128]);

int main(void)
{
	int first, last;
	char string[128];
	char result[128];
	
	printf("input a string:");
	gets(string);
	
	first = findfirst(string);  //first����/*��/��λ�� 
	last = findlast(string);  //last����*/��һ��λ�� 
	strcpy(result, string);  //����ԭ���ַ����� 
	
	if (first >= 0 && last >= 0){  //�����ҳɹ��򷵻�ֵ��Ϊ��ֵ��������ַ������ơ�����Դ��ַ���Ƶ�Ŀ���ַ 
		strcpy(result + first, string + last);
	}
	
		//��   �ҵ�һ�� /**/ �ҷ��Ϲ淶              �� ���ַ�������һ�� /**/ 	������ע�ͺϹ棬���Խ������ 
	if (first >= 0 && last >= 0 && last >= first + 4 || first == -1 && last == -1){  
		printf("Output:\nThe result is :");
		puts(result);
	}
	else{
		printf("Output:\ncomment is error\n");
	}
	return 0;
}

int findfirst(char str[128]){  //findfirst()���������״γ��ֵ�/* �����ҳɹ����� /* ����λ�� ���˾ٱ�֤strcpy()��Ŀ���ַΪ / ���ڴ� 
	int i;
	
	for (i = 0; str[i] != '\0'; i++){
		if (str[i] == '/' && str[i + 1] == '*'){
			return i;
		}
	}
	return  (-1);  //δ�ҵ� /* �򷵻�-1 
}
int findlast(char str[128]){  //findlast()���������״γ��ֵ�*/�����ҳɹ�����  */ ��һ��λ�� ���˾ٱ�֤strcpy()��Դ��ַΪ */���һ���ַ� 
	int i;
	
	for (i = 0; str[i] != '\0'; i++){
		if (str[i] == '*' && str[i + 1] == '/'){
			return i + 2;
		}
	}
	return (-1);  //δ�ҵ� */ �򷵻�-1 
}
