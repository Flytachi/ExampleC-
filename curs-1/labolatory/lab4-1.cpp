#include <iostream>

using namespace std;

int main(){
    string str = "Ура! Скоро у нас каникулы !";
    char s = '.';
    cout << str << endl;
    cout << "Size:" << str.length() << endl;

    for(int i=0; i<str.length(); i++){
        if (str[i] == '!') {
            str[i] = s;
            if(s == '.') s = '?';
        }
    }
    cout << str << endl;
}
