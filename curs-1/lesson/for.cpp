#include <iostream>

using namespace std;

int main(){
    //setlocale(0, " ");
    int j,n;
    cout<<"Enter const: ";
    cin>>n;
    for(j=1; j<=n*n; j++){
        if(j%n == 1) cout<<endl;
        // cout<<j<<"  ";
        if( (j>=1 && j<=n) || (float)j/n>n-1 || (j%n==0 || j%n==1) ) cout<<"1 "; // Боковые
        else if( (j+n)%(n+1) == 0 || (j-n)%(n-1) == 0 ) cout<<"1 "; // Побочные
        else cout<<"0 ";
    }
}
