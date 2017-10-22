//
// Created by kris yang on 2017/10/21.
//
#include <iostream>

using namespace std;

int main2(){
    long int sum = 0;
    int fib1 = 1;
    int fib2 = 2;
    int temp = 0;

    while (fib2 <= 4000000){

        if (fib2 % 2 == 0){
            sum += fib2;
        }
        temp = fib2;
        fib2 = fib1 + fib2;
        fib1 = temp;
    }

    cout << sum << endl;

    return 0;
}
