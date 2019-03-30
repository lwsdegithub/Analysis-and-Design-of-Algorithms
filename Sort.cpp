#include "Sort.hpp"
#include "CommonUtils.hpp"
#include <stdlib.h>
/**
****选择排序，原址排序
**para1:数组
**para2:数组的长度
*/
void SELECTION_SORT(int* A,int length){
    int i,j,temp,min;
    for(i=0;i<length-1;i++){
        min=i;
        for(j=i+1;j<length;j++){
            if(A[min]>A[j]){
                min=j;
            }
        }
        temp=A[min];
        A[min]=A[i];
        A[i]=temp;
    }
}
/**
***二路归并排序
**/
void MERGE(int *A,int p,int q,int r){
    int length_left=q-p+1;
    int length_right=r-q;
    int A_left[length_left+1],A_right[length_right+1];
    int temp_p=p;
    int temp_q=q+1;
    /**划分数组**/
    for(int i=0;i<=length_left-1;i++){
        A_left[i]=A[temp_p++];
    }
    for(int i=0;i<=length_right-1;i++){
        A_right[i]=A[temp_q++];
    }
    A_left[length_left]=999999;
    A_right[length_right]=999999;
    int i=0,j=0;
    for(int k=p;k<=r;k++){
        if(A_left[i]<=A_right[j]){
            A[k]=A_left[i++];
        }else{
            A[k]=A_right[j++];
        }
    }
}
void MERGE_SORT(int *A,int f,int l){
    if(f<l){
        int m=(f+l)/2;
        MERGE_SORT(A,f,m);
        MERGE_SORT(A,m+1,l);
        MERGE(A,f,m,l);
    }
}
/**
***快速排序
**/
int PARTION(int *A,int low,int high){
    int pivot_value=A[low];
    while(low<high){
        while(high>low&&A[high]>=pivot_value) high--;
        A[low]=A[high];
        while(low<high&&A[low]<=pivot_value) low++;
        A[high]=A[low];
    }
    A[low]=pivot_value;
    return low;
}
void QUICK_SORT(int *A,int low,int high){
    if(low<high){
        int pa=PARTION(A,low,high);
        QUICK_SORT(A,low,pa);
        QUICK_SORT(A,pa+1,high);
    }
}
/**
***插入排序
**/
void INSERTION_SORT(int *A,int length){
    for(int i=1;i<length;i++){
        int key=A[i];
        int j=i-1;
        while(j>=0&&A[j]>key){
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=key;
    }
}
