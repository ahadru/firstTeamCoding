#include <iostream>
using namespace std;

class calc{
    double result;
public:
    double add(double a, double b){
        result=a+b;
        return result;
    }
    double mul(double a, double b)
    {
        result = a*b;
        return result;
    }
    void out(){
        cout<<result<<endl;
    }

};

int main(){
    calc teamCalc;
    teamCalc.add(3,5);
    teamCalc.out();
    teamCalc.mul(5,6);
    teamCalc.out();
    
    return 0;
}

