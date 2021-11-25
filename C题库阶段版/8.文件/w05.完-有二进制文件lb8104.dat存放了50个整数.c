/*有二进制文件lb8104.dat存放了50个整数。键盘输入start和end，计算从第start个到第end个数之和（含start和end）。
图中10和20是键盘输入的。（注：如输入1和1，输出34，暂不考虑其他异常）*/

#include <stdio.h>
int main(void){
    FILE *fp;
    int a[50],i,start,end,sum=0;
    printf("Input start and end:");
    scanf("%d %d",&start,&end);
    
    fp=fopen("lb8104.dat","rb");
    if(fp==NULL){
    	printf("Open Error!");
    	return 0;
	}
	//文件指针处理的固定框架检查fread()是否读取成功 
	while(!feof(fp)){
		if(fread(a,sizeof(int),50,fp)==50){ 
			//空 
		}
		else break;
	}
	//读入的数据已经存入数组，以下循环对数组操作，不涉及文件操作 
	for(i=start-1;i<=end-1;i++){
		sum+=a[i];
	}
	printf("Output:\n%d",sum);
	
	fclose(fp); 
    return 0;
}
