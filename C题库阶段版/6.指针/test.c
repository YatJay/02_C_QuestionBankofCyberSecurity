#include <stdio.h>
#include <stdlib.h>
int main(void){
    char *str=(char *)malloc(20*sizeof(char));
    gets(str);
    puts(str);
    
    return 0;
}
