#include "factory/ChicagoPizzaIngredientFactory.hpp"
#include "ingredient/ThinCrustDough.hpp"
#include "ingredient/PlumTomatoSauce.hpp"
#include "ingredient/MozzarellaCheese.hpp"
#include "ingredient/SlicedPepperoni.hpp"
#include "ingredient/FrozenClam.hpp"
#include "ingredient/BlackOlives.hpp"
#include "ingredient/Spinach.hpp"
#include "ingredient/EggPlant.hpp"

std::unique_ptr< Dough > ChicagoPizzaIngredientFactory::createDough()
{
    return std::make_unique< ThinCrustDough >();
}

std::unique_ptr< Sauce > ChicagoPizzaIngredientFactory::createSauce()
{
    return std::make_unique< PlumTomatoSauce >();
}

std::unique_ptr< Cheese > ChicagoPizzaIngredientFactory::createCheese()
{
    return std::make_unique< MozzarellaCheese >();
}

std::vector< Veggies > ChicagoPizzaIngredientFactory::createVeggies()
{
    return std::vector< Veggies > {BlackOlives{}, Spinach{}, EggPlant{}};
}

std::unique_ptr< Pepperoni > ChicagoPizzaIngredientFactory::createPepperoni()
{
    return std::make_unique< SlicedPepperoni >();
}

std::unique_ptr< Clams > ChicagoPizzaIngredientFactory::createClam()
{
    return std::make_unique< FrozenClam >();   
}