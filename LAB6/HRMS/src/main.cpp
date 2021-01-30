#include <iostream>
#include "employee.hpp"
#include "hrms.hpp"

int main(int argc, char *argv[])
{
    Employee employee1("900", "Krzysztof", "Nutek", "A", "Programista");
    Employee employee2("901", "Jaroslaw", "Bratek", "B", "Programista");
    Employee employee3("903", "Jaroslaw", "Bratek", "C", "Programista");
    Employee employee4("904", "Jaroslaw", "Bratek", "C", "Programista");
    Employee employee5("905", "Jaroslaw", "Bratek", "A", "Informatyk");
    Employee employee6("906", "Jaroslaw", "Bratek", "B", "Informatyk");
    Employee employee7("907", "Jaroslaw", "Bratek", "C", "Informatyk");
    Employee employee8("908", "Jaroslaw", "Bratek", "A", "Sprzatacz");
    Employee employee9("909", "Jaroslaw", "Bazant", "C", "Sprzatacz");
    Employee employee10("910", "Jaroslaw", "Wiewiorka", "A", "Programista");


Hrms obj;

obj.add(employee1,"A", 3000);
obj.add(employee2,"B", 4000);
obj.add(employee3,"C", 5000);
obj.add(employee4,"C", 1000);
obj.add(employee5,"A", 2000);
obj.add(employee6,"B", 3000);
obj.add(employee7,"C", 3000);
obj.add(employee8,"A", 4000);
obj.add(employee9,"C", 10000);
obj.add(employee10,"A", 9000);



obj.printSalaries();
std::cout << std::endl;

obj.printSalarySorted();
std::cout << std::endl;

obj.printDepartment("B");
std::cout << std::endl;

return 0;
}