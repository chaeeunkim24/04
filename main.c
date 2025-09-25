#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int x, s, m;

    printf("input the second : ");
    scanf("%i", &x);

    m = x / 60;
    s = x % 60;

    printf("the time is %i : %i\n", m, s);

    system("PAUSE");
    return 0;
}
