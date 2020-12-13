#include "store/NYPizzaStore.hpp"
#include "factory/NYPizzaIngredientFactory.hpp"
#include "pizza/CheesePizza.hpp"
#include "pizza/ClamPizza.hpp"
#include "pizza/PepperoniPizza.hpp"
#include "pizza/VeggiePizza.hpp"

std::unique_ptr< Pizza > NYPizzaStore::createPizza(const std::string& type) const
{
    std::unique_ptr< Pizza > ret;
    std::unique_ptr< PizzaIngredientFactory > ingredientFactory = std::make_unique< NYPizzaIngredientFactory >();
    if ("cheese" == type)
    {
        ret = std::make_unique< CheesePizza >(std::move(ingredientFactory));
        ret->setName("New York Style Cheese Pizza");
    }
    else if ("pepperoni" == type)
    {
        ret = std::make_unique< PepperoniPizza >(std::move(ingredientFactory));
        ret->setName("New York Style Pepperoni Pizza");
    }
    else if("clam" == type)
    {
        ret = std::make_unique< ClamPizza >(std::move(ingredientFactory));
        ret->setName("New York Style Clam Pizza");
    }
    else if("veggie" == type)
    {
        ret = std::make_unique< VeggiePizza >(std::move(ingredientFactory));
        ret->setName("New York Style Veggie Pizza");
    }
    return ret;
}