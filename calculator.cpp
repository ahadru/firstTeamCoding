#include <iostream>
using namespace std;

class calc{
    double result;
public:
    double add(double a, double b){
        result=a+b;
        return result;
    }

};

int main(){
    calc teamCalc;
    return 0;
}

