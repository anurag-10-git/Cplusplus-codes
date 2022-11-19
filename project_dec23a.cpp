#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a)
{
    for(int i=0;i<a.size();i++)
    {
     cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> obj;
    int element;
    cout<<"enter the elements of vector"<<endl;
    for(int i=0;i<5;i++)
    {
     cin>>element;
       obj.push_back(element);
    }
    display(obj);
   
}