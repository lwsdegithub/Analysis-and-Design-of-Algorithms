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
    int p[6]={1,5,8,4,10,23};
    cout<<SELECT(p,0,5,5)<<endl;
    view_elem(p,6);
}
