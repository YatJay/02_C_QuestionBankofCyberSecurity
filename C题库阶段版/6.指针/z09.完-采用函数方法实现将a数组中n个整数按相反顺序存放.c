/*������һ������a����5��Ԫ�أ�ͨ��������������5��Ԫ�ء�
Ȼ����ú���invʵ�ֽ�����Ԫ���෴��ţ�
Ȼ������Ļ����෴˳���ŵ�����Ԫ�ء�*/
#include <stdio.h>
void inv(int *x, int n);
int main()
{
  int i, arr[5];
  int *p = arr;
  printf("The original array:\n");
  for (i = 0; i < 5; i++, p++)
    scanf("%d", p);
  printf("Output:\n");
  /******start******/
  p=arr;
  /******end******/
  inv(p, 5);
  printf("The array has been inverted:\n");
  for (p = arr; p < arr + 5; p++)
    printf("%d ", *p);
  printf("\n");
  return 0;
}
void inv(int *x, int n)
{
  /******start******/
  int i,t;
  for(i=0;i<=n/2-1; i++){
    t=*(x+i);
    *(x+i)=*(x+4-i);
    *(x+4-i)=t;
  }
  /******end******/
}
