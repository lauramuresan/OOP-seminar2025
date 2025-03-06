//
// Created by Laura Muresan on 06.03.2025.
//
#include <iostream>
class Dog {
public:
    bool eat() {

        std::cout<<"manca";
    };
    int setage(int new_age) {
       age = new_age;
        return age;
    }
    int getage() {
        return age;
    }
    private:
    int age;
};
int main(){

   Dog dog1=Dog();
    dog1.eat();
    // dog1.getage();
    // dog1.age=10;
    dog1.setage(10);
    dog1.getage();
    std::cout<<dog1.getage();
  return 0;
  }