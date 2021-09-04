#ifndef REPLACE_HPP
# define REPLACE_HPP
# include <iostream>
# include <fstream>
# include <string>

class   Replace {
    std::ifstream _original;
    std::ofstream _replace;
    std::string _file;
    std::string _s1;
    std::string _s2;

    void _replaceline(std::string& line);
    public:
    Replace(std::string& file, std::string& s1, std::string& s2);
    void replaceall();
};

#endif