#include <stdio.h>

int main() {
   
    unsigned char elementos[256];
    int i;

    for (i = 0; i < 256; i++) {
        elementos[i] = i;
    }

   
    for (i = 0; i < 256; i++) {
        printf("%d\n", elementos[i]);
    }

    printf("\nFeito por Leonardo Torres (https://github.com/Leonardo-Torres01) ");

    return 0;
}
