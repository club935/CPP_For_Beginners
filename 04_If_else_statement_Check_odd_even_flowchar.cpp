#include <iostream>
using namespace std;
// if statement is sth that is used when you want to execute part of your code, so block of your code conditionally, which means not always but only in a certain situation
// and then if you add else block, that block is going to be excuted otherwise. So in the situation where your if block is not excuted, your else block is going to be excuted.
int main()
{
    //User enters integer number
    //Program write out if that number is even or odd

    int number;
    cout << "Please enter whole number: ";
    cin >> number;
    if(number%2==0)
    {
        cout << "You have entered even number." << endl;
    }
    else
    {
        cout << "You have entered odd number." << endl;
    }

    cout << "Thanks, bye.";

    system("pause>0");
}