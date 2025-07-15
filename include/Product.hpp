// if not define
// ifndef & define & endif can be used short cut #pragma once
#pragma once
#include <string>
class Product
{
private:
    int id;
    std::string name;
    double price;
    int quantity;

public:
    // Constructor
    Product();
    Product(int id, const std::string &name, double price, int quantity);

    // Destructor
    int getId() const;
    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;

    // Setters
    void setName(const std::string &name);
    void setPrice(double price);
    void setQuantity(int quantity);
};