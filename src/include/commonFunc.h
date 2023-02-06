#ifndef COMMONFUNC_H
#define COMMONFUNC_H

#include<cstdio>
#include<iostream>
#include<vector>
#include<list>
#include <algorithm>

using namespace std;

typedef struct info_s

{

int nNumber;

 

}info_t;

typedef std::list< info_t > list_t;

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
            return ;    
        }

    };

}

int compareFunc(const void* a,const void* b);

//模板函数的实现尽量放在.h中
template<typename T> void soloPrint1(T t);
template<typename T> void VectorPrint1(vector<T> t);
template<typename T> bool listFind(list<T> tLsit,T targetValue);

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

    //法3:
     cout<<"elem:";
    for(auto elem:t) //for(auto& elem:t)引用改值
    {
        // elem*=2;
        cout<<elem<<" ";
    }

    cout<<"\n";

    return ;
}

//list链表
//查找数据是否存在
template<typename Tlist>
bool listFind(list<Tlist> tLsit,Tlist targetValue)
{
    bool isFind = false;
    typename std::list<Tlist>::iterator ite = ::find(tLsit.begin(),tLsit.end(),targetValue);
    // auto ite = ::find(tLsit.begin(),tLsit.end(),targetValue);

    if (ite != tLsit.end()) // 找到了
    {
        isFind = true;
        cout<<"file path = "<<__FILE__<<"\nfunction name = "<<__FUNCTION__<<"\nline = "<<__LINE__<<"\n";
        cout<<"found success\n"<<endl;
    }
    else // 没找到
    {
        // do something
        cout<<"not found\n"<<endl;
    }

    return isFind;
}



//list打印:
template<typename Tlist>
void listPrt(list<Tlist> const & tLsit)
{
    cout<<"listPrt:\n";
    for(auto const &i:tLsit) //直接取list中的数据
    {
        cout<<i<<endl;
    }

    return ;
}


//show main func choice prompt
void showFuncPrompt(int &choose);
int vectorTest();

bool listFindTest();
int listTest(list<int> &lst1,list<int> &lst2,list_t&lst3);

#endif