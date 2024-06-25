#include<iostream>
#include<conio.h>
#include<chrono>
#include<ctime>
using namespace std;

class Employee {
private:
    char* emp_name;
    int emp_join_year;
    float emp_salary;

public:
    Employee(char* name, int year, float salary);
    int workedYear(void);
    void Printinfo(void);
};

Employee::Employee(char* name, int year, float salary) {
    emp_name = name;
    emp_join_year = year;
    emp_salary = salary;
    Printinfo();
}

int Employee::workedYear(void) {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::tm * ptm = std::localtime(&now_c);
    int current_year = ptm->tm_year + 1900;
    int yearDifference = current_year - emp_join_year;
    return yearDifference;
}

void Employee::Printinfo(void) {
    cout << "Name: " << emp_name << "\n";
    cout << "Join Year: " << emp_join_year << "\n";
    cout << "Salary: " << emp_salary << "\n";
    cout << "Worked: " << workedYear() << " years\n\n";
}

int main(void) {
    // Clearing the screen
    cout << string(50, '\n'); // Print 50 newlines to clear the screen

    Employee RAM("Ram", 1997, 12000);
    Employee SUM("Sum", 1999, 15000);
    Employee JODU("Jodu", 2000, 120000);
    Employee MODHU("Modhu", 2100, 1200000);
    getch();
    return 0;
}
