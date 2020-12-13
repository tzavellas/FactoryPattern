#ifndef CLAMPIZZA_HPP
#define CLAMPIZZA_HPP

#include "Pizza.hpp"

class PizzaIngredientFactory;

class ClamPizza: public Pizza
{
public:
    ClamPizza(std::unique_ptr< PizzaIngredientFactory> ingredientFactory);
    void prepare() override;

private:
    std::unique_ptr< PizzaIngredientFactory > m_IngredientFactory;
};

#endif // CLAMPIZZA_HPP