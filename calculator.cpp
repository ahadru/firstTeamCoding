#include <iostream>
using namespace std;

class calc{
    double result;
public:
    double add(double a, double b){
        result=a+b;
        return result;
    }
    void result(){
        cout<<result<<endl;
    }

};

int main(){
    calc teamCalc;
    teamCalc.add(3,5);
    teamCalc.result();
    return 0;
}

