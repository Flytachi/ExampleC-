#include <iostream>

using namespace std;
int main() {
    float x,A,B;
    while(true){
        cout << "Введите A: "; cin>>A;
        cout << "Введите B: "; cin>>B;
        if(A!=0 && B!=0) cout<<"X равно: "<<B/A<<endl;
        else if(A==0) cout<<"Вычислить не возможно."<<endl;
        else if(B==0) cout<<"X равен 0"<<endl;
    }
    return 0;

}
