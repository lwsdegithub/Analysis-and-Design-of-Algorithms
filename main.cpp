#include <iostream>
#include <stdlib.h>
#include "Sort.hpp"
#include "CommonUtils.hpp"
#include "FindMaximumSubArray.hpp"
#include "FindNearestPointPair.hpp"
#include "DynamicProgramming.hpp"
#include "Select.h"
#include "LCS.hpp"
using namespace std;
int main()
{
    char *x="10010101";
    char *y="010110110";
    int *b=(int *)malloc(sizeof(int)*72);
    LCS_LENGTH(x,8,y,9,b);
    PRINT_LCS(b,x,7,8,8);
    return 0;
}
