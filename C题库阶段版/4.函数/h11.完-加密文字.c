/*从键盘读入一行字符(约定：字符数≤127字节，其中的空格不固定、有多有少)和加密间隔(假定只输入正整数)，将加密后的文字输出。
	具体加密方法示例为：对于输入“1 2 3 4 5 6 7   8 9abcd ef ghiA  BCD  EFG HI XYZ”、加密间隔为9，
	先去掉输入中的空格后输出为：123456789abcdefghiABCDEFGHIXYZ，然后按间隔9分组：
		123456789
		abcdefghi
		ABCDEFGHI
		XYZ
输出密码的方法为：从第1组开始，依次从每组各取1字符输出，每一轮取完后输出一个空格，则以上输入的密码输出为：1aAX 2bBY 3cCZ 4dD 5eE 6fF 7gG 8hH 9iI。
编程可用素材：printf("Input a string:")...、printf("\nInput jiange:")...、printf("Output:\nThe string of deleted space:")...、printf("\nThe result is:")...。
程序的运行效果应类似地如图1所示，图1中的1 2 3 4 5 6 7   8 9abcd ef ghiA  BCD  EFG HI XYZ和9是从键盘输入的内容。*/

/*
改动版本并未将字符数组转化为矩阵，而是当做一维字符数组处理，相比之下改动版本算法更优 
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
	scanf("%d", &num);  //输入加密间隔，表示每组的字符个数为9 
	
	//去空格输出到str2[]中 
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
	
	//将字符串str2[]输出到矩阵中，每逢列下标到达num时输出一个'\0' 
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
	
	len = strlen(str2);  //计算字符串总长度 
	div = len / num;  //计算分隔后整齐行数 
	printf("\nThe result is:");
	//由于要 依次从每组各取1字符输出 所以遍历时优先对 每一列上元素进行遍历 
	for (j = 0, k = 0; j < num; j++)  //对每一行的元素 
	{
		for (i = 0; i < div; i++)  //对每一列的元素 
		{
			printf("%c", result[i][j]);
		}
		if (k < len % num)  //针对不齐的一行，进行输出 
		{
			printf("%c", result[div][k]);
			k++;
		}
		putchar(' ');
	}
	putchar('\n');
	return 0;
}
