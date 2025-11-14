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

        // show the salary and name 
        virtual void displayInfo(); 

        // no of employees getter
        static void showTotalEmployees(){
            std::cout << "Total Employees: " << employeeCount << std::endl; 
        }

        virtual ~Employee(); 
};



class Staff : public Employee {
    private:
        std::string department; // dept of the employee
    public: 
        void displayInfo() {
            std::cout << "Name: " <<  name <<  " (Faculty) " << " Salary: " << salary;
        }
        
};

class Faculty : public Employee {
    private:
        std::string department; // dept of the faculty
    public:
        // Faculty() {} 
        void displayInfo() {
            std::cout << "Name: " <<  name <<  " (Staff) " << " Salary: " << salary;
        }
        
};

int main() {
    int n; // no of employees 

    std::cout << ">>> "; 
    std::cin >> n;

    Employee *arr[n];

    for (int i = 0; i < n; i++) {
        std::string n = ""; 
        std::string dep = ""; 
        int num = 0; 
        std::cout << ">>> "; 
        std::cin >> n >> dep >> n; 
        if (n == "Staff") {
            arr[i] = new Staff(n, numm dep); 
        } else if (n == "Faculty") {
            arr[i] = new Faculty(n, num, dept);
        }
    }
}