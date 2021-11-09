/*编写一个简单计算器程序，输入格式为：data1 op data2。
其中data1和data2是参加运算的两个数(data1、data2必须定义为int，但二者相加可能超出int能表示的范围)，
op为运算符，它的取值只能是+、-、*、/、%。输出：计算除法输出小数点后两位，其他运算均输出整数。*/

#include <stdio.h>
int main(void){
    int a,b,cha,yu;
	char op;
	long int he,ji; 
	double shang;
	
	printf("Please input data1 op data2:");
	scanf("%d%c%d",&a,&op,&b);
	
	printf("Output:");
	switch(op){
		case '+':
			he=a+b;
			printf("\n%d%c%d=%d",a,op,b,he);
			break;
		case '-':
			cha=a-b;
			printf("\n%d%c%d=%d",a,op,b,cha);
			break;
		case '*':
			ji=a*b;
			printf("\n%d%c%d=%d",a,op,b,ji);
			break;
		case '/':
			if(b!=0){
				shang=(double)a/b;
				printf("\n%d%c%d=%.2f",a,op,b,shang);
			}
			else{
				printf("\nError! chu shu wei 0.");
			}
			break;
		case '%':
			if(b!=0){
				yu=a%b;
				printf("\n%d%c%d=%d",a,op,b,yu);
			}
			else{
				printf("\nError! chu shu wei 0.");
			}
			break;
		default:
			break;
	}
    
    return 0;
}
