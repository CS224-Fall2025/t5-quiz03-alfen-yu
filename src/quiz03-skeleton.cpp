#include <iostream>
#include <string> 

class Employee {
    protected: 
        std::string name; // employee's name 
        double salary; // employee's salary  
    private: 
        static int employeeCount; // total no of employees
    public:
        Employee(std::string n, double s) 
            : name(n), salary(s) {} // constructor
        virtual void displayInfo() = 0; // show the salary and name 
        static void showTotalEmployees(); // no of employees getter
        virtual ~Employee(); 
};

class Staff : public Employee {
    private:
        std::string department; // dept of the employee
    public: 
        void displayInfo() {
            // pass 
        }
        
};

class Faculty : public Employee {
    private:
        std::string department; // dept of the faculty
    public: 
        void displayInfo() {
            // pass 
        }
        
};

int main() {

}