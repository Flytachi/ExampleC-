#include <iostream>
#include <string>
using namespace std;

int mountInt(string m){
    if(m == "января") return 1;
    if(m == "февраля") return 2;
    if(m == "марта") return 3;
    if(m == "апреля") return 4;
    if(m == "мая") return 5;
    if(m == "июня") return 6;
    if(m == "июля") return 7;
    if(m == "августа") return 8;
    if(m == "сентября") return 9;
    if(m == "октября") return 10;
    if(m == "ноября") return 11;
    if(m == "декабря") return 12;
    else return 0;
}

int main()
{
    string base_str;
    cout << "Enter date:";
    cin >> base_str;
    string delim = " ";
    int pos = 0;
    int base_str_size = base_str.size();
    int delim_size = delim.size();
    int item = 0;
    string temp;

    while (pos < base_str_size) {
        temp = temp.assign(base_str, pos, base_str.find(delim, pos) - pos);
        if (temp.size() > 0)
        pos += temp.size() + delim_size;
        item++;

        if(item == 1) cout << temp;
        else if(item == 2) cout << "." << mountInt(temp);
        else if(item == 3) cout << "." << temp.substr(temp.length()-2, 2);
        else cout << " г" << endl;
    }
    return 0;
}
