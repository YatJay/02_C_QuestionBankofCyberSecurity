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

/*
�Ķ��汾��δ���ַ�����ת��Ϊ���󣬶��ǵ���һά�ַ����鴦�����֮�¸Ķ��汾�㷨���� 
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[128], str2[128], result[127][128];
	int num, i, j, k, len, div, count = 0;
	printf("Input a string:");
	gets(str1);
	printf("\nInput jiange:");
	scanf("%d", &num);  //������ܼ������ʾÿ����ַ�����Ϊ9 
	
	//ȥ�ո������str2[]�� 
	for (i = 0, j = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] != ' ')
		{
			str2[j] = str1[i];
			j++;
		}
	}
	str2[j] = '\0';
	printf("\nThe string of deleted space:");
	puts(str2);
	
	//���ַ���str2[]����������У�ÿ�����±굽��numʱ���һ��'\0' 
	for (i = 0, j = 0, k = 0; str2[i] != '\0'; i++)
	{
		result[j][k] = str2[i];
		k++;
		count++;
		if (count == num)
		{
			result[j][k] = '\0';
			j++;
			k = 0;
			count = 0;
		}
	}
	
	len = strlen(str2);  //�����ַ����ܳ��� 
	div = len / num;  //����ָ����������� 
	printf("\nThe result is:");
	//����Ҫ ���δ�ÿ���ȡ1�ַ���� ���Ա���ʱ���ȶ� ÿһ����Ԫ�ؽ��б��� 
	for (j = 0, k = 0; j < num; j++)  //��ÿһ�е�Ԫ�� 
	{
		for (i = 0; i < div; i++)  //��ÿһ�е�Ԫ�� 
		{
			printf("%c", result[i][j]);
		}
		if (k < len % num)  //��Բ����һ�У�������� 
		{
			printf("%c", result[div][k]);
			k++;
		}
		putchar(' ');
	}
	putchar('\n');
	return 0;
}
