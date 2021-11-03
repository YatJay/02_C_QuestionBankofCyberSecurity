/*从键盘输入一个10进制数，输出该数的16进制数。如图所示：其中255和20是键盘输入。*/

#include <stdio.h>
int main(void){
    int num;
	printf("Please input a number: ");
	scanf("%d",&num);
	printf("\nThe Hex of this number is %X",num);
    
    return 0;
}
