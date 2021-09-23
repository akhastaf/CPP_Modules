#include <iostream>

struct  Data {
    std::string name;
    unsigned int age;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data me;
    me.name = "me";
    me.age = 27;
    std::cout << "Name : " << me.name << " and age : " << me.age << std::endl;
    uintptr_t test = serialize(&me);
    Data *me2 = deserialize(test);
    std::cout << "Name : " << me2->name << " and age : " << me2->age << std::endl;
    return 0;
}