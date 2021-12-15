#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int random(int minimum, int maximum){
    return minimum + rand() % (maximum - minimum + 1);
}

void rest(int* arr, int &N){
    for(int i = 0; i < N; i++) if(arr[i] > 0) {
        arr[i] = arr[i + 1];
    };
    N--;
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

    rest(A, N);
    cout << "array 2 [ ";
    for (int i = 0; i < N; i++) cout << A[i] << " ";
    cout << "]" << endl;
    delete [] A;
    return 0;
}
