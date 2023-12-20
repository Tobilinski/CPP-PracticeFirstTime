// PracticeCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
//void Fibin();
//void FizzBuzz();
//void Pointers();


void showBalance(double Balance);
double Withdraw(double Balance);
double Deposit();

//int num = 11;
int main()
{
    int Choice = 0;
    double Balance = 0;
    do
    {
        cout << "************* Banking System *************\n";
        cout << "Make a choice between 4 differnet input\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cin >> Choice;

        switch (Choice) {
        case 1:
            showBalance(Balance);
            break;
        case 2:
            Balance += Deposit();
            break;
        case 3:
            Balance -= Withdraw(Balance);
            break;
        case 4:
            cout << "Have a nice day sir !!\n";
            break;
        default:
            break;
        }
        
    } while (Choice != 4);

    //Fibin();
    //FizzBuzz();
    //Pointers();
    return 0;
}

void showBalance(double Balance) {
    cout << "Your current Balance is: " << Balance << endl;
}
double Deposit() {
    double amount = 0;
    cout << "Make your deposit of how ever much you want: ";
    cin >> amount;

    return amount;
}
double Withdraw(double Balance) {
    double amount = 0;
    cout << "Set your Withdraw of how ever much you want: ";
    cin >> amount;
    if (Balance - amount > 0) {
        return amount;
    }
    else {
        cout << "************* *************** ************\n";
        cout << "You are trying to withdraw more than you have\n";
        cout << "************* *************** ************\n";
        return 0;
    }
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
