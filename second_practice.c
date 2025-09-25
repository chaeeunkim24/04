#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int x, y;
    int a, b, c, d, e;

    printf("input x = ");
    scanf("%i", x);

    printf("input y = ");
    scanf("%i", y);

    a = x + y;
    b = x - y;
    c = x * y;
    d = x / y;
    e = x % y;

    printf("+ result is %f\n", a);
    printf("- result is %f\n", b);
    printf("* result is %f\n", c);
    printf("/ result is %f\n", d);
    printf("% result is %f\n", e);

}
