#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int random(int minimum, int maximum){
    return minimum + rand() % (maximum - minimum + 1);
}

void list_students(){
    cout<<"----Student List----"<<endl;
    cout<<"1. Mirkamol"<<endl;
    cout<<"2. Servara"<<endl;
    cout<<"3. Alixan"<<endl;
    cout<<"----END List----"<<endl;
}

void rating(int N){
    cout<<endl<<" -Item-    -scores-"<<endl;
    cout<<"Programing    "<<random(1,100)<<endl;
    cout<<"Fizika        "<<random(1,100)<<endl;
    cout<<"Calcul        "<<random(1,100)<<endl;
}

int main(){
    int n;
    srand(time(0));
    list_students();
    cout<<"Select Student: ";
    cin>>n;
    rating(n);
    return 0;
}
