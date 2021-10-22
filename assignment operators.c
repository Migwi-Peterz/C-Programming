/*assignment operators*/
#include <stdio.h>
int main()
{
    int x = 5, c;

    c = x;      // c is 5
    printf("c = %d\n", c);
    c += x;     // c is 10
    printf("c = %d\n", c);
    c -= x;     // c is 5
    printf("c = %d\n", c);
    c *= x;     // c is 25
    printf("c = %d\n", c);
    c /= x;     // c is 5
    printf("c = %d\n", c);
    c %= x;     // c = 0
    printf("c = %d\n", c);

    return 0;
}
