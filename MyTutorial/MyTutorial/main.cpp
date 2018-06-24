//
//  main.cpp
//  MyTutorial
//
//  Created by Alan on 2018-06-03.
//  Copyright © 2018 Alan. All rights reserved.
//

#include <iostream>
#include "main.h"

int main(int argc, const char * argv[]) {
    MyClass::listTest();
    /*
    int valX, valY;
    
    std::cout << "Enter first value: ";
    std::cin >> valX;
    std::cout << "Enter second value: ";
    std::cin >> valY;
    
    int resAdd = MyClass::AddFunc(valX, valY);
    int resSubtract = MyClass::SubtractFunc(valX, valY);
    int resMultiply = MyClass::MultiplyFunc(valX, valY);
    double resDivide = MyClass::DivideFunc((double) valX, (double) valY);
    
    std::cout << valX << " + " << valY << " = " << resAdd << "\n";
    std::cout << valX << " - " << valY << " = " << resSubtract << "\n";
    std::cout << valX << " * " << valY << " = " << resMultiply << "\n";
    if (resDivide == 0)
    {
        std::cout << valX << " / " << valY << " = " << "N/A" << "\n";
    }
    else
    {
         std::cout << valX << " / " << valY << " = " << resDivide << "\n";
    }
    */
    return 0;
}

void MyClass::listTest()
{
    std::cout << "Enter five numbers...\n";
    int *list = new int[5];
    for (int i = 0; i < 5; i++)
    {
        std::cout << ">> ";
        std::cin >> list[i];
        //std::cout << "\n";
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << (i + 1) << ": " << list[i] << "\n";
    }
    std::cout << "Deleting the list...\n";
    delete[] list;
    std::cout << "List successfully deleted!\n";
}

/**
 * Comment.
 * @return x and y added together.
 */
int MyClass::AddFunc(int x, int y)
{
    return x + y;
}

int MyClass::SubtractFunc(int x, int y)
{
    return x - y;
}

int MyClass::MultiplyFunc(int x, int y)
{
    return x * y;
}

double MyClass::DivideFunc(double x, double y)
{
    if (y != 0)
    {
        return x / y;
    }
    else
    {
        std::cout << "Error: divide by zero\n";
        return 0;
    }
}
