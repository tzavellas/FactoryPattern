#ifndef VEGGIEPIZZA_HPP
#define VEGGIEPIZZA_HPP

#include "Pizza.hpp"

class PizzaIngredientFactory;

class VeggiePizza : public Pizza
{
public:
    VeggiePizza(std::unique_ptr< PizzaIngredientFactory> ingredientFactory);
    void prepare() override;

private:
    std::unique_ptr< PizzaIngredientFactory > m_IngredientFactory;
};

#endif // VEGGIEPIZZA_HPP