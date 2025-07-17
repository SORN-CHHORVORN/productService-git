#include <iostream>
#include "Employee.hpp"
#include "EmployeeManagement.hpp"

using namespace std;

void Menu()
{
    cout << "========| Employee Management System |========" << endl;
    cout << "========| 1. AddEmployee             |========" << endl;
    cout << "========| 2. UpdateEmployeeById      |========" << endl;
    cout << "========| 3. DeleteEmployeeById      |========" << endl;
    cout << "========| 4. ListAllEmployee         |========" << endl;
    cout << "========| 5. GetEmployeeById         |========" << endl;
    cout << "========| 6. ExistsById              |========" << endl;
    cout << "========| 0. Exit                    |========" << endl;
    cout << "==============================================" << endl;
}

EmployeeManagement employeeManagement;

int main()
{
    system("cls");

    int op;
    do
    {
         Menu();
        cout << "Enter an option:  ";
        cin >> op;

        if (op == 0)
        {
            cout << "Exiting..." << endl;
            return 0;
        }

        switch (op)
        {
        case 1:
        {
            system("cls");
            int id, age;
            string name;
            double salary;
            cout << "Please input Id: ";
            cin >> id;
            if (employeeManagement.existsById(id))
            {
                cout << "Employee with id: " << id << " already exists" << endl;
                break;
            }
            cout << "Please input Name: ";
            cin >> name;
            cout << "Please input Age: ";
            cin >> age;
            cout << "Please input Salary: ";
            cin >> salary;

            Employee emp(id, name, age, salary);
            employeeManagement.addEmployee(emp);
            break;
        }
        case 2:
        {
            system("cls");
            int id;
            cout << "Please input employee id to update:";
            cin >> id;
            if (!employeeManagement.existsById(id))
            {
                cout << "Employee with id: " << id << " does not exist" << endl;
                break;
            }
            string name;
            int age;
            double salary;
            cout << "Please input new Name: ";
            cin >> name;
            cout << "Please input new Age: ";
            cin >> age;
            cout << "Please input new Salary: ";
            cin >> salary;
            employeeManagement.updateEmployeeById(id, name, age, salary);
            break;
        }
        case 3:
        {
            system("cls");
            int id;
            cout << "Please input employee id to delete:";
            cin >> id;
            if (!employeeManagement.existsById(id))
            {
                cout << "Employee with id: " << id << " does not exist" << endl;
                break;
            }
            employeeManagement.deleteEmployeeById(id);
            break;
        }
        case 4:
        {
            system("cls");
            employeeManagement.listAllEmployees();
            break;
        }
        case 5:
        {
            system("cls");
            int id;
            cout << "Please input id: ";
            cin >> id;
            employeeManagement.getEmployeeById(id);
            break;
        }
        case 6:
        {
            system("cls");
            int id;
            cout << "Please input id: ";
            cin >> id;
            if (employeeManagement.existsById(id))
            {
                cout << "Employee with id: " << id << " exists" << endl;
            }
            else
            {
                cout << "Employee with id: " << id << " does not exist" << endl;
            }
            break;
        }
        default:
            cout << "Invalid option!" << endl;
        }

    } while (op != 0);
    return 0;
}
