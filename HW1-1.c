#include <stdio.h>

char d[9];
int p[12];

int main()
{

    printf("�ع��ڵ�� ��ȯ��ų �����͸� �Է��Ͻÿ�.\n");
    scanf("%s", d);

    printf("�Էµ� ������: %s\n", d);

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

    printf("�ع��ڵ�: ");
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