#include "store/ChicagoPizzaStore.hpp"
#include "factory/ChicagoPizzaIngredientFactory.hpp"
#include "pizza/CheesePizza.hpp"
#include "pizza/ClamPizza.hpp"
#include "pizza/PepperoniPizza.hpp"
#include "pizza/VeggiePizza.hpp"

std::unique_ptr< Pizza > ChicagoPizzaStore::createPizza(const std::string& type) const
{
    std::unique_ptr< Pizza > ret;
    std::unique_ptr< PizzaIngredientFactory > ingredientFactory = std::make_unique< ChicagoPizzaIngredientFactory >();
    if ("cheese" == type)
    {
        ret = std::make_unique< CheesePizza >(std::move(ingredientFactory));
        ret->setName("Chicago Style Cheese Pizza");
    }
    else if ("pepperoni" == type)
    {
        ret = std::make_unique< PepperoniPizza >(std::move(ingredientFactory));
        ret->setName("Chicago Style Pepperoni Pizza");
    }
    else if("clam" == type)
    {
        ret = std::make_unique< ClamPizza >(std::move(ingredientFactory));
        ret->setName("Chicago Style Clam Pizza");
    }
    else if("veggie" == type)
    {
        ret = std::make_unique< VeggiePizza >(std::move(ingredientFactory));
        ret->setName("Chicago Style Veggie Pizza");
    }
    return ret;
}