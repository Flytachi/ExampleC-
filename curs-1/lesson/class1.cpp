#include <iostream>

using namespace std;

class Dog
{
    private:
        int year = 0;
        string color;

    public:
        Dog(int year, string color){
            this->year = year;
            this->color = color;
        }

        string getColor(){
            return this->color;
        }

        int getYear(){
            return this->year;
        }
};

class Robert:Dog
{

};

int main(){
    Dog d1 = Dog(12, "red");
    cout << d1.getYear();
}
