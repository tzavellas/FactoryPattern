#ifndef CLAMS_HPP
#define CLAMS_HPP

#include <iostream>
#include <string>

class Clams
{
public:
    virtual ~Clams() = default;
    friend std::ostream& operator<<(std::ostream& os, const Clams& clams);
    
protected:
    Clams(const std::string& type) : m_Type{type} {}
    std::string m_Type;
};

inline std::ostream& operator<<(std::ostream& os, const Clams& clams)
{
    os << clams.m_Type;
    return os;
}

#endif // CLAMS_HPP