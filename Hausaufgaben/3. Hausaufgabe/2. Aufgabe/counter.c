#include <stdio.h>

int main(int argc, char** argv)
{
    int i = 11;
    while (i >= 5)
    {
        printf("%d\n", i);
        i--;
    }
    printf("\n");
    

    for (int i = 0; i <= 12; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}

//Das ist glaube ich ziemlich selbsterklärend!