#ifndef PEPPERONI_HPP
#define PEPPERONI_HPP

#include <iostream>
#include <string>

class Pepperoni
{
public:
    virtual ~Pepperoni() = default;
    friend std::ostream& operator<<(std::ostream& os, const Pepperoni& pepperoni);
    
protected:
    Pepperoni(const std::string& type) : m_Type{type} {}
    std::string m_Type;
};

inline std::ostream& operator<<(std::ostream& os, const Pepperoni& pepperoni)
{
    os << pepperoni.m_Type;
    return os;
}

#endif // PEPPERONI_HPP