#include <iostream>
#include <stdlib.h>
#include "Sort.hpp"
#include "CommonUtils.hpp"
#include "FindMaximumSubArray.hpp"
#include "FindNearestPointPair.hpp"
using namespace std;
int main()
{
    int A[12]={1,2,5,4,8,4,-4,56,78,-3,4,7};
    cout<<sizeof(A)<<"\n";
    QUICK_SORT(A,0,11);
    view_elem(A,12);
}
