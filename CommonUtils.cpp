#include "CommonUtils.hpp"
#include <iostream>
/**
***��ӡ����Ԫ�أ����ڹ۲�
**/
void view_elem(int *A,int length){
    for(int i=0;i<length;i++){
        std::cout<<A[i]<<",";
    }
    std::cout<<std::endl;
}
/**
***��������Ԫ��
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
***����Ԫ������
**/
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
