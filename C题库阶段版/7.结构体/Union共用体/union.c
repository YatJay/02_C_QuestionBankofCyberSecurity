//共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。
//您可以定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值。共用体提供了一种使用相同的内存位置的有效方式。
#include <stdio.h>
typedef union{  //整型i和字符数组ch[]共用一段内存 
	int i;  
	char ch[sizeof(int)];
} CHI;
int main(void){
    CHI chi;
    int i;
    chi.i=1234;
    for(i=0;i<sizeof(int);i++){
    	printf("%02hhX ",chi.ch[i]);
	}
    return 0;
}
