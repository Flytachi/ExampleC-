#include <iostream>

using namespace std;
int main()
{
    int K;
    N:
    cout<<"Enter grade: ";
    cin >> K;
    switch(K){
        case 1: cout << "Плохо"; break;
        case 2: cout << "Неудовлетворительно"; break;
        case 3: cout << "Удовлетворительно"; break;
        case 4: cout << "Хорошо"; break;
        case 5: cout << "Отлично"; break;
        default: cout << "Ошибка" << endl; goto N;
    }
    return 0;
}
