/*�Ӽ��̶���һ���ַ�(Լ�����ַ�����127�ֽڣ����еĿո񲻹̶����ж�����)�ͼ��ܼ��(�ٶ�ֻ����������)�������ܺ�����������
	������ܷ���ʾ��Ϊ���������롰1 2 3 4 5 6 7   8 9abcd ef ghiA  BCD  EFG HI XYZ�������ܼ��Ϊ9��
	��ȥ�������еĿո�����Ϊ��123456789abcdefghiABCDEFGHIXYZ��Ȼ�󰴼��9���飺
		123456789
		abcdefghi
		ABCDEFGHI
		XYZ
�������ķ���Ϊ���ӵ�1�鿪ʼ�����δ�ÿ���ȡ1�ַ������ÿһ��ȡ������һ���ո�������������������Ϊ��1aAX 2bBY 3cCZ 4dD 5eE 6fF 7gG 8hH 9iI��
��̿����زģ�printf("Input a string:")...��printf("\nInput jiange:")...��printf("Output:\nThe string of deleted space:")...��printf("\nThe result is:")...��
���������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�1 2 3 4 5 6 7   8 9abcd ef ghiA  BCD  EFG HI XYZ��9�ǴӼ�����������ݡ�*/

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str0[128], str[128], *pStr;
	int i = 0, j = 0, num, len;

	printf("Input a string:");
	gets(str0);
	printf("\nInput jiange:");
	scanf("%d", &num);

	/* ɾ���ո���� */
	while (str0[i] != '\0')
	{
		if (str0[i] != ' ')
		{
			str[j] = str0[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	printf("\nThe string of deleted space:");
	puts(str);

	/* ������� */
	len = strlen(str);
	printf("\nThe result is:");
	for (i=0; i<num; i++)  //������һά�ַ����飬�ڴ���ʱ������ÿһ��num��Ԫ�ؽ��д�����ÿ���num��Ԫ�ؽ��б��� 
	{
		pStr = str + i;  //��λ��ʱָ���λ��ָ�����i��Ԫ�� 
		while (pStr < str+len)  //��ʱָ��λ�����ַ���ĩβ֮ǰʱ ִ��ѭ���� 
		{
			printf("%c", *pStr);  
			pStr = pStr + num;  //��ʱָ��+num��ת����һ��ĵ�i��Ԫ�� ����һ�������һ��ĵ�i��Ԫ�� 
		}
		printf(" ");  //ÿ���һ�������ո� 
	}
	printf("\n");

	return 0;
}

