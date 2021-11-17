/*输入10个整型数存入一维数组，输出值和下标都为奇数(数组第1个元素的下标为0)的元素及其个数，要求先输出个数。
编程可用素材：printf("Input 10 integers.\n")...、printf("Output:\ncount=...\n"...、printf("a[...]=...\n"...。
程序的运行效果应类似地如图1所示，图1中的2 45 34 56 78 12 41 55 86 37是从键盘输入的内容。*/

#include <stdio.h>
int main(void){
	int a[10],i,count=0;
	printf("Input 10 integers.\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(i%2==1&&a[i]%2==1){
			printf("a[%d]=%d\n",i,a[i]);
			count++;
		}
	}
	printf("Output:\ncount=%d",count);
	
	
    return 0;
}
