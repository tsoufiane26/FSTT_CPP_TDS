#include<iostream>
#ifndef POINT_H
#define POINT_H
class Point {
private:
    float x;
    float y;
public:
    Point(float x = 0, float y = 0) : x(x), y(y) {}
    void deplace(float dx, float dy){
        x=x+dx;
        y=y+dy;
    }
    void affiche() {
        std::cout<< "Coordonnées du point : (" << x << ", " << y << ")" << std::endl;
    }
};
#endif
