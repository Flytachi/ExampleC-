#include <iostream>

using namespace std;

int main(){
    string str = "Запись исходного кода программы на С++";
    cout << str << endl;
    cout << "Size:" << str.length() << endl;
    str.replace(str.find("С"), str.length(), "");
    str = str + "Python.";
    cout << str << endl;
}
