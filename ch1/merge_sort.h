#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>
#include <iostream>
using namespace std;

class merge_sort
{
private:
    vector<int> A;
    void _merge(int l, int m, int r){
        vector<int> L(A.begin()+l, A.begin()+m+1);
        vector<int> R(A.begin()+m+1, A.begin()+r+1);
        
        L.push_back(INT_MAX);
        R.push_back(INT_MAX);
        
        int i = 0, j = 0;
        for(int k = l; k<=r; k++){
            if(L[i] <= R[j])
                A[k] = L[i++];
            else
                A[k] = R[j++];
        }
        
    }
    void _sort(int l, int r){
        if(l < r){
            int mid  = (l+r)/2;
            _sort(l, mid);
            _sort(mid+1, r);
            _merge(l, mid, r);
        }
    }
public:
    merge_sort(vector<int> &A){
        this->A = vector<int>(A);                
    }
    void sort(){
        this->_sort(0, A.size() - 1);
    }
    void print(){
        vector<int>::iterator it = A.begin();
        while(it != A.end()){
            cout << *it << " ";
            it++;
        }
        cout << endl;
    }
    ~merge_sort();

};

#endif // MERGE_SORT_H
