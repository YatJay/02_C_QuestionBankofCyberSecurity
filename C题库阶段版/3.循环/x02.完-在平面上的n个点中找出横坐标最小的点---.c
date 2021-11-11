/*程序输入：
	第一行是一个正整数n(约定1<=n<=1000)，表示一共有n个点。接下来的n行，每行2个整数，分别表示每个点的横坐标和纵坐标。
　程序输出：
	输出横坐标最小的那个点的横坐标和纵坐标，如果横坐标最小的点有多个，则只输出其中纵坐标最小的那个点。
*/

#include <stdio.h>
int main(void){
    int i,n,x,y;
    int minx,miny;
    printf("Please input n:");
    scanf("%d",&n);
    
    printf("x y\n");
    scanf("%d %d",&x,&y);
    minx=x;
	miny=y;
    for(i=1;i<=n-1;i++){  //已经输入一个，还剩n-1个 即从1~n-1共n-1个 
    	scanf("%d %d",&x,&y);
    	if(minx>x){
    		minx=x;
    		miny=y;
		}
		else if(minx==x&&miny>y){
			miny=y;
			minx=x;
		}
	}
	printf("\n%d %d",minx,miny);
    
    return 0;
}
