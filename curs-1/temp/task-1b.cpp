#include <iostream>
#include <cstdio>
#include <cmath>
#include <math.h>

using namespace std;
int main()
{
    int a, x, result;

    cout<<"Enter a: ";
    cin >> a;
    cout<<"Enter x: ";
    cin >> x;

    if (x > 1) result = sqrt(pow(a,3) + log(x));
    else if (x < -1) result = log(abs(x))/log(a) + pow(x,2);
    else result = (sin(x)*sin(x)) + asin(x);

    cout <<"y = "<< result;
    return 0;
}

