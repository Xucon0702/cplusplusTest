#include<iostream>
#include "commonFunc.h"

using namespace comFunc;

 int compareFunc(const void* a,const void* b)
{
    return ( *(int*)a - *(int*)b );
}