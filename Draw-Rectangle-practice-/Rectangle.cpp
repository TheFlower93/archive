/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.cpp
 * Author: dima
 * 
 * Created on 14 октября 2016 г., 10:08
 */

#include "Rectangle.hpp"
#include "Point.hpp"

Rectangle::Rectangle(int top, int left, int bottom, int right)
{
    _top = top;
    _left = left;
    _bottom = bottom;
    _right = right;

    _upperLeft.Set_X(left);
    _upperLeft.Set_Y(top);
    _upperRight.Set_X(right);
    _upperRight.Set_Y(top);
    _lowerLeft.Set_X(left);
    _lowerLeft.Set_Y(bottom);
    _lowerRight.Set_X(right);
    _lowerRight.Set_Y(bottom);
}

Rectangle::~Rectangle()
{

}

void Rectangle::Set_top(int top)
{
    _top = top;
}

void Rectangle::Set_left(int left)
{
    _left = left;
}

void Rectangle::Set_bottom(int bottom)
{
    _bottom = bottom;
}

void Rectangle::Set_right(int right)
{
    _right = right;
}

int Rectangle::Get_top() const
{
    return _top;
}

int Rectangle::Get_left() const
{
    return _left;
}

int Rectangle::Get_bottom() const
{
    return _bottom;
}

int Rectangle::Get_right() const
{
    return _right;
}

void Rectangle::Set_upper_left(Point upperLeft)
{
    _upperLeft = upperLeft;
}

void Rectangle::Set_upper_right(Point upperRight)
{
    _upperRight = upperRight;
}

void Rectangle::Set_lower_left(Point lowerLeft)
{
    _lowerLeft = lowerLeft;
}

void Rectangle::Set_lower_right(Point lowerRight)
{
    _lowerRight = lowerRight;
}

Point Rectangle::Get_upper_left() const
{
    return _upperLeft;
}

Point Rectangle::Get_upper_right() const
{
    return _upperRight;
}

Point Rectangle::Get_lower_left() const
{
    return _lowerLeft;
}

Point Rectangle::Get_lower_right() const
{
    return _lowerRight;
}

int Rectangle::GetArea() const
{
    int width = _right - _left;
    int height = _top - _bottom;

    return (width * height);
}