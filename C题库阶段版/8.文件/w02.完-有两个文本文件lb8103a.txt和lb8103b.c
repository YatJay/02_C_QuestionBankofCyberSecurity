/*�������ı��ļ�lb8103a.txt��lb8103b.txt������������Ҫ�����ļ�����Ȼ��Ӹ��ļ��ж���ǰn��<=26�����ַ���*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    char fname[128];
    char ch;
    int i,n;
    
    printf("Input file name:");
    scanf("%s",fname);  //>>��ʹ��gets(fname) [#include string.h]
    printf("Input n:");
    scanf("%d",&n);
    fp=fopen(fname,"r");
    if(fp==NULL){
    	printf("Open Error.");
    	exit(0);
	}
	
	printf("Output:\n");
	
	//�˰汾���ݴ���д���Ķ��汾 ʹ���ļ�������ܵĹ̶�д�� ��� i��������������ַ��ĸ��� 
	for(i=0;i<n;i++){
		ch=fgetc(fp);
		putchar(ch);
	}
	
    fclose(fp);
    return 0;
}
