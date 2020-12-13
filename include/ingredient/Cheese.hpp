#ifndef CHEESE_HPP
#define CHEESE_HPP

#include <iostream>
#include <string>

class Cheese
{
public:
    virtual ~Cheese() = default;
    friend std::ostream& operator<<(std::ostream& os, const Cheese& cheese);
    
protected:
    Cheese(const std::string& type) : m_Type{type} {}
    std::string m_Type;
};

inline std::ostream& operator<<(std::ostream& os, const Cheese& cheese)
{
    os << cheese.m_Type;
    return os;
}

#endif // CHEESE_HPP