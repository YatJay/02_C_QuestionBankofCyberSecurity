/*�ı��ļ�lb8101.txt�д����50���������Ӽ�������nֵ������ļ��к�n�����ĺ͡�*/

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
	
	//�˴��Ķ��������������һ��д��
	for (i = 50-n; i < 50; i++){
		sum += a[i];
	}
	printf("\nOutput:\n%d",sum);
    
    return 0;
}
