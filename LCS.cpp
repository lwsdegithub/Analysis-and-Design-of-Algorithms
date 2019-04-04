#include "LCS.hpp"
#include <iostream>
#include "stdlib.h"
using namespace std;
void LCS_LENGTH(char *x,int length_x,char *y,int length_y,int *b){

    int c[length_x+1][length_y+1];
    for(int i=0;i<length_x+1;i++) c[i][0]=0;
    for(int i=0;i<length_y+1;i++) c[0][i]=0;
    for(int i = 0; i < length_x; i++)
    {
        for(int j = 0; j < length_y; j++)
        {
            if (x[i]==y[j]) {
                c[i+1][j+1]=c[i][j]+1;
                *(b+i*length_x+j)=1;
            }else if (c[i][j+1]>=c[i+1][j]) {
                c[i+1][j+1]=c[i][j+1];
                *(b+i*length_x+j)=2;
            }else{
                c[i+1][j+1]=c[i+1][j];
                *(b+i*length_x+j)=3;
            }
        }
    }
    std::cout<<"the c matrix is:"<<std::endl;
    for(int i=0;i<=length_x;++i){
        for(int j=0;j<=length_y;++j){
            std::cout<<c[i][j]<<",";
        }
        std::cout<<std::endl;
    }
    std::cout<<"\nthe b matrix is:"<<std::endl;
    for(int i=0;i<length_x;i++){
        for(int j=0;j<length_y;++j){
            std::cout<<*(b+i*length_x+j)<<",";
        }
        std::cout<<std::endl;
    }
}
/**初始调用为PRINT_LCS(b,x,length_x-1,length_y-1,length_x)**/
void PRINT_LCS(int *b,char *x,int i,int j,int length_x){
    if(i==-1 || j==-1) return;
    if (*(b+i*length_x+j)==1){
        PRINT_LCS(b,x,i-1,j-1,length_x);
        std::cout<<x[i]<<",";
    }else if(*(b+i*length_x+j)==2){
        PRINT_LCS(b,x,i-1,j,length_x);
    }else PRINT_LCS(b,x,i,j-1,length_x);
}
