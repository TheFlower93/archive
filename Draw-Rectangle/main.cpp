/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dima
 *
 * Created on 18 октября 2016 г., 14:09
 */

#include <iostream>

enum CHOICE
{
    DrawRect = 1
    , GetArea
    , GetPerim
    , ChangeDimensions
    , Quit
};

class Rectangle
{
public:
    Rectangle(int width, int height);
    ~Rectangle();

    int GetWight() const { return _width; }
    int GetHeight() const { return _height; }
    int GetArea() const { return _width * _height; }
    int GetPerim() const { return 2 * _width + 2 * _height; }
    void SetSize(int newWidth, int newHeight);

private:
    int _width;
    int _height;
};

Rectangle::Rectangle(int width, int height)
{
    _width = width;
    _height = height;
}

void Rectangle::SetSize(int newWidth, int newHeight)
{
    _width = newWidth;
    _height = newHeight;
}

Rectangle::~Rectangle() {}

int DoMenu()
{
    int choice;
    std::cout << "****MENU****" << std::endl;
    std::cout << "(1) Draw Rectangle" << std::endl;
    std::cout << "(2) Area" << std::endl;
    std::cout << "(3) Perimeter" << std::endl;
    std::cout << "(4) Resize" << std::endl;
    std::cout << "(5) Quit" << std::endl;
    std::cin >> choice;

    return choice;
}

void DoDrawRect(Rectangle theRect)
{
    int height = theRect.GetHeight();
    int weight = theRect.GetWight();

    for (int i = 0; i < height; ++i) {
            for (int j = 0; j < weight; ++j)
                    std::cout << "#";
            std::cout << std::endl;
    }
}

void DoGetArea(Rectangle theRect)
{
    std::cout << "Area: " << theRect.GetArea() << std::endl;
}
void DoGetPerim(Rectangle theRect)
{
    std::cout << "Perimeter: " << theRect.GetPerim() << std::endl;
}

int main()
{
    Rectangle theRect(30, 5);
    int choice = DrawRect;
    int fQuit = false;

    while (!fQuit) {
            choice = DoMenu();

            if (choice < DrawRect || choice > Quit) {
                    std::cout << "Invalid choice. Please, try again!" << std::endl;
                    continue;
            }

            switch (choice) {
            case DrawRect:
                    DoDrawRect(theRect);
                    break;
            case GetArea:
                    DoGetArea(theRect);
                    break;
            case GetPerim:
                    DoGetPerim(theRect);
                    break;
            case ChangeDimensions:
                    int newLenght, newWidth;
                    std::cout << "New width: ";
                    std::cin >> newWidth;
                    std::cout << "New height: ";
                    std::cin >> newLenght;
                    theRect.SetSize(newWidth, newLenght);
                    DoDrawRect(theRect);
                    break;
            case Quit:
                    fQuit = true;
                    std::cout << "Exiting..." << std::endl;
                    break;
            default:
                    std::cout << "Error in choice" << std::endl;
                    fQuit = true;
                    break;
            }
    }

    return 0;
}