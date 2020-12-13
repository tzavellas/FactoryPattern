#ifndef PIZZASTORE_HPP
#define PIZZASTORE_HPP

#include <memory>
#include <string>
#include "pizza/Pizza.hpp"

class PizzaStore
{
public:
    virtual ~PizzaStore() = default;
    std::unique_ptr< Pizza > orderPizza(const std::string& type) const;
    
protected:
    PizzaStore() = default;
    virtual std::unique_ptr< Pizza > createPizza(const std::string& type) const = 0;
};

#endif // PIZZASTORE_HPP