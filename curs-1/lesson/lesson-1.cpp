#include <iostream>

using namespace std;

int main(){
    string real, ars, bar, manch, final1, final2, finalist;
    int r1, r2;
    // =====
    real = "Real_Madrid";
    ars = "Arsenal";
    bar = "Barselona";
    manch = "Manchester";

    // final 1
    cout<<"Final 1/2"<<endl;
    cout<<real<<" vs "<<ars<<endl;
    cout<<real<<": ";
    cin>>r1;
    cout<<ars<<": ";
    cin>>r2;

    if(r1>r2) final1 = real;
    else final1 = ars;

    cout<<"Final 1/2"<<endl;
    cout<<bar<<" vs "<<manch<<endl;
    cout<<bar<<": ";
    cin>>r1;
    cout<<manch<<": ";
    cin>>r2;

    if(r1>r2) final2 = bar;
    else final2 = manch;


    cout<<"Final"<<endl;
    cout<<final1<<" vs "<<final2<<endl;
    cout<<final1<<": ";
    cin>>r1;
    cout<<final2<<": ";
    cin>>r2;

    if(r1>r2) finalist = final1;
    else finalist = final2;

    cout<<finalist;
    return 0;
}


