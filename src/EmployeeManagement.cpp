#include "EmployeeManagement.hpp"
#include <iomanip>
#include <iostream>

void EmployeeManagement::addEmployee(const Employee &employee)
{
    employees.push_back(employee);
}
void EmployeeManagement::updateEmployeeById(int id, const std::string& name, int age, double salary){
    for (auto it = employees.begin(); it != employees.end(); ++it)
    {
        if (it->getId() == id)
        {
            it->setName(name);
            it->setAge(age);
            it->setSalary(salary);
            break;
        }
    }
}
void EmployeeManagement::deleteEmployeeById(int id)
{
    for (auto it = employees.begin(); it != employees.end(); ++it)
    {
        if (it->getId() == id)
        {
            employees.erase(it);
            break;
        }
    }
}
void EmployeeManagement::listAllEmployees() const
{
    std::cout << std::left
              << std::setw(6) << "ID"
              << std::setw(25) << "Name"
              << std::setw(15) << "Age"
              << std::setw(10) << "Salary" << std::endl;
    for (const auto& emp : employees)
    {
        std::cout << std::left
                  << std::setw(6) << emp.getId()
                  << std::setw(25) << emp.getName()
                  << std::setw(15) << emp.getAge()
                  << std::setw(10) << emp.getSalary() << std::endl;
    }
}
void EmployeeManagement::getEmployeeById(int id) const
{
    std::cout << "========| Employee details |==========" << std::endl;
    for (auto it = employees.begin(); it != employees.end(); it++)
    {
        if (it->getId() == id)
        {
            std::cout << "Employee Id: " << it->getId() << std::endl;
            std::cout << "Employee Name: " << it->getName() << std::endl;
            std::cout << "Employee Age: " << it->getAge() << std::endl;
            std::cout << "Employee Salary: " << it->getSalary() << std::endl;
        }
    }
}

bool EmployeeManagement::existsById(int id)
{
    for (auto it = employees.begin(); it != employees.end(); ++it)
    {
      if (it->getId() == id)
      {
          return true;
          break;    
      }
    }
    return false;
}