/*题目描述	对输入的n个数进行排序并输出。
输入格式	输入的第一行包括一个整数n(1<=n<=100)。 接下来的一行包括n个整数。
输出	将排序后的n个整数输出，每个数后面都有一个空格。*/

#include <stdio.h>
int main(void){
    int a[100],i,j,temp,n;
    printf("Please input n(1<=n<=100):");
    scanf("%d",&n);
    printf("Please input %d numbers:\n",n);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	
	for(i=1;i<=n-1;i++){
		for(j=0;j<=n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("After sorted:\n");
	for(i=0;i<n;i++){
    	printf("%d ",a[i]);
	}
    
    return 0;
}
