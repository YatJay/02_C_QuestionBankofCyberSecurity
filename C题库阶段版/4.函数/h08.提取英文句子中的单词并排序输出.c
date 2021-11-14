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
    SortStrings(words, nWords); /*此处题目有错误，如果还是填空题就不管它试试*/
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
