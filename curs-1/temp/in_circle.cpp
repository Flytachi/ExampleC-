#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double R = 2;
    double x, y;
    cin >> x >> y;
    if( sqrt(x*x + y*y) > R )
        cout << "Точка не находиться в окружности" << endl;
    else
        cout << "Точка находиться в окружности" << endl;
    return 0;
}
