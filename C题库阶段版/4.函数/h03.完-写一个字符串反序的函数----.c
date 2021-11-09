/*完成以下代码中的函数声明和定义。该函数用于将字符串反序，如"abc"反序为"cba"。*/

#include <stdio.h>
#include <string.h>

/******start******/
void ReverseString(char *str);
/******end******/

int main()
{
	char str[200]={0};
	printf("input a string: ");
	gets(str);

	ReverseString(str);

	puts("output:");
	puts(str);

	return 0;
}

/******start******/
void ReverseString(char *str){
	char temp;
	int len = strlen(str),i;
	//注意这个len/2-1:若len为奇数，则len/2-1位置上是中心字符前一个，中心字符不变化，合理
    //				 若len为偶数，则len/2-1位置上正是前一半的最后一个字符，前后互相交换，合理
	for(i=0;i<=len/2-1;i++){
		temp=*(str+i);
		*(str+i)=*(str+len-1-i);
		*(str+len-1-i)=temp;
	} 
}
/******end******/

