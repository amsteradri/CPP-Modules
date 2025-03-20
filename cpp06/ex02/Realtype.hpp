#pragma once 

#include <stdint.h>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
#include <iomanip> 

class Base{
    public: 
        virtual ~Base() {}
};

class A : public Base {

};

class B : public Base {
    
};

class C : public Base {

};

