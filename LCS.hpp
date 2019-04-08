#ifndef LCS_HPP_INCLUDED
#define LCS_HPP_INCLUDED
struct Result{
    int *b,*c;
};
void LCS_LENGTH(char *x,int length_x,char *y,int length_y,int *b);
void PRINT_LCS(int *b,char *x,int i,int j,int length_x);
/**调用方式
int main()
{
    char *x="10010101";
    char *y="010110110";
    int *b=(int *)malloc(sizeof(int)*72);
    LCS_LENGTH(x,8,y,9,b);
    PRINT_LCS(b,x,7,8,8);
    return 0;
}
**/
#endif // LCS_HPP_INCLUDED
