#pragma once
#include <iostream>


class Employee 
{
    private:
        std::string id;
        std::string name;
        std::string surname;
        std::string departmentid;
        std::string position;

    public:
        Employee(std::string id, std::string name, std::string surname, std::string departmentid, std::string position);
        Employee();

        std::string pobrac_id();
        std::string pobrac_name();
        std::string pobrac_surname();
        std::string pobrac_departmentid();
        std::string pobrac_position();
};