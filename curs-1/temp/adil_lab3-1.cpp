#include <iostream>

using namespace std;

int main(){
    string str;
    int countO = 0;
    cin << str;
    for(int i=0; i<str.length(); i++) if (str[i] == 'o') countO ++;
    cout << "Count 'o':" << countO << endl;
    cout << str << endl;
}

