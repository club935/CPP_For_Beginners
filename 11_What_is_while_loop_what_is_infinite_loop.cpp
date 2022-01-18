//loops are used when you want to execute a block of your code multiple times while a certain condition is true which
//means you give a certain condition to your loop and you say you are going to execute this block of code while
//this condition here is true. 
//selection, sequencing and iteration
#include<iostream>
using namespace std;

int main()
{
    //Write out all the numbers between 100-500 that are divisible by 3 and 5

    int counter = 100;
    while(counter<=500)
    {
        if(counter%3==0 && counter%5==0)
            cout << counter << " is divisible\n";

        counter++;
    }

        system("pause>0");
}