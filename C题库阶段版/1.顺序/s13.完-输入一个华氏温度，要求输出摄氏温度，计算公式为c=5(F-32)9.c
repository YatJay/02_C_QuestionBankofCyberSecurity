/*����һ�������¶ȣ�Ҫ����������¶ȣ����㹫ʽΪc=5(F-32)/9��*/

#include <stdio.h>
int main(void){
    float F0, C0;
    printf("Input the degree: ");
    scanf("%f", &F0);
    C0 = 5 * (F0 - 32) / 9;
    printf("\nF(%.2f)=C(%.2f)\n", F0, C0);

    return 0;
}
