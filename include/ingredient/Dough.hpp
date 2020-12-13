#ifndef DOUGH_HPP
#define DOUGH_HPP

#include <iostream>
#include <string>

class Dough
{
public:
    virtual ~Dough() = default;
    friend std::ostream& operator<<(std::ostream& os, const Dough& dough);
    
protected:
    Dough(const std::string& type) : m_Type{type} {}
    std::string m_Type;
};

inline std::ostream& operator<<(std::ostream& os, const Dough& dough)
{
    os << dough.m_Type;
    return os;
}

#endif // DOUGH_HPP