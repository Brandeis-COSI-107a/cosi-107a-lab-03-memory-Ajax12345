#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        long int val = strtol(argv[i], NULL, 0);
        printf("%d 0x%02X% 4d\n", i, val & 0xFF, val & 0xFF);  
    }
    return 0;
}