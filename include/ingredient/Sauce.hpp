#ifndef SAUCE_HPP
#define SAUCE_HPP

#include <iostream>
#include <string>

class Sauce
{
public:
    virtual ~Sauce() = default;
    friend std::ostream& operator<<(std::ostream& os, const Sauce& sauce);
    
protected:
    Sauce(const std::string& type) : m_Type{type} {}
    std::string m_Type;
};

inline std::ostream& operator<<(std::ostream& os, const Sauce& sauce)
{
    os << sauce.m_Type;
    return os;
}

#endif // SAUCE_HPP