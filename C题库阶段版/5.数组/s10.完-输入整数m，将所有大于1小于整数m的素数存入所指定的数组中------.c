/*输入整数m，将所有大于1小于整数m的素数存入所指定的数组中(数组最多只存放100个素数，超过则提示“overflow”)，
	输出素数的个数n及各素数——素数的输出格式为每个素数5列宽、右对齐、每行显示15个。若输入的m≤0，则提示“error”，程序终止。
	注：素数(Prime Number)，亦称质数，指在一个大于1的自然数中，除了1和此整数自身外，没法被其他自然数整除的数。
　　编程可用素材：printf("input a number: ")...、printf("error")...、printf("overflow")...、printf("n=...\n"...。*/

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
