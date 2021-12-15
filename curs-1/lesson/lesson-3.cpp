#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int result = 0, i, c = 1, d = 5;
/*
    for(i=4; i<=121; i+= d){
        result += i;
        c++;
        d += 2;
    }
*/
    for(i=4; i<=11; i++){
        result += pow(i,2);
        c++;
    }
    cout <<"Сумма: "<< result<< endl;
    cout <<"Общее количество: "<< c<< endl;
    cout <<"Сред: "<< result/c;
    return 0;
}
