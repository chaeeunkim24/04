#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    unsigned int x; //변수 선언, 음수가 아닌 정수
    int b; // 일반 정수

    printf("input a number : ");
    scanf("%i", &x);

    for (b = 0; x != 0; x >>= 1) //반복문, x라는 숫자를 끝부터 하나씩 1001을 예로 들면 1부터 0, 0, 1마다 반복
    {
        if (x & 1) //bit 계산, 1과 & 연산하면 1, 0과 & 연산하면 0,... => x의 이진수 끝자리가 1일때만 b++이 동작
        {
            b++;
        }
    }

    printf("The result is : %i\n", b);

    system("PAUSE");
    return 0;
}
