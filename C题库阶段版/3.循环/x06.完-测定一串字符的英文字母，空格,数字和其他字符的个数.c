/*�Ӽ��̶���һ���ַ���Լ�����ַ��� �� 127 �ֽڣ���ͳ�Ƽ�������е���ĸ�����֡��ո���������ŵĸ�����*/
#include <stdio.h>
int main(void)
{
    char str[128];
    int letter=0,number=0,space=0,other=0,i;
    printf("Please input a string: ");
    gets(str);
    //�˴���Ҫ�Ķ����м�forѭ�������ַ����飬ִ��ѭ����������� str[i] !='\0'
    for(i=0;str[i] !='\0';i++){
    	if(str[i]>=1&&str[i]<=9){
    		number++;
		}
		else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
			letter++;
		}
		else if(str[i]==' '){
			space++;
		}
		else{
			other++;
		}
	}
	printf("letter is %d,number is %d,space is %d,other is %d\n",letter,number,space,other);
    
    return 0;
}

