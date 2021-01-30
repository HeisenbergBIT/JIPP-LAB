#include <iostream>
#include <vector>
#include <map>
#include "employee.hpp"


class Hrms
{
    private:
        std::map <std::string, class Employee> Employees;
        std::map <std::string, std::vector<std::string>> Departments;
        std::map <std::string, double> Salaries;

    public:
        Hrms();
        void add(Employee employee, std::string departmentid, double salary);
        void changeSalary(std::string employeeid, double salary);
        void printDepartment(std::string departmentid);
        void printSalaries();
        void printSalarySorted();
};