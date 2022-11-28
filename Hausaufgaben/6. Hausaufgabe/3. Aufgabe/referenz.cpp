#include <iostream>

int main()
{
    int x;
    int y;
    int &r = x;
    int *p = &r;
    int *q = &x;
	
	x = 30;
    y = 17;
	
    x *= 4;	
    y = r;	
    *p = 10;

    return 0;
}
