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
    if (t == 'Y'){
        if( 2000 <= item && item <= 2030 ) return true;
        else return false;
    }else if(t == 'm'){
        if( 1 <= item && item <= 12 ) return true;
        else return false;
    }else if(t == 'd'){
        if( 1 <= item && item <= 31 ) return true;
        else return false;
    }else return false;
}

int main(){
    string input;
    cout << "Enter time (dd.mm.YYYY): ";
    cin >> input;

    int d = StrToInt(input.substr(0, input.find(".")));
    int m = StrToInt(input.substr(3, input.find(".")));
    int Y = StrToInt(input.substr(6, input.find(".")+2));

    if(!check(d, 'd')) cout << "Not valid format!(day)" << endl;
    else if(!check(m, 'm')) cout << "Not valid format!(mount)" << endl;
    else if(!check(Y, 'Y')) cout << "Not valid format!(year)" << endl;
    else cout << "Valid format!" << endl;
}

