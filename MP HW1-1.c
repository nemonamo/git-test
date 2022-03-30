#include <stdio.h>

char d[9];
int p[12];

int main()
{

    printf("해밍코드로 변환시킬 데이터를 입력하시오.\n");
    scanf("%s", d);

    printf("입력된 데이터: %s\n", d);

    p[0] = d[0] ^ d[1] ^ d[3] ^ d[4] ^ d[6];
    p[1] = d[0] ^ d[2] ^ d[3] ^ d[5] ^ d[6];
    p[2] = d[0];
    p[3] = d[1] ^ d[2] ^ d[3] ^ d[7];
    p[4] = d[1];
    p[5] = d[2];
    p[6] = d[3];
    p[7] = d[4] ^ d[5] ^ d[6] ^ d[7];
    p[8] = d[4];
    p[9] = d[5];
    p[10] = d[6];
    p[11] = d[7];

    printf("해밍코드: ");
    for (int i = 0; i < 12; i++)
    {
        if (p[i] == 48)
        {
            p[i] -= 48;
            printf("%d", p[i]);
        }
        else if (p[i] == 49)
        {
            p[i] -= 48;
            printf("%d", p[i]);
        }
        else
        {
            printf("%d", p[i]);
        }
    }
    printf("\n");
}