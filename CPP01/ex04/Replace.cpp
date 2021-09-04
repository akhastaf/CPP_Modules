#include "Replace.hpp"

Replace::Replace(std::string& file, std::string& s1, std::string& s2): _file(file), _s1(s1), _s2(s2)
{
}

void    Replace::_replaceline(std::string& line)
{
    size_t l;
    size_t i;

    l = line.length();
    i = 0;
    while (i < l)
    {
        i = line.find(this->_s1, i);
        if (i == std::string::npos)
            break;
        line.erase(i, this->_s1.length());
        line.insert(i, this->_s2);
        i = i + this->_s2.length();
    }
}

void Replace::replaceall()
{
    std::string line;
    std::string& rline = line;

    if (this->_s1.empty() || this->_s2.empty())
        throw std::string("Error : one of the strings is empty");
    this->_original.open(this->_file);
    if (!this->_original.is_open())
        throw std::string(this->_file + " file can't be open");
    this->_replace.open(this->_file + ".replace");
    if (!this->_replace.is_open())
        throw std::string(this->_file + ".replace file can't be open");
    while (std::getline(this->_original, line))
    {
        this->_replaceline(rline);
        this->_replace << line << std::endl;
    }
}