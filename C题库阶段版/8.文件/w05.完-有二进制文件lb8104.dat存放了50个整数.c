/*�ж������ļ�lb8104.dat�����50����������������start��end������ӵ�start������end����֮�ͣ���start��end����
ͼ��10��20�Ǽ�������ġ���ע��������1��1�����34���ݲ����������쳣��*/

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
	//�ļ�ָ�봦��Ĺ̶���ܼ��fread()�Ƿ��ȡ�ɹ� 
	while(!feof(fp)){
		if(fread(a,sizeof(int),50,fp)==50){ 
			//�� 
		}
		else break;
	}
	//����������Ѿ��������飬����ѭ����������������漰�ļ����� 
	for(i=start-1;i<=end-1;i++){
		sum+=a[i];
	}
	printf("Output:\n%d",sum);
	
	fclose(fp); 
    return 0;
}
