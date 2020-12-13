#include "pizza/PepperoniPizza.hpp"
#include "factory/PizzaIngredientFactory.hpp"
#include <iostream>

PepperoniPizza::PepperoniPizza(std::unique_ptr< PizzaIngredientFactory > ingredientFactory) : m_IngredientFactory(std::move(ingredientFactory))
{
    // nothing to do
}

void PepperoniPizza::prepare()
{
    if (m_IngredientFactory)
    {
        std::cout << "Preparing " << m_Name << std::endl;
        m_Dough = std::move(m_IngredientFactory->createDough());
        m_Sauce = std::move(m_IngredientFactory->createSauce());
        m_Cheese = std::move(m_IngredientFactory->createCheese());
        m_Pepperoni = std::move(m_IngredientFactory->createPepperoni());
    }
}