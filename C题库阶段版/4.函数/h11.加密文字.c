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


