#include <iostream>

using namespace std;
int main() {
    int x,x1,x2,y,y1,y2,C1,C2;
    // -----------
    x1 = 1;
    y1 = 1;
    x2 = 2;
    y2 = 2;
    // -----------
    while(true){
        cout << "Введите x: "; cin>>x;
        cout << "Введите y: "; cin>>y;
        C1 = (x-x1)/(x2-x1);
        C2 = (y-y1)/(y2-y1);
        if(C1==C2) cout<<"Точка находится на линни."<<endl;
        else if(C1<C2) cout<<"Точка находится сверху."<<endl;
        else if(C1>C2) cout<<"Точка находится снизу."<<endl;
        else cout << "Error."<<endl;
    }
    return 0;

}
