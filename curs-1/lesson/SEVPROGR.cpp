#include <iostream>
using namespace std;
int main()
{
	//setlocale(0, "rus");
	int candidates[3];
	cout<<"������� ���������� �������: \n";
	for(int i=0; i<3; i++)
	{
		cout << "���������� ������� �� " << i+1 <<" ���������: ";
		cin>> candidates[i];
	}
	int votes = 0;
	for(int i=0; i<3; i++)
	{
		for(int j = 0; j < 3; j++){
		if(candidates[i]<candidates[j]){
			int temp = candidates[i];
			candidates[i]=candidates[j];
			candidates[j]=temp;
		}
		}
	}


	for(int i=0; i<3; i++)
	{
		cout<<candidates[i]<<endl;
	}
}

