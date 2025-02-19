#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        unsigned long val = strtoul(argv[i], NULL, 10);
        printf("0x%012lX\n", val);  
    }
    return 0;
}