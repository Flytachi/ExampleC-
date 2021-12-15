#include <iostream>
#include <cmath>

using namespace std;


int StrToInt(string b)
{
    int l, M;
    l = b.length();
    M = 0;
    for (int i = 0; i < l; i++) M += (b[i] - '0') * pow(10, l-i-1);
    return M;
}

bool check(int item, char t){
    if (t == 'h'){
        if( 0 <= item && item <= 23 ) return true;
        else return false;
    }else if(t == 'm' || t == 's'){
        if( 0 <= item && item <= 60 ) return true;
        else return false;
    }else return false;
}

int main(){
    string input;
    cout << "Enter time (HH.mm.ss): ";
    cin >> input;

    int h = StrToInt(input.substr(0, input.find(".")));
    int m = StrToInt(input.substr(3, input.find(".")));
    int s = StrToInt(input.substr(6, input.find(".")));

    if(!check(h, 'h')) cout << "Not valid format!(hour)" << endl;
    else if(!check(m, 'm')) cout << "Not valid format!(minute)" << endl;
    else if(!check(s, 's')) cout << "Not valid format!(second)" << endl;
    else cout << "Valid format!" << endl;
}
