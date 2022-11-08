#include <stdio.h>

int main (void)
{
    float eps = 1.0;
    while (1.0 + eps != 1.0)
    {
        eps = eps / 2.0;
    }
    printf("Eps: %f\n", eps);

    return 0;
}