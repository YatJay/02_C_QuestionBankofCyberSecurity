/*��дһ���򵥼��������������ʽΪ��data1 op data2��
����data1��data2�ǲμ������������(data1��data2���붨��Ϊint����������ӿ��ܳ���int�ܱ�ʾ�ķ�Χ)��
opΪ�����������ȡֵֻ����+��-��*��/��%�����������������С�������λ��������������������*/

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
