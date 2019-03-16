#include <iostream>
#include "Sort.hpp"
#include "CommonUtils.hpp"
#include "FindMaximumSubArray.hpp"
#include "FindNearestPointPair.hpp"
using namespace std;
int main()
{
    int length=3;
    int B[length]={2,4,-8};
    int *result=FIND_MAXIMUM_SUBARRAY(B,0,length-1);
    cout<<"low is: "<<result[0]<<",high is: "<<result[1]<<",sum is: "<<result[2]<<endl;
    cout<<"the elements are:"<<endl;

    return 0;
}
