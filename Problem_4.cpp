//
// Created by kris yang on 2017/10/21.
//
#include <iostream>

using namespace std;

int reverse(int value){
    int rvalue = 0;
    int temp = 0;
    while(value != 0){
        temp = value % 10;
        rvalue = rvalue * 10 + temp;
        value /= 10;
    }

    return rvalue;
}

int main(){
    int maxnum = 0;
    int product = 0;
    for (int i = 100; i < 1000; i++){
        for (int j = 100; j < 1000; j++){
            product = i * j;
            if (reverse(product) == product && product > maxnum){
                maxnum = product;
            }
        }
    }
    cout << maxnum << endl;
    return 0;
}