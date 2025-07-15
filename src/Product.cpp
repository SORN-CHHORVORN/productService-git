#include "Product.hpp"

Product::Product() {}
Product::Product(int id, const std::string &name, double price, int quantity)
    : id(id), name(name), price(price), quantity(quantity) {}

int Product::getId() const
{
    return id;
}
std::string Product::getName() const
{
    return name;
}
double Product::getPrice() const
{
    return price;
}
int Product::getQuantity() const
{
    return quantity;
}

void Product::setName(const std::string &name)
{
    this->name = name;
}
void Product::setPrice(double price)
{
    this->price = price;
}
void Product::setQuantity(int quantity)
{
    this->quantity = quantity;
}