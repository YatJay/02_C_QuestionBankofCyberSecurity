/*①程序运行时先显示Please input numbers:，再从键盘上读入一组整数(只考虑int型)，数与数之间只使用空格或回车作分隔。
	数可正可负，最多10000个，但若读入的数为-222时，则表示输入结束且-222不算在该组数内。
　②对这一组数按从小到大的顺序进行排序。
　③将排序后的这一组数输出到屏幕上，输出格式为每行6个数，数与数之间使用逗号(,)分隔，
	两个逗号之间的宽度(不算逗号)为6且使用左对齐格式。
	注意，行尾没有逗号。
	
	100 120 89 72 -19 200 500 210 235 6 24 1234 78 234 -234 -2342 346 23524 7823 -3411 23423 -222
*/

#include <stdio.h>
void output(int arr[],int n);
void sort(int arr[],int n);
int main(void){
    int a[10000],i,j,temp,count=0;
    printf("Please input numbers:");
    for(i=0,j=0;i<10000;i++){
    	scanf("%d",&temp);
    	if(temp!=-222){
    		a[j]=temp;
    		j++;
    		count++;
		}
		else{
			break;
		}
	}
	
	//output(a,count);
	sort(a,count);
	output(a,count);
    return 0;
}

void output(int arr[],int n){
	int i;
	printf("\nOutput:\n");
	for(i=0;i<n;i++){
		if((i+1)%6!=0&&i!=n-1){
			printf("%-6d,",arr[i]);
		}
		else if((i+1)%6==0){
			printf("%-6d\n",arr[i]);
		}
		else if(i==n-1){
			printf("%-6d",arr[i]);
		}
	}
}

void sort(int arr[],int n){
	int i,j,temp;
	for(i=1;i<=n-1;i++){
		for(j=0;j<=n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
