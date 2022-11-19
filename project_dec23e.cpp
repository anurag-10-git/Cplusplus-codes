#include<bits/stdc++.h>
using namespace std;
void display(list<int> lst)
{
   
    
     list<int>::iterator it;
        for(it=lst.begin();it!=lst.end();it++)
        {
         cout<<*it<<" ";
         }
    cout<<endl;
}

int main()
{
    list<int> list1;
    list1.push_back(10);
    list1.push_back(2);
    list1.push_back(6);
    list1.push_back(70);
   /* list<int>::iterator itr;
    itr=list1.begin();
    cout<<*itr<<endl;
    itr++;
    cout<<*itr<<endl;
    itr++;
    cout<<*itr<<endl;
    itr++;
    cout<<*itr<<endl;
    itr++;*/
    display(list1);
    list1.pop_front();
    display(list1);
    list1.remove(6);
    display(list1);
    list<int> list2(2);
    list<int>::iterator itr;
    itr=list2.begin();
    *itr=4;
    itr++;
    *itr=6;
    itr++;
    display(list2);
    list1.merge(list2);
    display(list1);
}