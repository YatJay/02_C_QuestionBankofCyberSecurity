/*��һ�洢�ܶ���Ʒ����(ÿ����Ʒ�������Ⱥ������Ʒ������񡢵���(��С��λ)�����������ݵ�����ȷֱ�Ϊ20��10��6��5�����ļ����Կո�Ϊ�ָ���
	ÿ����Ʒ������ռһ��)���ı��ļ����Ӽ�������ĳ����Ʒ��Ʒ����Ҫ�����ļ��в���������ӦƷ����Ʒ(�����ж�����¼��û��)��
	����������Ļ����ʾ����Ӧ����Ʒ��Ʒ�����������������(��ʾʱ��Ʒ�����������������֮��ʹ�ö���(,)���ָ���������ʾʱֻ��ʾ2λС��)��
	��������ʾû����ӦƷ������Ʒ��
��̿����زģ�printf("Please input shang pin pin ming:")...��printf("\nOutput:\ncha zhao qing kuang:")....��printf("\nmei you shang pin :...��*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* User Code Begin(�������ڱ��к���Ӵ��룬���������ʹ�õĽṹ�����ͣ���������) */
struct goods{
	char pinming[20];
	char guige[10];
	double danjia;
	long int shuliang;
};
/* User Code End(������Ӵ������) */
int main(void)
{
       int n;
       char sppm[21];
       FILE *fp;
       struct goods SP;
       printf("Please input shang pin pin ming:");
       gets(sppm);
       fp = fopen("sp.txt", "r");
       if (NULL == fp){
              printf("file open error!");
              exit(0);
       }
       n = 0;
       printf("\nOutput:\ncha zhao qing kuang:");
       /* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
       while(!feof(fp)){
       	 //���Ȳ���ʹ�� %6d ���ƶ�ȡ�Ŀ�ȣ���ȡ����ֵ����һ��long int ���� �����Ȳ���ʹ�� %5f ���ƶ�ȡ�Ŀ�ȣ�������ֵ����һ��long int ����   
    		if(fscanf(fp,"%s %s %6lf %5d",SP.pinming,SP.guige,&SP.danjia,&SP.shuliang)==4){   
       /* User Code End(������Ӵ������) */
                if (strcmp(sppm, SP.pinming) == 0){
                    n++;  //�޸ı�־λ 
                    printf("\n%s,%s,%ld,%.2f", SP.pinming, SP.guige, SP.shuliang, SP.danjia);
                }
       /* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
       		}
       		else{
       			break;
			}
	   }
	   if (n==0){  //����־λ 
       		printf("\nmeiyou shang pin :%s\n", sppm);
       }
	   fclose(fp); 
       /* User Code End(������Ӵ������) */
       return 0;
}
