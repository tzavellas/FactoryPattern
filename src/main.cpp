#include "store/NYPizzaStore.hpp"
#include "store/ChicagoPizzaStore.hpp"
#include <iostream>

int main(int, char**) {
    std::unique_ptr< PizzaStore > someStore = std::make_unique< NYPizzaStore >();
    std::unique_ptr< Pizza > veggieNY = someStore->orderPizza("veggie");
    std::cout << veggieNY->toString() << std::endl;

    std::unique_ptr< PizzaStore > anotherStore = std::make_unique< ChicagoPizzaStore >();
    std::unique_ptr< Pizza > veggieCh = anotherStore->orderPizza("veggie");
    std::cout << veggieCh->toString() << std::endl;
    return 0;
}
