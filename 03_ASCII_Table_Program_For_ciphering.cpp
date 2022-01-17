#include <iostream>
using namespace std;

int main()
{
    char c1, c2, c3, c4, c5;
    cout << "Enter 5 leters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    int i1, i2, i3, i4, i5;

    i1 = int(c1), i2 = int(c2), i3 = int(c3), i4 = int(c4), i5 = int(c5);

    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;

    cout << "deciphering is " << char(i1) << "  " << char(i2) << "    " << char(i3) << "    " << char(i4) << "    " << char(i5);

    system("pause>0");
}