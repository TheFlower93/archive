/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.hpp
 * Author: dima
 *
 * Created on 14 октября 2016 г., 10:08
 */

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
public:
    Rectangle(int top, int left, int bottom, int right);
    virtual ~Rectangle();
    
    void Set_top(int top);
    void Set_left(int left);
    void Set_bottom(int bottom);
    void Set_right(int right);
    
    int Get_top() const;
    int Get_left() const;
    int Get_bottom() const;
    int Get_right() const;
    
    void Set_upper_left(Point upperLeft);
    void Set_upper_right(Point upperRight);
    void Set_lower_left(Point lowerLeft);
    void Set_lower_right(Point lowerRight);
    
    Point Get_upper_left() const;
    Point Get_upper_right() const;
    Point Get_lower_left() const;
    Point Get_lower_right() const;
    
    int GetArea() const;
    
private:
    int _top;
    int _left;
    int _bottom;
    int _right;
    
    Point _upperLeft;
    Point _upperRight;
    Point _lowerLeft;
    Point _lowerRight;
};

#endif /* RECTANGLE_HPP */