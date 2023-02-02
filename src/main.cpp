#include <cstdio>
#include<iostream>
#include<vector>
#include "commonFunc.h"
// #include "helloWorld.h"

using namespace std;
using namespace comFunc;
using Tint = int;



    int compareFunc(const void* a,const void* b)
    {
        return ( *(int*)a - *(int*)b );
    }


int main()
{
    // helloWorld();
    vector<int> vTest1;
    commonFunc comFuncTest;
    int tmp = 0;

    /*排序*/
    int arry1[10] = {1,154,20,18,9,33,46,79,3,58};
    qsort(arry1,10, sizeof(int),compareFunc);
    for(int i=0;i<10;i++)
    {
        cout<< arry1[i] <<" ";
    }
    cout<<' '<<endl;
    
    /*vetor赋值*/
    for(int i=0;i<10;i++)
    {
        vTest1.push_back(i+1);        
    }

    cout<<vTest1.size()<<endl;
    // comFuncTest.VectorPrint(vTest1);


    /**/
    // comFuncTest.soloPrint(8);
    

    return 0;
}