#include <stdio.h>
#include "selection_sort.h"
#include "merge_sort.h"

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    int A [] = {2,1,34,4,-1,4,5,6,7,42,1,3,5,7};
    cout << "aa" << endl;
    //selection_sort s(A, 14);
	//s.print();
    vector<int> AA = vector<int>(A, A+sizeof(A)/sizeof(int));
    
//    vector<int> L(AA.begin()+0, AA.begin()+0+1);
//    vector<int> R(AA.begin()+0+1, AA.begin()+1);
//    
//    for(vector<int>::iterator it = L.begin(); it != L.end(); ++it){
//        cout << *it << " ";
//    }
    
    
    merge_sort ms(AA);
    ms.sort();
    ms.print();
    
    
	return 0;
}
