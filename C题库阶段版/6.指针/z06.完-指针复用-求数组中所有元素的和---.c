/*�Ӽ�������n���������ޣ����������֣��ŵ�����PArray�У�
Ȼ����ú���int *Calc(int *PA,int Num);���������������Ԫ�صĺͷ��ظ�main�����������������*/

/*
ע�⣺
	��ĿҪ�� int *Calc(int *PA,int Num)���ص�����������Ԫ�صĺͣ�������ֻ������һ��ָ�뼴int *PArray = NULL;���Ը�ָ������˸���
*/
#include <stdio.h>
#include <stdlib.h>
int *Calc(int *PA,int Num);//��������������Ԫ�صĺ�
int main()
{
       int *PArray = NULL;
       int Total = 0,i = 0;
       printf("����������Ԫ�صĸ���:");
       scanf("%d",&Total);
       /******start******/
       PArray=(int *)malloc(Total*sizeof(int));//��̬�����ڴ��ָ���ʼ�� 
       printf("����������Ԫ��:");
       for(i=0;i<Total;i++){
       		scanf("%d",PArray + i);//ָ���״�ʹ�ã�ʹ�� PArrayָ������������� 
	   } 
       PArray=Calc(PArray,Total);//ָ��ڶ���ʹ�ã���Ϊ�����׵�ַ�������뺯��������Ϊ����ֵ�ĵ�ַ������͵�ֵ����Ϊ�����ڲ�����ı������ں���ִ�н������ͷŵ� 
       printf("�����Ԫ�غ���:%d",*PArray);
       /******end******/
       printf("\n");
       free(PArray);
       return 0;
}
int *Calc(int *PA,int Num)
{
   /******start******/
   int i,sum=0;
   for(i=0;i<Num;i++){
		sum+=(*(PA+i));
   }
   *PA=sum;
   return PA;
   /******end******/
}
