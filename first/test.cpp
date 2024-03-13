#include "pthread.h"
#include <iostream>
#include <cmath>

int Factorial(int num){
    int res = 1;
    for(int i = 1; i <= num; i++){
        res *= i;
    }
    return res;
}


int main(){
    double res = 0;
    int mul = 1;
    double radian = 2.5;
    for(int i = 0; i <= 5 && abs(res - std::sin(res)) < 0.000001; i++){
        mul = Factorial(2*i+1);
        double fenzi = std::pow(radian, 2*i+1);
        if(i % 2 == 0){
            res += fenzi / mul;
        }else{
            res -= fenzi / mul;
        }
    }
    std::cout << res << std::endl;
    std::cout << "std res: " << std::sin(radian) << std::endl;
    return 0;
}