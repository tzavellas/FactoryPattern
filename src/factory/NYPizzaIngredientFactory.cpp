#include "factory/NYPizzaIngredientFactory.hpp"
#include "ingredient/ThinCrustDough.hpp"
#include "ingredient/MarinaraSauce.hpp"
#include "ingredient/ReggianoCheese.hpp"
#include "ingredient/SlicedPepperoni.hpp"
#include "ingredient/FreshClams.hpp"
#include "ingredient/Garlic.hpp"
#include "ingredient/Onion.hpp"
#include "ingredient/Mushroom.hpp"
#include "ingredient/RedPepper.hpp"


std::unique_ptr< Dough > NYPizzaIngredientFactory::createDough()
{
    return std::make_unique< ThinCrustDough >();
}

std::unique_ptr< Sauce > NYPizzaIngredientFactory::createSauce()
{
    return std::make_unique< MarinaraSauce >();
}

std::unique_ptr< Cheese > NYPizzaIngredientFactory::createCheese()
{
    return std::make_unique< ReggianoCheese >();
}

std::vector< Veggies > NYPizzaIngredientFactory::createVeggies()
{
    return std::vector< Veggies > {Garlic{}, Onion{}, Mushroom{}, RedPepper{}};
}

std::unique_ptr< Pepperoni > NYPizzaIngredientFactory::createPepperoni()
{
    return std::make_unique< SlicedPepperoni>();
}

std::unique_ptr< Clams > NYPizzaIngredientFactory::createClam()
{
    return std::make_unique< FreshClams >();   
}