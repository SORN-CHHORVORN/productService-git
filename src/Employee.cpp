#include "Employee.hpp"

Employee::Employee(){}
Employee::Employee(int id, const std::string &name, int age, double salary)
    : id(id), name(name), age(age), salary(salary) {}

int Employee::getId() const
{
    return id;
}
std::string Employee::getName() const
{
    return name;
}
int Employee::getAge() const
{
    return age;
}
double Employee::getSalary() const
{
    return salary;
}

void Employee::setName(const std::string &name)
{
    this->name = name;
}
void Employee::setAge(int age)
{
    this->age = age;
}
void Employee::setSalary(double salary)
{
    this->salary = salary;
}