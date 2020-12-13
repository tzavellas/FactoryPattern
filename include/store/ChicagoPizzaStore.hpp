#ifndef CHICAGOPIZZASTORE_HPP
#define CHICAGOPIZZASTORE_HPP

#include "PizzaStore.hpp"

class ChicagoPizzaStore : public PizzaStore
{
public:
    std::unique_ptr< Pizza > createPizza(const std::string& type) const override;
};

#endif // CHICAGOPIZZASTORE_HPP