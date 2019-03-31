#ifndef SELECT_HPP_INCLUDED
#define SELECT_HPP_INCLUDED
/**求中位数**/
int MEDIAN(int *A,int low,int high);
/**根据这个中位数进行partion**/
int PARTION(int *A,int low,int high,int mid);
/**总控递归程序**/
int SELECT(int *A,int low,int high,int i);
#endif
