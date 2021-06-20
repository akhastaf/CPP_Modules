#include "Pony.hpp"

Pony::Pony(std::string color, float weight, float height)
{
    this->color = color;
    this->weight = weight;
    this->height = height;
}

std::string Pony::getColor()
{
    return this->color;
}

float   Pony::getHeight()
{
    return this->height;
}

float Pony::getWeight()
{
    return this->weight;
}