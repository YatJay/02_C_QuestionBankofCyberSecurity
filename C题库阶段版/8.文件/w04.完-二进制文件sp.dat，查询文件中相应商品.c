/*��дһ����ʵ�����¹���
������һ�洢�ܶ���Ʒ����(ÿ����Ʒ�������Ⱥ������Ʒ����������������ۣ����ʱ��Ӧ���������ͷֱ���Ϊ�ַ���char(20)���ַ���char(12)��long��float)
	�Ķ������ļ�sp.dat(��δ���κθ�ʽת����ֱ��ʹ��fwrite����Ʒ����д���ļ�)��
	�Ӽ�������ĳ����Ʒ��Ʒ����Ҫ�����ļ��в���������ӦƷ����Ʒ(�����ж�����¼��û��)��
	����������Ļ����ʾ����Ӧ����Ʒ��Ʒ�����������������(��ʾʱ��Ʒ�����������������֮��ʹ�ö���(,)���ָ�)��
	��������ʾû����ӦƷ������Ʒ��
������̿����زģ�printf("Please input shang pin pin ming:")...��printf("Output:\ncha zhao qing kuang:\n")...��printf("mei you shang pin :...��
�������������Ч��Ӧ���Ƶ���ͼ1��ͼ2��ʾ��ͼ1�е�Please input shang pin 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct sp{
	char pinming[20];
	char guige[12];
	long int shuliang;
	float danjia;
};

int main(void){
    FILE *fp;
    struct sp SP;
    int flag;
    char search[20];
    printf("Please input shang pin pin ming:");
    scanf("%s",search);
    fp=fopen("sp.dat","rb");
    if(fp==NULL){
    	printf("Open Error!");
    	exit(0);
	}
	
	while(!feof(fp)){
		if(fread(SP.pinming,sizeof(SP.pinming),1,fp)==1
		&&fread(SP.guige,sizeof(SP.guige),1,fp)==1
		&&fread(&SP.shuliang,sizeof(SP.shuliang),1,fp)==1
		&&fread(&SP.danjia,sizeof(SP.danjia),1,fp)==1){
			if(strcmp(search,SP.pinming)==0){
				flag=1;
				printf("%s,%s,%ld,%.2f\n",SP.pinming,SP.guige,SP.shuliang,SP.danjia);
			}
		}
		else{
			break;
		}
	} 
	
	if(flag==0){
		printf("\nmei you zhao dao shang ping :%s",search);
	}
    fclose(fp);
    
    return 0;
}
