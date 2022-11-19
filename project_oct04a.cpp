#include<iostream>
using namespace std;
struct employee
{
int eID;
char favChar;
double salary;        
    };
int main()
{
    struct employee harry;
    harry.eID=190;
    harry.favChar='h';
    harry.salary=50000;
    cout<<harry.eID<<endl;
    cout<<harry.favChar<<endl;
    cout<<harry.salary<<endl;
    
 
}