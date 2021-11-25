/*文本文件lb8101.txt中存放了50个整数。从键盘输入n值，求该文件中后n个数的和。*/

#include <stdio.h>
int main(void){
    int a[50],n,sum=0,i;
    FILE *fp;
    printf("Input n:");
    scanf("%d",&n);
    fp=fopen("lb8101.txt","r");
    if(fp==NULL){
    	printf("Open Error!");
    	return 0;
	}
	
	i=0;
	while(!feof(fp)){
		if(fscanf(fp,"%d",&a[i])==1){
			i++;
		}
		else{
			break;
		}
	}
	for(i=0;i<50;i++){
		printf("%d\t",a[i]);
	}
	
	//改动版本：关于倒序遍历的两一种写法见改动版本 
	for(i=49;i>(49-n);i--){
		sum+=a[i];
	}
	printf("\nOutput:\n%d",sum);
    
    return 0;
}
