#include<iostream>
#include "commonFunc.h"
#include "person.h"

using namespace comFunc;

 int compareFunc(const void* a,const void* b)
{
    return ( *(int*)a - *(int*)b );
}

void showFuncPrompt(int &choose)
{    
    cout<<"please enter a num:which for func select"<<endl;
    cout<<"1:vector test\n";
    cout<<"2:list test\n";
    cin>>choose;
    cout<<"choose is:"<<choose<<endl;
    cout<<endl;
}


// vector
int vectorTest()
{
    cout<<__FUNCTION__<<":done"<<endl;
    return 0;
}


// list
//类数据类型查找 
bool listClassFindTest(list<Person> pFindedList,Person pInputPerson)
{
    bool findResult = false;

       
    typename std::list<Person>::iterator it = ::find(pFindedList.begin(),pFindedList.end(),pInputPerson);
    if(it != pFindedList.end())
    {
        cout<<"person find success:age "<<it->age<<";name "<<it->name<<endl;
    }
    else
    {
        cout<<"person not find\n";
    }

    

    return findResult;
}

int listTest(list<int> &lst1,list<int> &lst2,list_t&lst3)
{
    std::list<std::string> list0 = {"blue","red","green"};
    Person pToFind,pTmp;
    pToFind.age =28;
    pToFind.name = "swh";

    list<Person> pFindList;
    pTmp.age = 28;
    pTmp.name = "swh";
    pFindList.push_back(pTmp);
    pTmp.age = 30;
    pTmp.name = "xc";
    pFindList.push_back(pTmp);
    pTmp.age = 32;
    pTmp.name = "jwq";
    pFindList.push_back(pTmp);



    listPrt(list0);

    lst1.push_back(10);
    lst1.push_back(20);
    lst1.push_back(30);

    lst2.push_back(1);
    lst2.push_back(2);
    lst2.push_back(3);

    listPrt(lst1);
    listPrt(lst2);

    //swap 赋值
    lst2.clear();
    listPrt(lst2);
    lst2.swap(lst1);
    listPrt(lst2);  

    //删除满足条件的所有元素
     lst2.remove_if([](int value) {return (value < 20); });

    //类查找
     listFind(lst2,20);
     listFind(list0,std::string("red"));   //char*强转为string传参，否则报错

     listClassFindTest(pFindList,pToFind);

    //类成员值匹配查找
    list<Person> pLst;
    int age = 30;
    list<Person>::iterator it = find_if(pFindList.begin(), pFindList.end(), finder_t(age));
    if(it != pFindList.end())
    {
        cout<<"find finder_t success:age "<<it->age<<";name "<<it->name<<endl;
        cout<<"list.size:"<< pFindList.size()<<endl;       
    }
    else
    {
        cout<<"find finder_t failed:age "<<age<<endl;
    }

    cout<<__FUNCTION__<<":done"<<endl;
    return 0;
}