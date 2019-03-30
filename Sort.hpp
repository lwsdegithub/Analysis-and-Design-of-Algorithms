#ifndef SORT_HPP_INCLUDED
#define SORT_HPP_INCLUDED
void SELECTION_SORT(int* A,int length);

void MERGE(int *A,int p,int q,int r);
void MERGE_SORT(int *A,int f,int l);

int PARTION(int *A,int low,int high);
void QUICK_SORT(int *A,int low,int high);

void INSERTION_SORT(int *A,int length);
#endif

