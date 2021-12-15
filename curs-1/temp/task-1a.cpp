#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int A = -4;
    int B = 2;
    int x, result;

    cout<<"Enter x: ";
    cin >> x;

    if (x < A) result = (x-A) / (1 + pow(x,2));
    else result = pow(x,2) - (A+B)*x + A*B;
    cout <<"y = "<< result;
    return 0;
}
