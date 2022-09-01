//
//  Functionptr.cpp
//  CppShk
//
//  Created by 孙海洋 on 2022/9/1.
//

#include "Functionptr.hpp"
#include<iostream>

double Rick(int lines)
{
    return lines * 0.05;
}

void estimate(int lines, double (*pf)(int))
{
    std::cout << "您的代码大概用时：" << (*pf)(lines) << std::endl;
}

void p1(int n)
{
    std::cout << "这是p1" << std::endl;
}

void p2(int n)
{
    std::cout << "这是p2" << std::endl;
}

void p3(int n)
{
    std::cout << "这是p3" << std::endl;
}

