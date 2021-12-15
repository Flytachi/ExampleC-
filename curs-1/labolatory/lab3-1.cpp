#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int random(int minimum, int maximum){
    return minimum + rand() % (maximum - minimum + 1);
}

void DEAN(int *arr, int &N){
    for(int i = 0; i < N; i++){
        if(arr[i] < 0){
            N--;
            for(int j = i; j < N; j++) arr[j] = arr[j+1];
            i--;
        }
    }
}

void sortDesc(int *arr, int N){
    for(int s = 0; s < N; s++){
        for(int i = 0; i < N; i++){
            if(arr[i] < arr[i+1]) swap(arr[i], arr[i+1]);
        }
    }
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

    DEAN(A, N);
    sortDesc(A, N);

    int *B = new int[N];
    for (int i = 0; i < N; i++) B[i] = A[i];
    delete [] A;

    cout << "array [ ";
    for (int i = 0; i < N; i++) cout << B[i] << " ";
    cout << "]" << endl;

    delete [] B;
    return 0;
}
