#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    unsigned int x; //���� ����, ������ �ƴ� ����
    int b; // �Ϲ� ����

    printf("input a number : ");
    scanf("%i", &x);

    for (b = 0; x != 0; x >>= 1) //�ݺ���, x��� ���ڸ� ������ �ϳ��� 1001�� ���� ��� 1���� 0, 0, 1���� �ݺ�
    {
        if (x & 1) //bit ���, 1�� & �����ϸ� 1, 0�� & �����ϸ� 0,... => x�� ������ ���ڸ��� 1�϶��� b++�� ����
        {
            b++;
        }
    }

    printf("The result is : %i\n", b);

    system("PAUSE");
    return 0;
}
