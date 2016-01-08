#ifndef HEAP_SORT_H
#define HEAP_SORT_H

#include <vector>
#include <iostream>

using namespace std;

class heap_sort
{
private:
    vector<int> A;
    int heapsize;
    
    int left(int i){
        return 2*i + 1;
    }
    int right(int i){
        return 2*i + 2;
    }
    int parent(int i){
        return i/2;
    }
    
    void minHeapify(int i){
        int min = i;
        int l = left(i);
        int r = right(i);
        if(l < heapsize && A[l] < A[i]){
            min = l;
        }
        if(r < heapsize && A[r] < A[min]){
            min = r;
        }
        if(i != min){
            int tmp = A[min];
            A[min] = A[i];
            A[i] = tmp;
            minHeapify(min);
        }
    }
    
    void buildHeap(){
        heapsize = A.size();
        for(int i = A.size()/2; i >= 0; i--){
            minHeapify(i);
        }
    }
    
public:
    heap_sort(vector<int> &a){
        A = vector<int>(a);          
    }
    void sort(){
        buildHeap();
        for(int i = 0; i < A.size(); i++){
            heapsize--;
            int tmp = A[0];
            A[0] = A[heapsize];
            A[heapsize] = tmp;
            minHeapify(0);
        }
    }
    void print(){
        vector<int>::iterator it = A.begin();
        while(it != A.end()){
            cout << *it << " ";
            it++;
        }
        cout << endl;
    }
    ~heap_sort();

};

#endif // HEAP_SORT_H
