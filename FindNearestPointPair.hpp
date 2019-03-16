#ifndef FINDNEARESTPOINTPAIR_HPP_INCLUDED
#define FINDNEARESTPOINTPAIR_HPP_INCLUDED

typedef class Point{
    public:
    float x,y;
}Point;
float dis(Point a,Point b);
Point *FIND_NEAREST_POINT_PAIR(Point *points,int num);
#endif // FINDNEARESTPOINTPAIR_HPP_INCLUDED
