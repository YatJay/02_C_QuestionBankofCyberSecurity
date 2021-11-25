/*有一存储很多商品数据(每件商品的属性先后包括：品名、规格、单价(有小数位)、数量，数据的最长长度分别为20、10、6、5，在文件中以空格为分隔，
	每个商品的数据占一行)的文本文件，从键盘输入某种商品的品名，要求在文件中查找有无相应品名商品(可能有多条记录或没有)，
	若有则在屏幕上显示出相应的商品的品名、规格、数量、单价(显示时，品名、规格、数量、单价之间使用逗号(,)作分隔，单价显示时只显示2位小数)，
	若无则显示没有相应品名的商品。
编程可用素材：printf("Please input shang pin pin ming:")...、printf("\nOutput:\ncha zhao qing kuang:")....、printf("\nmei you shang pin :...。*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* User Code Begin(考生可在本行后添加代码，定义程序中使用的结构体类型，行数不限) */
struct goods{
	char pinming[20];
	char guige[10];
	double danjia;
	long int shuliang;
};
/* User Code End(考生添加代码结束) */
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
       /* User Code Begin(考生可在本行后添加代码，行数不限) */
       while(!feof(fp)){
    		if(fscanf(fp,"%s",SP.pinming)==1
				&&fscanf(fp,"%s",SP.guige)==1
				&&fscanf(fp,"%6lf",&SP.danjia)==1  //长度不齐使用 %6d 控制读取的宽度，读取到的值赋给一个long int 类型 
				&&fscanf(fp,"%5d",&SP.shuliang)==1){  //长度不齐使用 %5f 控制读取的宽度，读到的值赋给一个long int 类型 
       /* User Code End(考生添加代码结束) */
                if (strcmp(sppm, SP.pinming) == 0){
                    n++;  //修改标志位 
                    printf("\n%s,%s,%ld,%.2f", SP.pinming, SP.guige, SP.shuliang, SP.danjia);
                }
       /* User Code Begin(考生可在本行后添加代码，行数不限) */
       		}
       		else{
       			break;
			}
	   }
	   if (n==0){  //检查标志位 
       		printf("\nmeiyou shang pin :%s\n", sppm);
       }
	   fclose(fp); 
       /* User Code End(考生添加代码结束) */
       return 0;
}
