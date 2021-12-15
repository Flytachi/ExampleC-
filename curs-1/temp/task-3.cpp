#include <iostream>

using namespace std;
int main()
{
    int K;
    N:
    cout<<"Enter grade: ";
    cin >> K;
    switch(K){
        case 1: cout << "Плохо" << endl; break;
        case 2: cout << "Неудовлетворительно" << endl; break;
        case 3: cout << "Удовлетворительно" << endl; break;
        case 4: cout << "Хорошо" << endl; break;
        case 5: cout << "Отлично" << endl; break;
        default: cout << "Ошибка" << endl; goto N;
    }
    return 0;
}
