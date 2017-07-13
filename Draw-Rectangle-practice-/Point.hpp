/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point.hpp
 * Author: dima
 *
 * Created on 14 октября 2016 г., 10:03
 */

#ifndef POINT_HPP
#define POINT_HPP

class Point {
public:
    Point();
    virtual ~Point();
    
    void Set_X(int X);
    void Set_Y(int Y);
    
    int Get_X() const;
    int Get_Y() const;
private:
    int _x;
    int _y;
};

#endif /* POINT_HPP */

