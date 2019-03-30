#include "Select.h"
#include "Sort.hpp"
#include <stdlib.h>

#define STEP 5
using namespace std;
/**low,high are the index of the array.The smallest low is 0,the largest high is LENGTH_A-1**/
int MEDIAN(int *A,int low,int high){
    /**how to get the mean? ,
    ***1.Divide the A to some sub_array, 5 is a group, the last which's number below 5 is also considered a group;
    ***2.Sort every group, get the MID of every group, get a new array;
    ***3.From the new array, we can get the MID;
    **/
    int length=high-low+1;
    int last_array_length=length%5;
    int array_num=(last_array_length==0) ? (length/5):(length/5+1);
    int first_mids[array_num]={0};

    int num=0;
    int sub[5]={0};
    for(int i=low;i<=high-last_array_length;i+=5){
            /**save(copy) the sub array**/
            for(int j=0,k=i;j<=4;j++,k++){
                sub[j]=A[k];
            }
            /**use the INSERTION_SORT from "Sort.hpp"**/
            INSERTION_SORT(sub,5);
            first_mids[num++]=sub[2];
    }
    if(last_array_length!=0){
        for(int j=0,k=high-last_array_length+1;j<=last_array_length-1;j++,k++){
            sub[j]=A[k];
        }
        INSERTION_SORT(sub,last_array_length);
        first_mids[num]=sub[last_array_length/2];
    }
    INSERTION_SORT(first_mids,array_num);
    return first_mids[array_num/2];
}
