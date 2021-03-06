/*写一个分词函数，提取出一个英文句子中的所有单词，保存到一个单词数组中。另写一个排序函数对字符串数组进行升序排序。
在主函数中调用分词函数得到单词数组，调用排序函数对单词排序，然后在主函数中输出各单词。
约定：
1. 句子长度不超过200个字母，句子中不超过20个单词。
2. 句子中英文单词之间只有一个空格，句子结束处是一个英文句点（即小数点）。
规定算法：分词时，当查找空格或句点时，将其替换为字符串终止符，并将单词开始位置的地址保存到指针数组中。
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
		if (ch == ' ' && str[i] != ' ')//读取单词时候 
		{
			words[cnt] = str+i;
			ch = str[i];//将此时读取到的字符赋值给ch,从而在下一个循环的时候进行判断 
			cnt++;
		}
		else if (str[i] == ' ')//读取到空白字符的时候 
		{
			ch = str[i];
			str[i] = '\0';
		}
		else if (str[i] == '.')//句子结束的时候 
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
			if (strcmp(strs[j], strs[j+1]) > 0)//当前面的单词大于后一个单词时,strcmp函数的返回值即为1 
			{
				tmp=strs[j];
				strs[j]=strs[j+1];
				strs[j+1]=tmp;
			}
		}
	}
/******end******/
}

