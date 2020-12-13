#ifndef CHICAGOPIZZAINGREDIENTFACTORY_HPP
#define CHICAGOPIZZAINGREDIENTFACTORY_HPP

#include "PizzaIngredientFactory.hpp"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    std::unique_ptr< Dough > createDough() override;
    std::unique_ptr< Sauce > createSauce() override;
    std::unique_ptr< Cheese > createCheese() override;
    std::vector< Veggies > createVeggies() override;
    std::unique_ptr< Pepperoni > createPepperoni() override;
    std::unique_ptr< Clams > createClam() override;
};

#endif // CHICAGOPIZZAINGREDIENTFACTORY_HPP