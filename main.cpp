#include <iostream>
#include <stdlib.h>
#include "Sort.hpp"
#include "CommonUtils.hpp"
#include "FindMaximumSubArray.hpp"
#include "FindNearestPointPair.hpp"
#include "DynamicProgramming.hpp"
#include "Select.h"
using namespace std;
int main()
{
    int p[10]={1,5,8,4,10,23,17,20,89,30};
    int i=MEDIAN(p,0,9);
    cout<<i;
}
