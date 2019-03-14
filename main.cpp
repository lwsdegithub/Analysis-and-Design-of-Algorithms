#include <iostream>
#include "Sort.hpp"
#include "CommonUtils.hpp"
#include "FindMaximumSubArray.hpp"
using namespace std;
int main()
{
    int B[3]={-1,2,-1};
    int *result=FIND_MAXIMUM_SUBARRAY(B,0,2);
    cout<<"low is: "<<result[0]<<",high is: "<<result[1]<<",sum is: "<<result[2]<<endl;
    return 0;
}
