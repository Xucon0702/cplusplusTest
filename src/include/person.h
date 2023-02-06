#ifndef  PERSON_H_
#define PERSON_H_

#include <cstring>


class Person
{
public: //一般类函数和其他成员分开写public:做区分
    Person(){};
    ~Person(){};

    // 重写运算符==,每个成员都需要作比较
    bool Person::operator==(const Person &rhs) const
    {
        return ((age == rhs.age)&&(name == rhs.name));
    }

public:
    int age;
    string name;    


private:

};

typedef struct finder_t
{
    finder_t(int n) : age(n) { } 
    bool operator()(Person p) 
    { 
        return (age == p.age); 
    } 
    int age;
}finder_t;


#endif