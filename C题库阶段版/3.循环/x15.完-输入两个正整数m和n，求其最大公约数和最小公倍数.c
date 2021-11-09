/*输入两个正整数m和n，求其最大公约数和最小公倍数。
注：最大公约数也称最大公因子，指某几个整数共有因子中最大的一个；
两个整数公有的倍数称为它们的公倍数，其中最小的一个正整数称为它们两个的最小公倍数。*/

#include <stdio.h>
int main(void){
    int m,n,i,zdgys,zxgbs;
    printf("please input two integer numbers: ");
    scanf("%d %d",&m,&n);
    
    for(i=1;i<=m&&i<=n;i++){
    	if(m%i==0&&n%i==0){
    		zdgys=i;
		}
	}
	
	zxgbs=m*n/zdgys;
	printf("Output:\nthe greatest common divisor is %d\n",zdgys);
	printf("the least common multiple is %d\n",zxgbs);
    
    return 0;
}
