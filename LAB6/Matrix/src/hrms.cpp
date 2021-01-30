#include <iostream>
#include "hrms.hpp"
#include <string>
#include <algorithm>

Hrms::Hrms() {};

void Hrms::add(Employee employee, std::string departmentid, double salary)
{
    Employees[employee.pobrac_id()] = employee;
    std::vector<std::string> &vectory = Departments[employee.pobrac_departmentid()];
    vectory.push_back(employee.pobrac_id());
    Salaries[employee.pobrac_id()] = salary;
}

void Hrms::changeSalary(std::string employeeid, double salary)
{
    Salaries[employeeid] = salary;
}

void Hrms::printDepartment(std::string departmentid)
{
    std::cout << "Lista:" << std::endl;
    for(auto &element: Departments[departmentid])
    {
        std::cout << element << std::endl;
    }
}

void Hrms::printSalaries() 
{
   
    std::cout << "Lista pracownikow:" << std::endl;
    
    for(auto &element :  Salaries) 
    {
        std::cout << "ID: " << element.first << std::endl;
        std::cout << "Name: " << Employees.at(element.first).pobrac_name() << std::endl;
        std::cout << "Surname: " << Employees.at(element.first).pobrac_surname() << std::endl;
        std::cout << "Department: " << Employees.at(element.first).pobrac_departmentid() << std::endl;
        std::cout << "Position: " << Employees.at(element.first).pobrac_position() << std::endl;
        std::cout << "Salary: " << element.second << std::endl << std::endl;
    }
}

void Hrms::printSalarySorted() {
    std::vector <std::pair <Employee, double>> sortowanie;
    for(auto &element : Employees) {
        sortowanie.push_back(std::make_pair(element.second,Salaries[element.second.pobrac_id()]));
    }

    std::sort(sortowanie.begin(), sortowanie.end(), [](std::pair <Employee, double>& a, std::pair <Employee, double>& b) {
        return (a.second > b.second);
    });

    
    std::cout << "Pracownicy po pensjach:" << std::endl;
   
    for(auto &element :sortowanie) {
        std::cout << "ID: " << element.first.pobrac_id() << std::endl;
        std::cout << "Name: " << element.first.pobrac_name() << std::endl;
        std::cout << "Surname: " << element.first.pobrac_surname() << std::endl;
        std::cout << "Department: " << element.first.pobrac_departmentid() << std::endl;
        std::cout << "Position: " << element.first.pobrac_position() << std::endl;
        std::cout << "Salary: " << element.second << std::endl << std::endl;
    }
}