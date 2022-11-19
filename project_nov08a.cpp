#include<iostream>
using namespace std;
class employee
{
    public:
    string name;
    string company;
    int age;
    
    void print_detail()
    {
        cout<<"name- "<<name<<endl;
        cout<<"company- "<<company<<endl;
        cout<<"age- "<<age<<endl;
    }
    employee(string Name,string
         Company,int Age)
    {
        name=Name;
        company=Company;
        age=Age;
    }
    
};

int main()
{
    employee emp1=employee("anurag","AM10",25);
    //emp1.name="Anurag";
    //emp1.company="AM10";
    //emp1.age=24;
    emp1.print_detail();
    
    employee emp2=employee("Nikhil","NK",24);
    //emp2.name="Nikhil";
    //emp2.company="NK";
    //emp2.age=24;
    emp2.print_detail();
    
    
 }
