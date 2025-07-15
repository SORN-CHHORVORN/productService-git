#include "ProductService.hpp"
#include <iomanip>
#include <iostream>

void ProductService::addProduct(const Product &product)
{
    products.push_back(product);
}

void ProductService::getAllProducts() const
{
    std::cout << std::left
              << std::setw(6) << "ID"
              << std::setw(25) << "Name"
              << std::setw(15) << "Price"
              << std::setw(10) << "Quantity" << std::endl;
    for (const auto& p : products)
    {
        std::cout << std::left
                  << std::setw(6) << p.getId()
                  << std::setw(25) << p.getName()
                  << std::setw(15) << p.getPrice()
                  << std::setw(10) << p.getQuantity() << std::endl;
    }
}
void ProductService::getProductById(int id) const
{
    std::cout << "========| Product details |==========" << std::endl;
    for (auto it = products.begin(); it != products.end(); it++)
    {
        if (it->getId() == id)
        {
            std::cout << "Product id: " << it->getId() << std::endl;
            std::cout << "Product name: " << it->getName() << std::endl;
            std::cout << "Product price: " << it->getPrice() << std::endl;
            std::cout << "Product qty: " << it->getQuantity() << std::endl;
        }
    }
}
void ProductService::deleteProductById(int id)
{
    for (auto it = products.begin(); it != products.end(); ++it)
    {
        if (it->getId() == id)
        {
            products.erase(it);
            break;
        }
    }
}
void ProductService::updateProductById(int id, const std::string &name, double price, int quantity){
    for (auto it = products.begin(); it != products.end(); ++it)
    {
        if (it->getId() == id)
        {
            it->setName(name);
            it->setPrice(price);
            it->setQuantity(quantity);
            break;
        }
    }
}
bool ProductService::existsById(int id)
{
    for (auto it = products.begin(); it != products.end(); ++it)
    {
      if (it->getId() == id)
      {
          return true;
          break;    
      }
    }
    return false;
}