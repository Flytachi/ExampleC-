#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int random(int minimum, int maximum){
    return minimum + rand() % (maximum - minimum + 1);
}

int myMin(int *arr, int N){
    int temp = 0;
    for(int i = 0; i < N; i++){
        if(i%2 != 0 && arr[temp] > arr[i]) temp = i;
    }
    return temp;
}

int main()
{
    int N, a=-30, b=30;
    cout << "Enter N: ";
    cin >> N;

    int *A = new int[N];

    srand(time(0));
    cout << "array [ ";
    for (int i = 0; i < N; i++) {
        int ra = random(a,b);
        cout << ra << " ";
        A[i] = ra;
    }
    cout << "]" << endl;

    cout << "Min: " << A[myMin(A, N)];

    delete [] A;
    return 0;
}
