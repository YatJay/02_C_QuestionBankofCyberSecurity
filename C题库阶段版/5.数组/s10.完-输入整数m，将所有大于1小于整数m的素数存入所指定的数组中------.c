/*��������m�������д���1С������m������������ָ����������(�������ֻ���100����������������ʾ��overflow��)��
	��������ĸ���n�����������������������ʽΪÿ������5�п��Ҷ��롢ÿ����ʾ15�����������m��0������ʾ��error����������ֹ��
	ע������(Prime Number)�����������ָ��һ������1����Ȼ���У�����1�ʹ����������⣬û����������Ȼ������������
������̿����زģ�printf("input a number: ")...��printf("error")...��printf("overflow")...��printf("n=...\n"...��*/

#include <stdio.h>
int isPrime(int num);
int main(void){
    int a[100],m,count=0;
    int i,j;
    printf("input a number: ");
    scanf("%d",&m);
    if(m<=0){
    	printf("error");
    	return 0;
	}
    for(i=2,j=0;i<m;i++){
    	if(1==isPrime(i)){
    		a[j]=i;
    		count++;
    		j++;
		}
		if(count>=100){
			printf("overflow");
			return 0;
		}
	}
		
	printf("n=%d\n",count);
	for(i=0;i<count;i++){
    	if((i+1)%15!=0){
    		printf("%5d",a[i]);
		}
		else{
			printf("%5d\n",a[i]);
		}
	}
	
    return 0;
}

int isPrime(int num){
	int i,flag=1;
	for(i=2;i<num;i++){
		if(num%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}
