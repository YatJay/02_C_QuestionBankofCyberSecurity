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

	/* 删除空格并输出 */
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

	/* 输出密文 */
	len = strlen(str);
	printf("\nThe result is:");
	for (i=0; i<num; i++)  //尽管是一维字符数组，在处理时按分组每一组num个元素进行处理，对每组的num个元素进行遍历 
	{
		pStr = str + i;  //定位临时指针的位置指向本组第i个元素 
		while (pStr < str+len)  //临时指针位置在字符串末尾之前时 执行循环体 
		{
			printf("%c", *pStr);  
			pStr = pStr + num;  //临时指针+num跳转到下一组的第i个元素 ，下一轮输出下一组的第i个元素 
		}
		printf(" ");  //每输出一组后输出空格 
	}
	printf("\n");

	return 0;
}

