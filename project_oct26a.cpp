#include<iostream>
using namespace std;
struct employee
{
	int eId;
	char favChar;
	float salary;
};
int main()
{
    struct employee harry;
    harry.eId=200;
    harry.favChar='c';
    harry.salary=3500.45f;
    cout<<"id of harry is "<<harry.eId;
    cout<<" whose fav character is "<<harry.favChar;
    cout<<" and his salary is "<<harry.salary;
}