#pragma once

#include "Product.hpp"
#include <vector>
class ProductService
{
private:
    std::vector<Product> products;

public:
    void addProduct(const Product &products);
    void getAllProducts() const;
    void getProductById(int id) const;
    bool existsById(int id);
    void deleteProductById(int id);
    void updateProductById(int id, const std::string &name, double price, int quantity);
};