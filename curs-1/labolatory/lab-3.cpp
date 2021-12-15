#include <iostream>

using namespace std;
const int mount = 12;
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

    Ms:
    int change_mount;
    cout << " Select mount (1-12): ";
    cin >> change_mount;
    if(change_mount <= mount) cout << change_mount << " Mount price: " << amount[change_mount-1] << endl;
    else goto Ms;
    return 0;
}
