//
//  main.cpp
//  CppShk
//
//  Created by 孙海洋 on 2022/8/29.
//

#include <iostream>
#include"Functionptr.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    estimate(100,  *Rick);
    
    //这个用typedef才能够更好的理解
    typedef void(* Fuc)(int);
    Fuc ptr[3] = { p1, p2, p3};
    for(auto n : ptr)
    {
        n(1);
    }
    
    
//    auto ptr = { p1, p2, p3};
//    auto itrater = ptr.begin();
//    while (itrater != ptr.end()) {
//        (*itrater)(1);
//        itrater++;
//    }
    return 0;
}
