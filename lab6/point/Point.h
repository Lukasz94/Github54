//
// Created by pilanorb on 04.04.17.
//

#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point {
public:


    void SetX(double x);
    void SetY(double y);

    friend std::istream& operator>>(std::istream &, Point&);
    friend std::istream& operator>>(std::istream &is, Point& point);

private:
    double x_, y_;
};

std::istream& operator>>(std::istream &is, Point& point);
#endif
