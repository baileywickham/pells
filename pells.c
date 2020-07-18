#include <math.h>
#include <stdlib.h>
#include <stdio.h>

unsigned long long isPerfectSquare(unsigned long long);

int main(int argc, char** argv) {
    char* p;
    unsigned long long upperbound = 10000000000000;
    for (unsigned long long i = 0; i < upperbound; i++) {
        unsigned long long h = 3 + (2 * (i*i));
            if  ((isPerfectSquare(h))) {
                printf("%lli\n", i);
            }
    }
}

unsigned long long isPerfectSquare(unsigned long long n)
{
    int h = n & 0xF; // bit hacking
    if (h > 9)
        return 0;
    if (h != 2 && h != 3 && h != 5 && h != 6 && h != 7 && h != 8)
    {
        unsigned long long t = (unsigned long long ) floor( sqrt((long double) n) + 0.5 );
        return t*t == n;
    }
    return 0;
}
