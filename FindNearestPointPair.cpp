#include "FindNearestPointPair.hpp"
#include <cmath>
#include <vector>
#include <stdlib.h>
float dis(Point a,Point b){
    float d=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    return d;
}
/**
***O(n**2)
**/
Point *FIND_NEAREST_POINT_PAIR(Point *points,int num){
    float distence=dis(points[0],points[1]);
    int a,b;
    for(int i=0;i<=num-1;i++){
        for(int j=i+1;j<=num;j++){
            float dtc=dis(points[i],points[j]);
            if(dtc<distence&&j!=i){
                distence=dtc;
                a=i;
                b=j;
            }
        }
    }
    Point *result=(Point *)malloc(sizeof(Point)*2);
    result[0]=points[a];
    result[1]=points[b];
    return result;
}

