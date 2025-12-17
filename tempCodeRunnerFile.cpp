#include <iostream>
using namespace std;

// Base Class
class Person
{
protected:
    string name, id, department;
    string company;  

public:
    virtual void get_data()
    {
        cin.ignore();
        cout << "Enter Company Name: ";
        getline(cin, company);

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Employee ID: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Department: ";
        getline(cin, department);
    }

    virtual void display()
    {
        cout << "Company Name    : " << company << endl;
        cout << "Name            : " << name << endl;
        cout << "Employee ID     : " << id << endl;
        cout << "Department      : " << department << endl << endl;
    }

    virtual ~Person() {}
};

// Employee Class 
class Employee : public Person
{
protected:
    float basic = 30000;          
    float hra = 0.2 * basic;     
    float pf = 0.12 * basic;     
    float da = 5000;              
    float otherallow = 2000;      
    float otherded = 1000;        
    float gross, totalded, net, tax;

public:
    virtual void calculate_salary()
    {
        gross = basic + hra + da + otherallow;
        tax = 0.1 * gross;
        totalded = pf + otherded + tax;
        net = gross - totalded;
    }

    void get_data() override
    {
        Person::get_data();
        calculate_salary();
    }

    void display() override
    {
        Person::display();
        cout<<"S.NO      Salary Head                 Amount(₹)\n\n";
        cout<<"1.       Basic Salary              : " << basic << endl;
        cout<<"2.       HRA                       : " << hra << endl;
        cout<<"3.       DA                        : " << da << endl;
        cout<<"4.       Other Allowance           : " << otherallow << endl;
        cout<<"5.       PF                        : " << pf << endl;
        cout<<"6.       Other Deduction           : " << otherded << endl;
        cout<<"7.       Gross Salary              : " << gross << endl;
        cout<<"8.       Tax                       : " << tax << endl;
        cout<<"9.       Net Salary                : " << net << endl;
    }
};

// Manager Class
class Manager : public Employee
{
private:
    string grade;

public:
    void calculate_salary() override
    {
        int emp_id = stoi(id);

        if(emp_id >= 1 && emp_id <= 30)
            grade = "A";
        else if(emp_id <= 60)
            grade = "B";
        else
            grade = "C";

        if(grade == "A") basic = 50000;
        else if(grade == "B") basic = 40000;
        else basic = 35000;

        hra = 0.2 * basic;
        pf = 0.12 * basic;
        da = 7000;
        otherallow = 3000;
        otherded = 1500;

        gross = basic + hra + da + otherallow;
        tax = 0.15 * gross;
        totalded = pf + otherded + tax;
        net = gross - totalded;
    }

    void get_data() override
    {
        Person::get_data();
        calculate_salary();
    }

    void display() override
    {
        cout << "\n--- Manager Salary Slip ---\n";
        Person::display();
        cout<<"Grade            : " << grade << endl;
        cout<<"Basic Salary     : " << basic << endl;
        cout<<"Net Salary       : " << net << endl;
    }
};

int main()
{
    Person *p;
    Employee e;
    Manager m;
    int choice;

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Enter Employee Details\n";
        cout << "2. Display Employee Salary\n";
        cout << "3. Enter Manager Details\n";
        cout << "4. Display Manager Salary\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: p = &e; 
            p->get_data(); 
            break;
            case 2: p = &e; 
            p->display(); 
            break;
            case 3: p = &m; 
            p->get_data(); 
            break;
            case 4: p = &m; 
            p->display(); 
            break;
            case 5:
            cout << "Exiting...\n"; 
            break;
            default: 
            cout << "Invalid Choice!\n";
        }
    } while(choice != 5);

    return 0;
}