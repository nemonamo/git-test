#include <iostream>
using namespace std;

int main()
{
   char input[7];
   char crc[4] = {'0', '0', '0'};
   char bit;
   int i = 0;
   cout << "20171510 �賲ȣ HW1_1" << endl;
   cout << "��Ʈ���� �Է��Ͻÿ�." << endl;
   cin >> input;
   cout << "�Էµ� ��Ʈ��: " << input << endl;

   for (input[i]; i < 6; ++i)
   {
      if (input[i] == crc[0])
      {
         bit = '0';
      }
      else
      {
         bit = '1';
      }
      if (bit == crc[1])
      {
         crc[0] = '0';
      }
      else
      {
         crc[0] = '1';
      }
      crc[1] = crc[2];
      crc[2] = bit;

      cout << crc << endl;
   }
   cout << "FCS: " << crc;

   return 0;
}