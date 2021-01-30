#include <iostream>
#include "employee.hpp"

Employee::Employee(std::string _id, std::string _name, std::string _surname, std::string _departmentid, std::string _position)
{
    id = _id;
    name = _name;
    surname = _surname;
    departmentid = _departmentid;
    position = _position;

}

Employee::Employee()
{
    
}

std::string Employee::pobrac_id()
{
    return this->id;
}

std::string Employee::pobrac_name()
{
    return this->name;
}

std::string Employee::pobrac_surname()
{
    return this->surname;
}

std::string Employee::pobrac_departmentid()
{
    return this->departmentid;
}

std::string Employee::pobrac_position()
{
    return this-> position;
}
