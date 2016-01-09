#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <vector>
#include <iostream>
using namespace std;

template <class K>
class priority_queue
{
private:

    int left(int i){
        return 2*i + 1;
    }
    int right(int i){
        return 2*i + 2;
    }
    int parent(int i){
        return i/2;
    }

    vector<K> A;
    int heapsize;
    int capacity;
    
    void maxHeapify(int i){
        int max = i;
        int l = left(i);
        int r = right(i);
        
        if(l < heapsize && A[l] > A[i])
            max = l;
        if(r < heapsize && A[r] > A[max])
            max = r;
        if(i != max){
            K tmp = A[i];
            A[i] = A[max];
            A[max] = tmp;
            maxHeapify(max);
        }
    }
    
    void heapIncreaseKey(int i){
        while(i > 0 && A[parent(i)] < A[i]){
            K tmp = A[i];
            A[i] = A[parent(i)];
            A[parent(i)] = tmp;
            
            i = parent(i);
        }
    }
    
public:
    priority_queue(int capacity):capacity(capacity){
        heapsize = 0;
    }
    ~priority_queue(){}
    
    void insert(K x){
        A.push_back(x);
        heapsize++;
        heapIncreaseKey(heapsize - 1);
    }
    K max(){
        return A[0];
    }
    
    K popMax(){
        int max = A[0];
        A[0] = A[--heapsize];
        maxHeapify(0);
        return max;        
    }

    void print(){
        //typename vector< K >::iterator it = A.begin();
        for(int i = 0; i < heapsize; i++){
            cout << A[i] << " ";            
        }
        cout << endl;
    }
    

};

#endif // PRIORITY_QUEUE_H
