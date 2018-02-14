//
//  main.cpp
//  RecursiveMultiplication
//
//  Created by Joseph Runser on 9/18/17.
//  Copyright © 2017 Joe's Laptop. All rights reserved.
//

#include <iostream>
#include "RecursiveMultiplication.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int a = 0;
    int b = 0;
    
    while(true) {
        cout << "Please enter the numbers you want to multiply: ";
        cin >> a >> b;
        
        if(a == -1 || b == -1) { break; }
    
        cout << "Total: " << RecursiveMultiplication::Multiply(a, b) << endl << endl;
    }
    
    return 0;
    
}
