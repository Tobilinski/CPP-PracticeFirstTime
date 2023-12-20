// PracticeCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
//void Fibin();
//void FizzBuzz();
//void Pointers();

//int num = 11;
int main()
{
    int num = 0;
    string Greeting = "Hi";
    cin >> num;

    if (num == 10) {
        cout << Greeting;
    }
    
    //Fibin();
    //FizzBuzz();
    //Pointers();
    return 0;
}

/*void Pointers() {
    int* ptr = &num;
    cout << *ptr << endl;
}*/

/*void FizzBuzz() {
    for (int i = 0; i <= 100; i++)
    {
        if (i % 15 == 0) {
            cout << "Fizzbuzz\n";
        }
        else if (i % 3 == 0) {
            cout << "Fizz\n";
        }
        else if (i % 5 == 0) {
            cout << "buzz\n";
        }
        else
        {
            cout << i << endl;
        }
    }
}*/

/*void Fibin() {

    double limit = 100;
    double sum = 0;
    double a = 1;
    double b = 2;

    while (b < limit)
    {
        if ((int)b % 2 == 0) {
            sum += b;
        }
        double temp = a;
        a = b;
        b = temp + b;
    }
    cout << sum << endl;
}*/
