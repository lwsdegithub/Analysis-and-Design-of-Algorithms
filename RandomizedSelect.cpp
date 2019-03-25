#include "RandomizedSelect.hpp"
#include "Sort.hpp"
#include <stdlib.h>
int MEDIAN(int *A,int low,int high){
    int len=high-low+1;
    int sub_array_num=len/5+1;
    //int len2=len%5;
    //对每组元素进行排序，求取中位数
    int *mids=(int *)malloc(sizeof(int)*(sub_array_num));
}
