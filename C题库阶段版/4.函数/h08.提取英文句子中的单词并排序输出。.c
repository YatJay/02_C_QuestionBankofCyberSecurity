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
    SortStrings(words, nWords); /*�˴���Ŀ�д���������������Ͳ���������*/
    puts("output:");
    for (i = 0; i < nWords; i++)
        puts(words[i]);
    return 0;
}
int GetWords(char *str, char *words[])
{
    /******start******/
	int i,nwords=0;
	for(i=0;*(str+i)!='.';i++){
		if(*(str+i)==' '){
			*words[nwords]=str+
			nwords++;
		}
	}
    /******end******/
}
void SortStrings(const char *strs[], int count)
{
    /******start******/

    /******end******/
}
