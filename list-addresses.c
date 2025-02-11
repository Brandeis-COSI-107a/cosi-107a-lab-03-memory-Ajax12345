#include <stdio.h>
#include <stdlib.h>

int var3;

int add(int a, int b){
    return a + b;
}

int main(int argc, char *argv[]) {
    int var1 = 10;
    char var2[] = "James Petullo";
    int *ptr_var1 = &var1;
    char *ptr_var2 = var2;
    int *ptr_var3 = &var3;

    printf("stack variable: %p\n", &var1);
    printf("initialized data: %p\n", &var2);
    printf("uninitialized data: %p\n", ptr_var3);
    printf("main: %p\n", &main);
    printf("function: %p\n", &add);


    return 0;
}