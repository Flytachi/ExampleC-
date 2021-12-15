#include <iostream>
#include <cmath>

using namespace std;

class Section{
    private:
        float sX[2], sY[2], sZ[2];
    public:
        void set_X(int index, float item){ sX[index-1] = item;}
        void set_Y(int index, float item){ sY[index-1] = item;}
        void set_Z(int index, float item){ sZ[index-1] = item;}

        float get_length(){
            return sqrt( pow((sX[0]- sX[1]),2) + pow((sY[0]- sY[1]),2) + pow((sZ[0]- sZ[1]),2) );
        }
        void get_X(int index){
            cout << "X" << index <<" = " << sX[index] << endl;
        }
        void get_Y(int index){
            cout << "Y" << index <<" = " << sY[index] << endl;
        }
        void get_Z(int index){
            cout << "Z" << index <<" = " << sZ[index] << endl;
        }
        void get_pount(int index){
            cout << "pount " << index <<" = (" << sX[index-1] << ", " << sY[index-1] << ", " << sZ[index-1] << ")"<< endl;
        }
};

int main(){
    Section sect;
    sect.set_X(1, 2);
    sect.set_Y(1, 2);
    sect.set_Z(1, 2);

    sect.set_X(2, 4);
    sect.set_Y(2, 4);
    sect.set_Z(2, 4);
    sect.get_pount(1);
    sect.get_pount(2);
    cout << sect.get_length() << endl;

    return 0;

}
