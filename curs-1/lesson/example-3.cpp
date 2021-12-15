#include <iostream>
using namespace std;

int main(){
    char tag;
    int n1, n2;
    cout<<"1 число: ";
    cin>>n1;
    cout<<"2 число: ";
    cin>>n2;

    N:
    cout<<"действие: ";
    cin>>tag;
    switch(tag){
        case '+':cout<<"resultat: "<<n1+n2;break;
        case '-': cout<<"resultat: "<<n1-n2;break;
        case '*': cout<<"resultat: "<<n1*n2;break;
        case '/': cout<<"resultat: "<<(float) n1/n2;break;
        case '%': cout<<"resultat: "<<n1%n2;break;
        default: cout<<"error";goto N;
    }
    return 0;
}
