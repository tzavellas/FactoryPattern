#ifndef VEGGIES_HPP
#define VEGGIES_HPP

#include <iostream>
#include <string>

class Veggies
{
public:
    virtual ~Veggies() = default;
    friend std::ostream& operator<<(std::ostream& os, const Veggies& veggie);
    
protected:
    Veggies(const std::string& type) : m_Type{type} {}
    std::string m_Type;
};

inline std::ostream& operator<<(std::ostream& os, const Veggies& veggie)
{
    os << veggie.m_Type;
    return os;
}

#endif // VEGGIES_HPP