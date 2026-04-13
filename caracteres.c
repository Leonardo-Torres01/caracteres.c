#include <stdio.h>

int main() 
{
    unsigned char arr[256];

    for (int i = 0; i < 256; i++) 
    {
        arr[i] = i;
    }

    for (int i = 0; i < 256; i++) 
    {
        printf("%c\n", arr[i]);
    }
    printf("/nFeito por Leonardo Torrres (https://github.com/Leonardo-Torres01) ");
    return 0;
}
