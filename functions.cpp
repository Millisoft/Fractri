//
// Created by Takudzwa Makoni on 09/03/2018.
//

//
//  functions.cpp
//  FRACF
//
//  Created by Takudzwa Mavmakomilli on 12/05/2017.
//  Copyright © 2017 The Milli Company. All rights reserved.
//

#include "functions.h"
#include <iostream>

int FRACTRI(int D, int d){
    int p = 0;
    int q = 0;
    p = D/d; // assigns p to the quotient of D divided by  d
    std::cout << " digit computed is " << p << " " << std::endl;
    q = D%d; // assigns q to the remainder of D divided by d
    D = q * 30; // assigns D to the remainer multiplied by 30, this new value D can be used for next trigesimal value
    std::cout << "the Dividend is now " << D << std::endl;

    return D;
};