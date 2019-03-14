#include "FindMaximumSubArray.hpp"
#include <stdlib.h>
#include <iostream>
/**求解最大子数组**/
int* FIND_MAXIMUM_CROSSING_SUBARRAY(int *A,int low,int mid,int high){
    int *result=(int *)malloc(sizeof(int)*3);
    int left_sum=-99999;
    int sum=0,max_left;
    for(int i=mid;i>=low;i--){
        sum+=A[i];
        if(sum>left_sum){
            left_sum=sum;
            max_left=i;
        }
    }
    int right_sum=-99999;
    int max_right;
    sum=0;
    for(int i=mid+1;i<=high;i++){
        sum+=A[i];
        if(sum>right_sum){
            right_sum=sum;
            max_right=i;
        }
    }
    result[0]=max_left;
    result[1]=max_right;
    result[2]=left_sum+right_sum;
    return result;
}
int* FIND_MAXIMUM_SUBARRAY(int *A,int low,int high){
    if(low==high){
        std::cout<<"low is"<<low<<",high is"<<high<<",sum is"<<A[low]<<std::endl;
        int *result=(int *)malloc(sizeof(int)*3);
        result[0]=low;
        result[1]=high;
        result[2]=A[low];
        return result;
    }
    else{
        int mid=(low+high)/2;
        int *result_left=FIND_MAXIMUM_SUBARRAY(A,low,mid);
        int *result_right=FIND_MAXIMUM_SUBARRAY(A,mid+1,high);
        int *result_crossing=FIND_MAXIMUM_CROSSING_SUBARRAY(A,low,mid,high);
        if(result_left[2]>result_right[2]&&result_left[2]>result_crossing[2]){
            return result_left;
        }else if(result_right[2]>result_left[2]&&result_right[2]>result_crossing[2]){
            return result_right;
        }else {
            return result_crossing;
        }
    }
}

int* FIND_MAXIMUM_SUBARRAY_LINEAR(int *A,int length){
    int ending_here_high,ending_here_low;
    int ending_here_sum=-9999;
    int *result=(int *)malloc(sizeof(int)*3);
    for(int j=0;j<length;j++){
        ending_here_high=j;
        if (ending_here_sum>0){
            ending_here_sum+=A[j];
        }else{
            ending_here_low=j;
            ending_here_sum=A[j];
        }
        if(ending_here_sum>result[2]){
            result[2]=ending_here_sum;
            result[0]=ending_here_low;
            result[1]=ending_here_high;
        }
    }
    return result;
}
