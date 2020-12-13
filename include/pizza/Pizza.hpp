#ifndef PIZZA_HPP
#define PIZZA_HPP

#include "ingredient/Dough.hpp"
#include "ingredient/Cheese.hpp"
#include "ingredient/Clams.hpp"
#include "ingredient/Pepperoni.hpp"
#include "ingredient/Sauce.hpp"
#include "ingredient/Veggies.hpp"
#include <memory>
#include <string>
#include <vector>

class Pizza
{
public:
    virtual ~Pizza() = default;
    virtual void prepare() = 0;
    void bake();
    void cut();
    void box();
    void setName(const std::string& name);
    std::string getName() const;
    std::string toString() const;

protected:
    Pizza() = default;
    std::string veggiesToString() const;

    std::string m_Name;
    std::unique_ptr< Dough > m_Dough;
    std::unique_ptr< Cheese > m_Cheese;
    std::unique_ptr< Clams > m_Clam;
    std::unique_ptr< Pepperoni > m_Pepperoni;
    std::unique_ptr< Sauce > m_Sauce;
    std::vector< Veggies > m_Veggies;
};

#endif // PIZZA_HPP