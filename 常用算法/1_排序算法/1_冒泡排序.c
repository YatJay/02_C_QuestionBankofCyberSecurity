#include <stdio.h>
void bubble_sort(int arr[],int len) {
    int i, j, temp;
    for (i=0;i<len-1;i++){   //����len��Ԫ�أ�ֻ��Ҫ����len-1��ѭ�����������
        for (j=0;j<len-1-i;j++){  //���i��Ԫ���Ѿ����򣬲���Ҫ����Ƚ�
            if (arr[j]>arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
            }
        }
	}        
}
int main() {
        int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
        int len = (int) sizeof(arr) / sizeof(*arr);
        bubble_sort(arr, len);
        int i;
        for (i = 0; i < len; i++)
                printf("%d ", arr[i]);
        return 0;
}
