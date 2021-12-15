#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "с 02.12.19 – по 07.12.19 неделя контрольных работ !";
    int len = 0;
    for(int i=0; i<str.length(); i++){
        if (!isalpha(str[i])) len++;
    }
    cout << "Size:" << len << endl;
    str = str.substr(0, str.find("неделя"));
    str += "первая неделя зимы";
    cout << str << endl;
}
