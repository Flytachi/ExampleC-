#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int random(int minimum, int maximum){
    return minimum + rand() % (maximum - minimum + 1);
}

int main(){
    int n, j = 0, col = 0, M = 0;
    srand(time(0));
    cout<<"Enter n: ";
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++) arr1[i] = random(0,20);
    for(int i=0; i<n; i++) {
        if (arr1[i] % 3 == 0 || arr1[i] % 5 == 0) col += 1;
        cout << arr1[i] << endl;
    }
    cout << "---------" << endl;
    int arr2[col];
    for(int i=0; i<n; i++) {
        if (arr1[i] % 3 == 0 || arr1[i] % 5 == 0) {
            arr2[j] = arr1[i];
            j++;
        }

    }

    for(int i=0; i<n; i++) if (arr2[i] > M) M = arr2[i];
    cout<<M<<endl;
    return 0;
}
