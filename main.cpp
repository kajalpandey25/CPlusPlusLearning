#include <iostream>
#include <string>
using namespace std;

// f(x) = x^2 + 2
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " And his salary is " << this->salary << " Dollars " << endl;
    }

    void getsecretPassword()
    {
        cout << "The secret password of employee is " << this->secretPassword;
    }

private:
    int secretPassword;
};

class Programmer : public Employee
{
public:
    int errors;
};

int main()
{
    // Single line comments

    /* Double line comments*/
    // cout << "Hello World Kajal" << endl;
    // cout << "Next Line";
    //   return 0;

    // Data type
    // int a, b, c;

    // Variables
    // short _sa = 9;
    // cout <<_sa;

    // CamelCase Notation
    /* int marksInMaths= 83;
     cout<<"The marks of the students in maths is "<<marksInMaths;*/

    // short a;
    // int b;
    // long c;
    // long long d;
    // float score = 45.32;
    // cout<<"The score is "<<score;

    // int a, b;
    // cout << "Enter First Number" << endl;
    // cin >>a;

    // cout << "Enter Second Number" << endl;
    // cin >>b;

    // cout<<"a + b is "<<a + b<<endl;
    // cout<<"a - b is "<<a - b<<endl;
    // cout<<"a * b is "<<a * b<<endl;
    // cout<<"a / b is "<<(float) a / b<<endl;

    // If- else Condition

    // int age;
    // cout << "Enter your age " << endl;
    // cin >> age;

    // if (age > 150)
    // {
    //     cout << "Invalid age";
    // }
    // else if (age >= 18)
    // {
    //     cout << "You can vote";
    // }
    // else
    // {
    //     cout << "You Cannot vote";
    // }

    // Switch Statement

    // int age;
    // cout << "Enter your age " << endl;
    // cin >> age;
    // switch (age)
    // {
    // case 12:
    //     cout << "You are 12 years old";
    //     break;
    // case 18:
    //     cout << "You are 18 years old";
    //     break;

    // default:
    //     cout << "You are neither 12 nor 18 years old";
    //     break;
    // }

    // Loops
    // 1. While Loop
    // int index = 0;
    // while (index < 34)
    // {
    //     cout << "We are at index number " << index << endl;
    //     index = index + 1;
    // }

    // 2. Do-While Loop
    // int index = 0;
    // do
    // {
    //     cout << "We are at index number " << index << endl;
    //     index = index + 1;
    // } while (index < 33);

    // 3. For Loop
    //  for (int i = 0; i < 34; i++)
    //  {
    //      cout << "The value of i is " << i << endl;
    //  }

    // Functions

    // int a, b;
    // cout << "Enter First Number" << endl;
    // cin >> a;

    // cout << "Enter Second Number" << endl;
    // cin >> b;
    // cout << "The function returned " << add(a, b);

    // Arrays

    // int arr[3] = {1, 3, 4};
    // cout << arr[1];

    // int marks[6];
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Enter the marks of " << i << "th student" << endl;
    //     cin >> marks[i];
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Marks of " << i << "th student is " << marks[i] << endl;
    // }

    // 2-D Array

    // int arr2d[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "The value at " << i << " ," << j << " is " << arr2d[i][j]<<endl;
    //     }
    // }

    // Typecasting
    // int a = 343;
    // float b = 87.34;
    // cout << (float)a / 34<<endl;

    // cout << (int)b;

    // Strings

    // string name = "Kajal";
    // cout << "The name is " << name << endl;
    // cout << "The length of name is " << name.length() << endl;
    // cout << "The name is " << name.substr(0, 1) << endl;
    // cout << "The name is " << name.substr(2, 3) << endl;

    // Pointers
    // Pointers are a special data type that store the address of a variable.

    // int a = 34;
    // int *ptra; // ptr can point to an address which holds int data
    // ptra = &a;
    // cout << "The value of a is " << a << endl;
    // cout << "The value of a is " << *ptra << endl;
    // cout << "The address of a is " << &ptra << endl;
    // cout << "The value of a is " << ptra << endl;

    // Classes

    Employee har("kajal constructor", 344, 1000);
    // har.name = "kajal";
    // har.salary = 100;
    har.printDetails();
    har.getsecretPassword();
    // cout << har.secretPassword;
    // cout << "The name of our first employee is " << har.name << " And his salary is " << har.salary << " Dollars " << endl;
}
