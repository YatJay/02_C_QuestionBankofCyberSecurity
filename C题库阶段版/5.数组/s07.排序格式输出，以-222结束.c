/*①程序运行时先显示Please input numbers:，再从键盘上读入一组整数(只考虑int型)，数与数之间只使用空格或回车作分隔。
	数可正可负，最多10000个，但若读入的数为-222时，则表示输入结束且-222不算在该组数内。
　②对这一组数按从小到大的顺序进行排序。
　③将排序后的这一组数输出到屏幕上，输出格式为每行6个数，数与数之间使用逗号(,)分隔，
	两个逗号之间的宽度(不算逗号)为6且使用左对齐格式。
	注意，行尾没有逗号。
	
	100 120 89 72 -19 200 500 210 235 6 24 1234 78 234 -234 -23 42 346 23524 7823 -3411 23423 -222
*/

#include <stdio.h>
int main(void){
    int a[10000],i,j,temp,count=0;
    for(i=0;i<10000;i++){
    	scanf("%d",&temp);
    	if(temp!=-222){
    		a[i]=temp;
    		count++;
		}
		else if(temp==-222){
			break;
		}
	}
	
	printf("%d\n",count);
	for(i=0;i<=count-1;i++){
		printf("%6d",a[i]);
	}
	putchar(10);
	for(i=1;i<=count-1;i++){
		for(j=0;j<=count-i-1;j++){
			if(a[j]>a[j+i]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<=count-1;i++){
		if((i+1)%6!=0){
			printf("%6d,",a[i]);
		}
		else{
			printf("%6d\n",a[i]);
		}
	}
    
    return 0;
}

