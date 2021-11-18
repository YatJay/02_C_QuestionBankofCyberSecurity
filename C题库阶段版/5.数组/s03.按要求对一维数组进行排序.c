/*输入n个整数，使前面的n-m个数顺序向后移动m个位置，最后的m个数变成最前面的m个数。
输入格式	第一行包含两个用空格隔开的整数n和m，保证n>m且n不超过50，如果输入不符合以上要求，要有“Input Error！”提示。第二行包含n个用空格隔开的整数。 
输出	输出进行题目描述操作之后的n个整数，每个整数之后输出一个空格。  请注意行尾输出换行。 */

#include <stdio.h>
int main(void){
    int n,m,a[50],i;
    printf("Please input n & m(n>m):");
    scanf("%d %d",&n,&m);
    if(n<=m){
    	printf("Input Error!");
    	return 0;
	}
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
    
	
	
    
    return 0;
}
