//
// Created by Takudzwa Makoni on 09/03/2018.
//

//
//  main.cpp
//  FRACF
//
//  Created by Takudzwa Mavmakomilli on 12/05/2017.
//  Copyright © 2017 The Milli Company. All rights reserved.
//

//FRACTRI is a function which takes a fraction and converts it to a trigesimal

#include <iostream>
#include "functions.h"


int main(){
    char repeat = 'y';

    while(repeat == 'y'){
        int D = 0;
        int d = 0;
        std::cout << "enter the Dividend" << std::endl;
        std::cin >> D; // user inputs the numerator/dividend and assigns it to D
        std::cout << "enter the Divisor" << std::endl;
        std::cin >> d; // user inputs the corresponding denominator/divisor and assigns it to d
        FRACTRI(D, d); // performs the function FRACTRI with inputs D and d
        std::cout << "next digit? (y/n)" << std::endl;
        std::cin >> repeat;

    }

    std::cin.get();
    return 0;

}