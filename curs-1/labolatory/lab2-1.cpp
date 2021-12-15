#include <iostream>

using namespace std;

int main(){
    int sum,a,b,i;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    for(i=a; i<=b; i++){
        sum += i;
    }
    cout<<"Result:"<<(float)sum/b;
    return 0;
}
