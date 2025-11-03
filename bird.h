#pragma once

#include <iostream>

class Bird {
    std::string species; 
public:
    Bird(){}
    Bird(std::string species): species(species){
        std::cout << species << " has borned" << std::endl;
    }

    virtual void display() {
        std::cout << "Species: " << species << std::endl;
    }

    virtual void fly() {
        std::cout << "This bird can fly." << std::endl;
    }

    virtual void swim() {
        std::cout << "This bird can swim." << std::endl;
    }

    virtual void cry() = 0;

    virtual ~Bird() {
        std::cout << species << " has died" << std::endl;
     }
};
class Duck : public Bird {
public:
    std::string species = "Duck";
    Duck() : Bird("Duck"){
        cry();
    }
    Duck(std::string species): Bird(species){
        std::cout<<species<<" has borned"<<std::endl;
    }
    void display() override;
    void fly() override;
    void swim() override;
    void cry() override;
    ~Duck() override;
};

class Penguin : public Bird {
public: 
    std::string species = "Penguin";
    Penguin() : Bird("Penguin") { cry();}
    Penguin(std::string species): Bird(species){
        std::cout<<species<<" has borned"<<std::endl;
    }
    void display() override;
    void fly() override;
    void swim() override;
    void cry() override;

    ~Penguin() override;
};

class Eagle : public Bird {
public:
    std::string species = "Eagle";
    Eagle() : Bird("Eagle"){ cry(); }
    Eagle(std::string species) : Bird(species){
        std::cout<<species<<" has borned"<<std::endl;
    }
    void display() override;
    void fly() override;
    void swim() override;
    void cry() override;
    ~Eagle() override;

};
