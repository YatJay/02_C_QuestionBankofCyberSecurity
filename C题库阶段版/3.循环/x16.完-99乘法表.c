/*���룺n(0<n<=9),����Խ��ʱ����ʾ"Input error!\n"��������
���9*9�˷������Ļ�����룬ռ3λ
*/

#include <stdio.h>
int main(void){
    int n,i,j;
	printf("Please input n(<0n<=9): ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d * %d = %3d\t",j,i,i*j);
		}
		puts("\n");
	} 
    
    return 0;
}
