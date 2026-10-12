#include <stdio.h>

int main(){

int num = 12;
int *ptr = &num;
*ptr =15;

printf("%d",*ptr);


    return 0;
}