#ifndef LCS_HPP_INCLUDED
#define LCS_HPP_INCLUDED
struct Result{
    int *b,*c;
};
void LCS_LENGTH(char *x,int length_x,char *y,int length_y,int *b);
void PRINT_LCS(int *b,char *x,int i,int j,int length_x);
#endif // LCS_HPP_INCLUDED
