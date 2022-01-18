//the difference between for loop and while/do-while is usually when you use for loop beforehand, you should know how many
//iterations that loop is going to make, so for how long your loop is going to run.
//syntax, for(), the first one is going to set the initial value of our counter variable, 
//the second is going to be really put the condition that your for loop is going to check each time that it wants to run this block of code,
//so before each iteration, it is going to check that condition
//the third one is going to be really a way for your counter value to come to that condition which means that you have to either increase or decrease
//your counter variable in order to reach that at a certain point and then when that condition result is false, your for loop is not going to be executed anymore.
#include<iostream>
using namespace std;

int main(){

    //The factorial of a number
    //6!=1*2*3*4*5*6=720

    int number;
    cout << "Number: ";
    cin >> number;

    int factorial=1;

    // for (int i = 1; i <= number; i++)
    // {
    //     factorial *= i;
    // }

    for (int i = number; i >= 1; i--){

        factorial *= i;
    }

        cout << number << "!=" << factorial;

    system("pause>0");
}