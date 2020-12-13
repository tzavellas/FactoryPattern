#ifndef NYPIZZASTORE_HPP
#define NYPIZZASTORE_HPP

#include "PizzaStore.hpp"

class NYPizzaStore : public PizzaStore
{
public:
    std::unique_ptr< Pizza > createPizza(const std::string& type) const override;
};

#endif // NYPIZZASTORE_HPP