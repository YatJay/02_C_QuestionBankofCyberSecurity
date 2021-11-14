/*从键盘输入n（个数不限）个整形数字，放到数组PArray中，
然后调用函数int *Calc(int *PA,int Num);计算出数组中所有元素的和返回给main函数，并将其输出。*/

/*
注意：
	题目要求 int *Calc(int *PA,int Num)返回的是数组所有元素的和，而本题只定义了一个指针即int *PArray = NULL;所以该指针进行了复用
*/
#include <stdio.h>
#include <stdlib.h>
int *Calc(int *PA,int Num);//计算数组中所有元素的和
int main()
{
       int *PArray = NULL;
       int Total = 0,i = 0;
       printf("输入数组中元素的个数:");
       scanf("%d",&Total);
       /******start******/
       PArray=(int *)malloc(Total*sizeof(int));//动态分配内存对指针初始化 
       printf("输入数组中元素:");
       for(i=0;i<Total;i++){
       		scanf("%d",PArray + i);//指针首次使用：使用 PArray指针进行数组输入 
	   } 
       PArray=Calc(PArray,Total);//指针第二次使用：作为数组首地址参数传入函数，并作为返回值的地址返回求和的值，因为函数内部申请的变量会在函数执行结束后释放掉 
       printf("数组的元素和是:%d",*PArray);
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
