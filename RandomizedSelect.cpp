#include "RandomizedSelect.hpp"
#include "Sort.hpp"
#include <stdlib.h>
int MEDIAN(int *A,int low,int high){
    int len=high-low+1;
    int sub_array_num=len/5+1;
    //int len2=len%5;
    //��ÿ��Ԫ�ؽ���������ȡ��λ��
    int *mids=(int *)malloc(sizeof(int)*(sub_array_num));
}
