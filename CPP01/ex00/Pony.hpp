#ifndef PONY_HPP
# define PONY_HPP
#include <iostream>

class Pony {
    float height;
    float weight;
    std::string color;

    public:
    Pony(std::string color, float weight, float height);
    float   getHeight();
    float   getWeight();
    std::string getColor();
};
#endif