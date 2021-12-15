#include <iostream>

using namespace std;
const int mount = 12;
const int top = 3;
int main(){
    float amount[mount];
    cout << "--- START Mount price ---" << endl;
    for(int i=0; i<mount; i++){
        float price;
        cout << i+1 << " Mount price: ";
        cin >> price;
        amount[i] = price;
    }
    cout << "---- END Mount price ----" << endl;

    float sum=0;
    for(int i=0; i<mount; i++) sum += amount[i];
    cout << "Year price: " << sum << endl;

    for(int i=0; i<mount/top; i++){
        float suma = 0;
        for(int s=0; s<top; s++) suma += amount[i*top+s];
        cout << i+1 <<" qwartal: " << suma << endl;
    }

    Ms:
    int change_top;
    cout << " Select qwartal (1-4): ";
    cin >> change_top;
    if(change_top <= mount/top) {
        float suma = 0;
        for(int s=0; s<top; s++) suma += amount[(change_top-1)*top+s];
        cout << change_top << " Qwartal price: " << suma << endl;
    }else goto Ms;
    return 0;
}
