/*假如有一个字符串a，b，通过函数gets键盘输入字符串a，b，然后在屏幕输出字符串a，b。
接着调用函数copy_string函数完成字符串a复制到字符串b，再在屏幕输出字符串a，b。
要求：字符串a的大小不超过30个字符。函数copy_string的原型声明为：void copy_string(char from[ ],char to[ ])
函数copy_string的功能为字符串from复制到字符串 to中，函数形参和实参都为数组名
*/

/*
一维数组名作函数参数的问题：
	 一个是数组的首地址，另一个是数组的长度——可以唯一地确定一个一维数组。
	 因为数组是连续存放的，只要知道数组的首地址和数组的长度就能找到这个数组中所有的元素。
	因此，要想通过实参和形参将一个数组从主调函数传到被调函数，那么只需要传递这两个信息即可。对于一维数组来说，其数组名就表示一维数组的首地址。
	所以只需要传递数组名和数组长度这两个参数就可以将数组从主调函数传入被调函数中。
	当数组名作为函数的实参时，形参列表中也应定义相应的数组（或用指针变量），且定义数组的类型必须与实参数组的类型一致，如果不一致就会出错。
	但形参中定义的数组无须指定数组的长度，而是再定义一个参数用于传递数组的长度。所以在传递实参的时候，数组名和数组长度也只能用两个参数分开传递，而不能写在一起。
	因为即使写在一起，系统在编译时也只是检查数组名，并不会检查数组长度。所以数组长度要额外定义一个变量进行传递。
	综上所述，当将数组从一个函数传到另一个函数中时，并不是将数组中所有的元素一个一个传过来（那样效率就太低了）。
	而是将能够唯一确定一个数组的信息传过来，即数组名（数组首地址）和数组长度。此时主调函数和被调函数操作的就是同一个数组。
*/
#include <stdio.h>

void copy_string(char from[], char to[]);

int main()
{
	char a[31];
	char b[31];
	printf("Please input a string a is:");
	gets(a);
	printf("Please input a string b is:");
	gets(b);
	printf("Output:\n");
	printf("string a=%s\nstring b=%s\n",a,b);  
	printf("copy string a to string b:");
	/******start******/
	copy_string(a,b);
	/******end******/
	printf("\nstring a=%s\nstring b=%s\n",a,b);  
	return 0;
}

void copy_string(char from[], char to[]) //相当于char *from,char *to 
{
	/******start******/
	int i;
	for(i=0;from[i]!='\0';i++){
		to[i]=from[i];
	}
	to[i]='\0';
	/******end******/
}   
