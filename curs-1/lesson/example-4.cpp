#include <iostream>
using namespace std;

int main(){
    string act1,act2,act3,act4;
    int action, balance;
    act1 = "1. Баланс";
    act2 = "2. Пополнить";
    act3 = "3. Снять";
    act4 = "4. Оплатить";

    N:
    cout<<act1<<endl<<act2<<endl<<act3<<endl<<act4<<endl;
    cout<<"Действие: ";
    cin>>action;
    cout<<endl;
    switch(action){
        case 1:
            cout<<"Баланс: ";
            cin>>balance;
            goto N;
        case 2:
            cout<<"Принято: 0"<<endl;
            break;
        case 3:
            cout<<"Введите сумму: "<<endl;
            break;
        case 4:
            cout<<"1. Газ"<<endl<<"2. Услуги"<<endl<<"3. Свет"<<endl<<"4. Контракт"<<endl;
            break;
        default: goto N;
    }

    return 0;
}
