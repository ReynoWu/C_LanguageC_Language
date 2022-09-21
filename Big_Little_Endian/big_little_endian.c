#include <stdio.h>

int main(void)
{
    short int x;
    char x0, x1;
    x = 0x1122;
    x0=((char*)&x)[0];
    x1=((char*)&x)[1];

    printf("x = 0x%02x\n", x0);
    
    if (x0 == 0x11){
        printf("the compiler is big endian\n");
    } else if (x0 == 0x22){
        printf("the compiler is little endian\n");
    }
}
