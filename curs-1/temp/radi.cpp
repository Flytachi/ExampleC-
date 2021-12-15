#include <iostream>
#include <cmath>

using namespace std;
double sin_series_recursion(double x, int n){
    static double r=1;

    if(n>1){
        r=1-((x*x*r)/(n*(n-1)));
        return sin_series_recursion(x,n-2);
    }else return r*x;
}

int main()
{
    cout << sin_series_recursion(4, 4);
}
