/* ��дһ����ʵ�����¹���
�����������һ��m��m������ܱ�Ԫ��֮�ͣ�m(2<=m<=20)������Ԫ�شӼ�������(ֻ����int�ͣ��Ҳ��迼����͵Ľ�����ܳ���int���ܱ�ʾ�ķ�Χ)��
	��̿����زģ�printf("\nPlease input m: ")...��printf("\nPlease input array:\n")...��printf("Output:\nsum=...\n"...��
�������������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�5��
1 45 67 235 464
35 6 89 32342 8 
347 9346 47 95 746
46 785 436 19434 634
3235 567 24 8465 25
�����ǴӼ�����������ݡ�*/

#include <stdio.h>
int main(void){
    int a[20][20],m,i,j,sum=0;
    printf("\nPlease input m: ");
    scanf("%d",&m);
    printf("\nPlease input array:\n");
    for(i=0;i<m;i++){
    	for(j=0;j<m;j++){
    		scanf("%d",&a[i][j]);
    		if(i==0||i==m-1||j==0||j==m-1){
    			sum+=a[i][j];
			}
		}
	}
	printf("Output:\nsum=%d",sum); 
    return 0;
}
