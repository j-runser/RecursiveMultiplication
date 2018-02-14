//
//  RecursiveMultiplication.cpp
//  RecursiveMultiplication
//
//  Created by Joseph Runser on 9/18/17.
//  Copyright © 2017 Joe's Laptop. All rights reserved.
//

#include "RecursiveMultiplication.hpp"

int RecursiveMultiplication::Multiply(int a, int b){
    
    if(a == 1) { return b; }
    else { return Multiply(a - 1, b) + b; }
    
}
