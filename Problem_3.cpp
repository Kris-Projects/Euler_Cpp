//
// Created by kris yang on 2017/10/21.
//

#include <iostream>

using namespace std;

int GetMinFactor(long int number){
    int minfactor = 0;
    for (int i = 2; i * 2 < number; i++){
        if (number % i == 0){
            minfactor = i;
            break;
        }
    }

    return minfactor;
}

int main3(){
    long int num = 600851475143;
    long int maxfactor = 0;
    long int factor = GetMinFactor(num);
    while( factor > 0 ){
        num /= factor;
        if (factor > maxfactor){
            maxfactor = factor;
        }
        factor = GetMinFactor(num);
    }
    if (num > maxfactor){
        maxfactor = num;
    }

    cout << "max factor: " << maxfactor << endl;

    return 0;
}