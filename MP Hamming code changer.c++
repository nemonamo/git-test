#include <iostream>

using namespace std;

int main()
{

    char d[9]; // 00101110
    int p[12];
    cout << "20171510 �賲ȣ HW1_1" << endl;
    cout << "�ع��ڵ�� ��ȯ��ų �����͸� �Է��Ͻÿ�." << endl;

    cin >> d;

    cout << "�Էµ� ������: " << d << endl;

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

    cout << "�ع��ڵ� : ";

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
    cout << endl;
    return 0;
}