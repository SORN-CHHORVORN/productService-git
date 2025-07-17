#pragma once

#include "Employee.hpp"
#include <vector>
class EmployeeManagement
{
private:
    std::vector<Employee> employees;

public:
    void addEmployee(const Employee &employees) ;
    void updateEmployeeById(int id, const std::string &name, int age, double salary) ;
    void deleteEmployeeById(int id) ;
    void listAllEmployees() const;
    void getEmployeeById(int id) const;
    bool existsById(int id);
};