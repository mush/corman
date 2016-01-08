#include <stdio.h>
#include "selection_sort.h"
#include "merge_sort.h"
#include "heap_sort.h"

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    int A [] = {1};
    cout << "ee" << endl;
    
    //selection sort
    //selection_sort s(A, 14);
	//s.print();
    
    vector<int> AA = vector<int>(A, A+sizeof(A)/sizeof(int));
    
    //merge sort
//    merge_sort ms(AA);
//    ms.sort();
//    ms.print();
    
    //heapsort
    heap_sort hs(AA);
    hs.sort();
    hs.print();
    
    
	return 0;
}
