/* ����3��3�еľ����������Ԫ�ص��ۼӺͣ����ͣ�����̿����زģ�printf("Please input the 3x3 Matrix:\n"...��printf("Output:\nsum=...\n"...��
�������������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�
        9  20 13
        16 51 79
        32 8  6
�����ǴӼ�����������ݡ�*/

#include <stdio.h>
int main(void){
    int a[3][3],i,j,sum=0;
    printf("Please input the 3x3 Matrix:\n");
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		scanf("%d",&a[i][j]);
    		sum+=a[i][j];
		}
	}
    printf("Output:\nsum=%d",sum);
    return 0;
}
