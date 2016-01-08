#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H
#include <iostream>

using namespace std;

class selection_sort
{
private:
    int *A;
    int n;
public:
    selection_sort(int A[], int n){
        this->A = A;
        this->n = n;
        for(int i = 1; i < n; i++){
            int key = A[i];
            int j = i - 1;
            while(j >= 0 && key < A[j]){
                A[j+1] = A[j];
                j--;
            }
            A[j+1] = key;            
        }        
    }
    void print(){
        for(int i = 0; i < n; i++){
            cout << A[i] << " ";
        }
        cout << endl;
    }
    ~selection_sort();

};

#endif // SELECTION_SORT_H
