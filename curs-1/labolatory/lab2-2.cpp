#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int random(int minimum, int maximum){
    return minimum + rand() % (maximum - minimum + 1);
}

int main(){
    int m, n;
    float x;
    srand(time(0));
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter n: ";
    cin>>n;
    // rx = r
    x = (float) random(m,n) / random(m,n);
    cout<<"x:"<<x;
    return 0;
}

