/*�������룺
	��һ����һ��������n(Լ��1<=n<=1000)����ʾһ����n���㡣��������n�У�ÿ��2���������ֱ��ʾÿ����ĺ�����������ꡣ
�����������
	�����������С���Ǹ���ĺ�����������꣬�����������С�ĵ��ж������ֻ���������������С���Ǹ��㡣
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
    for(i=1;i<=n-1;i++){  //�Ѿ�����һ������ʣn-1�� ����1~n-1��n-1�� 
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
