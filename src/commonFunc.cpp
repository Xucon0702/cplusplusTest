#include<iostream>
#include "commonFunc.h"

  using namespace comFunc;
//   using namespace std;
  commonFunc::commonFunc(/* args */)
    {
        /*init*/
        cout<<"commonFunc init"<<endl;

    }
    
    commonFunc::~commonFunc()
    {
        /*deInit*/        
        cout<<"~commonFunc deInit"<<endl;

    }

    template<typename T>
    void commonFunc::soloPrint(const T& t)
    {
        std::cout <<t << std::endl;
        return ;
    }

    /*vector打印*/
    template<typename T>
    void commonFunc::VectorPrint(vector<T> t)
    {
        /*遍历方式1*/
        for(auto it=t.begin();it!=t.end();it++)
        {
            cout <<*it<<" ";
        }
        cout<<endl;

        // /*迭代器遍历2*/
        // for(vector<int>::iterator ite=t.begin();ite != t.end();ite++)
        // {
        //     cout<<*ite<<" ";               
        // }
        // cout<<endl; 

        return ;
    }


    // int commonFunc::compareFunc(const void* a,const void* b)
    // {
    //     return ( *(int*)a - *(int*)b );
    // }