#include <iostream>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;


/*  
    Compound Interest Formula:
    A = P(1 + r/n)^nt
    Where:
    A = the future value of the investment/loan, including interest (Final Amount)

    P = the principal investment amount (the initial deposit or loan amount)

    r = the annual interest rate (decimal)

    n = the number of times that interest is compounded per year

    t = the number of years the money is invested or borrowed for

*/

/*
    Effective Annual Rate Formula:
    (1 + r/n)^n - 1
    Where:
    r = the annual interest rate (decimal)
    n = the number of times that interest is compounded per year

*/

int main(){
    int time, number; 
    float rate, amount, principal;
    cout << "This program calculates the compound interest of an investment" << endl;
    cout << "--------------------------------------------------------------" << endl;

    // Principal Amount
    cout << "Enter the Principal Amount: ";
    cin >> principal;
    
    // Interest Rate
    cout << "Enter the Interest Rate (Decimal): ";
    cin >> rate;
    
    // Number of Times Interest is Compounded per Year
    cout << "Enter the Number of Times Interest is Compounded per Year: ";
    cin >> number;

    // Number of Years 
    cout << "Enter the Number of Years: ";
    cin >> time;

    // Formula
    amount = principal * (pow((1 + rate/number), (number * time)));
    cout << "The Value Is: ";
    cout << fixed << setprecision(2) << amount << endl;
    float effective = (pow((1 + rate/number), number) - 1);
    cout << "--------------------------------------------------------------" << endl;
    cout << "The Effective Annual Rate % Is: ";
    float perc_effective = effective * 100;
    cout << fixed << setprecision(2) << perc_effective << "%" << endl;
}