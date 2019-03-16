#include "CommonUtils.hpp"
#include <iostream>
/**
***打印数组元素，便于观察
**/
void view_elem(int *A,int length){
    for(int i=0;i<length;i++){
        std::cout<<A[i]<<",";
    }
    std::cout<<std::endl;
}
/**
***输入数组元素
**/
void input_elem(int *A,int length){
    for(int i=0;i<length;i++){
        std::cin>>A[i];
    }
}
void view_elem_location(int *A,int start,int end){
    for(int i=start;i<=end;i++){
        std::cout<<A[i]<<",";
    }
    std::cout<<std::endl;
}
/**
***交换元素数据
**/
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
