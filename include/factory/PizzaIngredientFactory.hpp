#ifndef PIZZAINGREDIENTFACTORY_HPP
#define PIZZAINGREDIENTFACTORY_HPP

#include "ingredient/Veggies.hpp"
#include <memory>
#include <vector>

class Dough;
class Sauce;
class Cheese;
class Pepperoni;
class Clams;

class PizzaIngredientFactory
{
public:
    virtual ~PizzaIngredientFactory() = default;
    virtual std::unique_ptr< Dough > createDough() = 0;
    virtual std::unique_ptr< Sauce > createSauce() = 0;
    virtual std::unique_ptr< Cheese > createCheese() = 0;
    virtual std::vector< Veggies > createVeggies() = 0;
    virtual std::unique_ptr< Pepperoni > createPepperoni() = 0;
    virtual std::unique_ptr< Clams > createClam() = 0;
    
protected:
    PizzaIngredientFactory() = default;
};

#endif // PIZZAINGREDIENTFACTORY_HPP