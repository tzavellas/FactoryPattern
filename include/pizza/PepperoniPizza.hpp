#ifndef PEPPERONIPIZZA_HPP
#define PEPPERONIPIZZA_HPP

#include "Pizza.hpp"

class PizzaIngredientFactory;

class PepperoniPizza : public Pizza
{
public:
    PepperoniPizza(std::unique_ptr< PizzaIngredientFactory> ingredientFactory);
    void prepare() override;

private:
    std::unique_ptr< PizzaIngredientFactory > m_IngredientFactory;
};

#endif // PEPPERONIPIZZA_HPP