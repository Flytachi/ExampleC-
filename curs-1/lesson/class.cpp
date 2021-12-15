#include <iostream>

using namespace std;

class Temp{
    private:
        float a;
        float b;
    public:
        Temp(float i, float j){
            a = i;
            b = j;
        }
        float sum(){return a+b;}
};

int main(){
    ;
    //ob.a = 10;
    //ob.b = 99;

    cout << Temp(12, 13).sum();
    return 0;
}
