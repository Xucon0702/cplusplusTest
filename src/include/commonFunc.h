#ifndef COMMONFUNC_H
#define COMMONFUNC_H

#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

namespace comFunc
{
    template<typename T0,typename T1,typename T2>
    class commonFunc
    {
    private:
        /* data */
        vector<int> vData2;

    public:
        T0 age;
        T2 name;
        vector<T1> vData;


    public:
        commonFunc(){};
        ~commonFunc(){};

        void VectorPrint()
        {
            /*遍历方式1*/
            for(auto it=vData.begin();it!=vData.end();it++)
            {
                cout <<*it<<" ";
            }
            cout<<endl;

          

            return ;
        }

        void showData()
        {
            cout<<"age:"<<age<<"\t"<<"name:"<<name<<endl;
            return age;    
        }

    };

}

int compareFunc(const void* a,const void* b);

//模板函数的实现尽量放在.h中
template<typename T> void soloPrint1(T t);
template<typename T> void VectorPrint1(vector<T> t);

template<typename T>
void soloPrint1(T t)
{
    std::cout <<t << std::endl;
    return ;
}

template<typename T>
void VectorPrint1(vector<T> t)
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

#endif