#include <iostream>
#include <math.h>

using namespace std;

float factorial(float x, int n){
    if(n == 1) return x;
    else return (pow(x,n) / n) + factorial(x, n-1);
}

int main(){
    int n; float x;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Ln(x) = "<<factorial(x,n);
}
