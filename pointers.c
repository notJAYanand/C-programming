#include<stdio.h>
int main()
{
    printf("POINTERS\n");
    
    int a=5;
    int *ptr= &a;
    printf("%d\n",a);
    printf("%x\n",ptr); //%x for hexadecimals %p for pointers
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);

}