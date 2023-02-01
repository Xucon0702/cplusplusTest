#ifndef COMMONFUNC_H
#define COMMONFUNC_H

#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

namespace comFunc
{
    class commonFunc
    {
    private:
        /* data */
        vector<int> vData;
    public:
        commonFunc(/* args */);
        ~commonFunc();

        template<typename T> void soloPrint(const T& t);
        template<typename T> void VectorPrint(vector<T> t);
        // int commonFunc::compareFunc(const void* a,const void* b);

    };
    
  

    

}

#endif