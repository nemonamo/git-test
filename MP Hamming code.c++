#include <iostream>
#include <cstring>
#include<cmath>
using namespace std;

int main() {

   char i[13];
   char err[4];
   int p[4];

   

   cout << "�ع��ڵ带 �Է��Ͻÿ�." << endl;
   cin >> i;

   cout << "�Էµ� �ع��ڵ�: " << i << endl;

   p[0] = i[0] ^ i[2] ^ i[4] ^ i[6] ^ i[8] ^ i[10] ^ i[12];
   p[1] = i[1] ^ i[2] ^ i[5] ^ i[6] ^ i[9] ^ i[10];
   p[2] = (i[3] ^ i[4] ^ i[5] ^ i[6] ^ i[11] ^ i[12]) - 48;
   p[3] = (i[7] ^ i[8] ^ i[9] ^ i[10] ^ i[11] ^ i[12]) - 48;
      

   int d, b = 0;

   err[0] = p[3];
   err[1] = p[2];
   err[2] = p[1];
   err[3] = p[0];


   
      for (int i = 0; i < 4; i++) {
         if (err[4 -1 - i] == 1)
            b += pow(2, i);
      }
   

   
   
   if (p[0] == 1 || p[1] == 1 || p[2] == 1 || p[3] == 1) {

      cout << b << "��° ��Ʈ�� ���� �߻�.";
      if (i[b-1] == 0) {
         i[b-1] = '1';
         cout << "������ �ڵ�: " << i << endl;
      }
      else {
         i[b-1] = '0';
         cout << "������ �ڵ�: " << i << endl;
      }
   }
   else {
      cout << "��������";
   }

   return 0;
}