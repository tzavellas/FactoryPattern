#include "store/PizzaStore.hpp"
#include "pizza/Pizza.hpp"

std::unique_ptr< Pizza > PizzaStore::orderPizza(const std::string& type) const
{
    auto pizza = createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}