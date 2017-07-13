/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point.cpp
 * Author: dima
 * 
 * Created on 14 октября 2016 г., 10:03
 */

#include "Point.hpp"

Point::Point()
{
    
}

Point::~Point()
{
    
}

void Point::Set_X(int X)
{
    _x = X;
}

void Point::Set_Y(int Y)
{
    _y = Y;
}

int Point::Get_X() const
{
    return _x;
}

int Point::Get_Y() const
{
    return _y;
}