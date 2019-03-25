#include <iostream>
#include <stdlib.h>
#include "Sort.hpp"
#include "CommonUtils.hpp"
#include "FindMaximumSubArray.hpp"
#include "FindNearestPointPair.hpp"
#include "DynamicProgramming.hpp"
using namespace std;
int main()
{
    int p[10]={1,5,8,9,10,17,17,20,24,30};
    int *r=CUT_BOTTOM_TO_TOP(p,10);
    for(int i=0;i<=10;i++)
        cout<<r[i]<<",";
}
