/*дһ���ִʺ�������ȡ��һ��Ӣ�ľ����е����е��ʣ����浽һ�����������С���дһ�����������ַ������������������
���������е��÷ִʺ����õ��������飬�����������Ե�������Ȼ��������������������ʡ�
Լ����
1. ���ӳ��Ȳ�����200����ĸ�������в�����20�����ʡ�
2. ������Ӣ�ĵ���֮��ֻ��һ���ո񣬾��ӽ�������һ��Ӣ�ľ�㣨��С���㣩��
�涨�㷨���ִ�ʱ�������ҿո����ʱ�������滻Ϊ�ַ�����ֹ�����������ʿ�ʼλ�õĵ�ַ���浽ָ�������С�
*/
#include <stdio.h>
#include <string.h>

int GetWords(char *sentence, char *words[]);
void SortStrings(const char *strs[], int count);

int main()
{
	char str[200];
	int nWords = 0;
	char *words[20];
	int i;

	printf("input a string: ");
	gets(str);

	nWords = GetWords(str, words);
	SortStrings(words, nWords);

	puts("output:");
	for(i=0; i<nWords; i++)
		puts(words[i]);

	return 0;
}


int GetWords(char *str, char *words[])
{
/******start******/
int i, cnt = 0;
	char ch = ' ';
	for (i = 0; str[i] != '\0'; i++)
	{
		if (ch == ' ' && str[i] != ' ')//��ȡ����ʱ�� 
		{
			words[cnt] = str+i;
			ch = str[i];//����ʱ��ȡ�����ַ���ֵ��ch,�Ӷ�����һ��ѭ����ʱ������ж� 
			cnt++;
		}
		else if (str[i] == ' ')//��ȡ���հ��ַ���ʱ�� 
		{
			ch = str[i];
			str[i] = '\0';
		}
		else if (str[i] == '.')//���ӽ�����ʱ�� 
		{
			str[i] = '\0';
			break;
		}
		
	}
	return cnt;
/******end******/
}

void SortStrings(const char *strs[], int count)
{
/******start******/
int i, j;
	const char *tmp;
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (strcmp(strs[j], strs[j+1]) > 0)//��ǰ��ĵ��ʴ��ں�һ������ʱ,strcmp�����ķ���ֵ��Ϊ1 
			{
				tmp=strs[j];
				strs[j]=strs[j+1];
				strs[j+1]=tmp;
			}
		}
	}
/******end******/
}

