#include <stdio.h>

int main(void)
{
    char *e="abcdef";
    char *f="abcdef";

    const char *g="abcdef";
    const char *h="abcdef";

    printf("e = 0x%08x\n", e);
    printf("f = 0x%08x\n", f);

    printf("g = 0x%08x\n", g);
    printf("h = 0x%08x\n", h);    

    return 0;
}
