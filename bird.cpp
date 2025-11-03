#include <iostream>
#include "bird.h"

void Duck::display(){
    std::cout << "Species: " <<species<<std::endl;
}
void Duck::fly(){
    std::cout << "This bird can fly." << std::endl;
}
void Duck::swim(){
    std::cout<<"This bird can swim."<<std::endl;
}
void Duck::cry(){
    std::cout << "Quack!" << std::endl;
}
Duck::~Duck(){
    cry();
}


void Penguin::display(){
    std::cout << "Species: " <<species<<std::endl;
}
void Penguin::fly(){
    std::cout << "This bird can't fly." << std::endl;
}
void Penguin::swim(){
    std::cout<<"This bird can swim."<<std::endl;
}
void Penguin::cry(){
    std::cout << "Squawk!" << std::endl;
}
Penguin::~Penguin(){
    cry();
}


void Eagle::display(){
    std::cout << "Species: " <<species<<std::endl;
}
void Eagle::fly(){
    std::cout << "This bird can fly." << std::endl;
}
void Eagle::swim(){
    std::cout<<"This bird can't swim."<<std::endl;
}
void Eagle::cry(){
    std::cout << "Screech!" << std::endl;
}

Eagle::~Eagle(){
    cry();
}