#include "pizza/Pizza.hpp"
#include <iostream>
#include <sstream>

void Pizza::bake()
{
    std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::cut()
{
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void Pizza::box()
{
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

void Pizza::setName(const std::string& name)
{
    m_Name = name;
}

std::string Pizza::getName() const
{
    return m_Name;
}

std::string Pizza::toString() const
{
    std::ostringstream os;
    if (m_Dough)
    {
        os << *m_Dough << ", ";
    }
    if (m_Sauce)
    {
        os << *m_Sauce << ", ";
    }
    if (m_Cheese)
    {
        os << *m_Cheese << ", ";
    }
    if (m_Pepperoni)
    {
        os << *m_Pepperoni << ", ";
    }
    if (m_Clam)
    {
        os << *m_Clam << ", ";
    }
    os << veggiesToString() << std::endl;
    return os.str();
}

std::string Pizza::veggiesToString() const
{
    std::ostringstream os;
    for(auto& veggie: m_Veggies)
    {
        os << veggie << ", ";
    }
    return os.str();
}