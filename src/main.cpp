#include <cstdio>
#include<iostream>
#include<vector>
#include "commonFunc.h"
#include "helloWorld.h"

using namespace std;
using namespace comFunc;
using Tint = int;


// // 偏特化
// template <typename T1,typename T2>
// class commonFunc<double,T1,T2>{

// };

int main()
{
    helloWorld();
    vector<int> vTest1;
    vector<int> vTest2 = {19,2,6,1,28};
    commonFunc<int,int,char*>  comFuncTest1;//模板类实例化
    int tmp = 0;

    comFuncTest1.age = 10;
    comFuncTest1.name = "moshi";
    comFuncTest1.vData = vTest2;

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

    //类中的模板函数调用    
    comFuncTest1.VectorPrint();
    comFuncTest1.showData();

    //模板函数调用
    VectorPrint1(vTest2);
    soloPrint1("swh");
    

    

    return 0;
}