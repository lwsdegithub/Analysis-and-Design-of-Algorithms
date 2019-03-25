#include "DynamicProgramming.hpp"
#include <stdlib.h>
#include <iostream>
using namespace std;
int CUT_BRUTAL(int *p,int n){
    if(n==0) return 0;
    int q=-1;
    for(int i=0;i<=n-1;++i){
        int temp=p[i]+CUT_BRUTAL(p,n-i);
        std::cout<<temp;
        if(temp>q) q=temp;
        std::cout<<"the price is "<<q;
    }
    return q;
}

int* CUT_BOTTOM_TO_TOP(int *p,int length){
    int *r=(int *)malloc(sizeof(int)*(length+1));
    r[0]=0;
    for(int i=0;i<length;i++){
        int q=-1;
        for(int j=0;j<=i;j++){
            int temp=p[j]+r[i-j];
            q=q?q>temp:temp;
        }
        r[i+1]=q;
    }
    return r;
}
