#pragma once
#include <string>
class Employee
{
private:
    int id;
    std::string name;
    int age;
    double salary;

public:
    Employee();
    Employee(int id, const std::string &name, int age, double salary);

    // Destructor
    int getId() const;
    std::string getName() const;
    int getAge() const;
    double getSalary() const;
    
    // Setters
    void setName(const std::string &name);
    void setAge(int age);
    void setSalary(double salary);
};
