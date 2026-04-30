#include <iostream>
#include <vector>
using namespace std;
void binaryConverter(int n)
{
      vector<int> binary;

      if (n == 0)
      {
            cout << "0";
            return;
      }

      while (n != 0)
      {
            binary.push_back(n % 2);
            n /= 2;
      }

      cout << "the binary number is:";
      for (int i = binary.size() - 1; i >= 0; i--)
      {
            cout << binary[i];
      }
}

int main()
{
      cout << "Enter the integer number:";
      int num;
      cin >> num;
      binaryConverter(num);
}