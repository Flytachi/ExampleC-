#include <iostream>

using namespace std;
int main(){
    float x, y,C1, C2;

    cout << "Введите x: "; cin>>x;
    cout << "Введите y: "; cin>>y;
    if(x<0 && y>0){
        float x1=-1,x2=-2,y1=1,y2=2;
        C1 = (x-x1)/(x2-x1);
        C2 = (y-y1)/(y2-y1);
        if(C1==C2) cout<<"Точка находится на линни."<<endl;
        else if(C1<C2) cout<<"Точка находится сверху."<<endl;
        else if(C1>C2) cout<<"Точка находится снизу."<<endl;
        else cout << "Error."<<endl;
    }else if( (-1<=y && y<=1) && (0<=x && x<=3) ) {
        float x1=-2,x2=-3,y1=1,y2=-1;
        if( (-1<=y && y<=1) && (0<=x && x<=2) ){
            if( (y==y1 && x<=2) || ( x<=3 && y==y2 ) || (x==0 && (-1<=y && y<=1) ) ) cout<<"Точка находится на линни."<<endl;
            else cout<<"Точка находится внутри фигуры."<<endl;
        }else{
            C1 = (x-x1)/(x2-x1);
            C2 = (y-y1)/(y2-y1);
            if(C1==C2) cout<<"Точка находится на линни."<<endl;
            else if(C1<C2) cout<<"Точка находится внутри фигуры."<<endl;
            else if(C1>C2) cout<<"Точка находится вне фигуры."<<endl;
        }
    }else{
        cout<<"Точка находится вне фигуры."<<endl;
    }
    return 0;
}
