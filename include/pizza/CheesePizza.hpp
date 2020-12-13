#ifndef CHEESEPIZZA_HPP
#define CHEESEPIZZA_HPP

#include "Pizza.hpp"

class PizzaIngredientFactory;

class CheesePizza: public Pizza
{
public:
    CheesePizza(std::unique_ptr< PizzaIngredientFactory > ingredientFactory);
    void prepare() override;

private:
    std::unique_ptr< PizzaIngredientFactory > m_IngredientFactory;
};

#endif // CHEESEPIZZA_HPP