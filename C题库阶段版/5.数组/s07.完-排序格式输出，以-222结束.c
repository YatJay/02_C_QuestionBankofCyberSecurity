/*�ٳ�������ʱ����ʾPlease input numbers:���ٴӼ����϶���һ������(ֻ����int��)��������֮��ֻʹ�ÿո��س����ָ���
	�������ɸ������10000���������������Ϊ-222ʱ�����ʾ���������-222�����ڸ������ڡ�
���ڶ���һ��������С�����˳���������
���۽���������һ�����������Ļ�ϣ������ʽΪÿ��6������������֮��ʹ�ö���(,)�ָ���
	��������֮��Ŀ��(���㶺��)Ϊ6��ʹ��������ʽ��
	ע�⣬��βû�ж��š�
	
	100 120 89 72 -19 200 500 210 235 6 24 1234 78 234 -234 -2342 346 23524 7823 -3411 23423 -222
*/

#include <stdio.h>
void output(int arr[],int n);
void sort(int arr[],int n);
int main(void){
    int a[10000],i,j,temp,count=0;
    printf("Please input numbers:");
    for(i=0,j=0;i<10000;i++){
    	scanf("%d",&temp);
    	if(temp!=-222){
    		a[j]=temp;
    		j++;
    		count++;
		}
		else{
			break;
		}
	}
	
	//output(a,count);
	sort(a,count);
	output(a,count);
    return 0;
}

void output(int arr[],int n){
	int i;
	printf("\nOutput:\n");
	for(i=0;i<n;i++){
		if((i+1)%6!=0&&i!=n-1){
			printf("%-6d,",arr[i]);
		}
		else if((i+1)%6==0){
			printf("%-6d\n",arr[i]);
		}
		else if(i==n-1){
			printf("%-6d",arr[i]);
		}
	}
}

void sort(int arr[],int n){
	int i,j,temp;
	for(i=1;i<=n-1;i++){
		for(j=0;j<=n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
