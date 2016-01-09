#include <stdio.h>
#include "selection_sort.h"
#include "merge_sort.h"
#include "heap_sort.h"
#include "priority_queue.h"


#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    int A [] = {1,4,2,3,6,1,7,9,5,3,7,1,8};
    cout << "aa" << endl;
    
    //selection sort
    //selection_sort s(A, 14);
	//s.print();
    
    vector<int> AA = vector<int>(A, A+sizeof(A)/sizeof(int));
    
    //merge sort
//    merge_sort ms(AA);
//    ms.sort();
//    ms.print();
    
    //heapsort
//    heap_sort hs(AA);
//    hs.sort();
//    hs.print();

    priority_queue<int> pq(100);
    int aa[] = {4,1,3,2,16,9,10,14,8,7};
    for(int i = 0; i < sizeof(aa)/sizeof(int); i++){
        pq.insert(aa[i]);
    }
//    
    pq.print();
    cout << "max=" << pq.popMax() << endl;
    pq.print();
    cout << "max=" << pq.popMax() << endl;
    pq.print();
    cout << "max=" << pq.popMax() << endl;
    pq.print();
    cout << "max=" << pq.popMax() << endl;
    pq.print();
    
	return 0;
}
