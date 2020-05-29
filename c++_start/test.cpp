#include <iostream>
#include <string>

int main(){
    std::string greeting = "Greeting!"; // compile against every standard
    std::string name{"Youtubers!"}; // compile against  c++ 11


    auto lambda = [] (auto num) { return num + num; }; // compile against c++ 14
    std::cout << "lambda[int]" << lambda(10) << std::endl;
    std::cout << "lambda[double]" << lambda(1.2) << std::endl;

    std::cout<< greeting << name << std::endl;

    return 0;
}
