/*编写一程序实现以下功能
　　有一存储很多商品数据(每件商品的属性先后包括：品名、规格、数量、单价，编程时相应的数据类型分别定义为字符串char(20)、字符串char(12)、long、float)
	的二进制文件sp.dat(即未作任何格式转换而直接使用fwrite将商品属性写入文件)，
	从键盘输入某种商品的品名，要求在文件中查找有无相应品名商品(可能有多条记录或没有)，
	若有则在屏幕上显示出相应的商品的品名、规格、数量、单价(显示时，品名、规格、数量、单价之间使用逗号(,)作分隔)，
	若无则显示没有相应品名的商品。
　　编程可用素材：printf("Please input shang pin pin ming:")...、printf("Output:\ncha zhao qing kuang:\n")...、printf("mei you shang pin :...。
　　程序的运行效果应类似地如图1和图2所示，图1中的Please input shang pin 
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
