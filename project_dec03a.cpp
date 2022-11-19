#include<iostream>
using namespace std;
class Student
{
    string name;
    int rollno;
    
    public:
    void init()
    {
      name="anurag";
        rollno=15;  
    }
    void display()
    {
     cout<<"name:"<<name<<endl;
        cout<<"roll no:"<<rollno<<endl;
    }
};
int main()
{
    class Student ob1;
    ob1.init();
    ob1.display();
}