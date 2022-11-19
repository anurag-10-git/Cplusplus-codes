#include<iostream>
#include<vector>
using namespace std;
template<class X>
void display(vector<X> obj)
{
  for(int i=0;i<obj.size();i++)  
    {
     cout<<obj[i]<<" ";
    }
    cout<<endl;
}
int main()
{
  vector<int> vc1;
    int element;
    cout<<"enter the number array"<<endl;
    for(int i=0;i<5;i++) 
    {
        cin>>element;
        vc1.push_back(element);
    }
    vc1.pop_back();
    cout<<"the numbers are"<<endl;
    display(vc1);
    vector<int>::iterator itr=vc1.begin();
    vc1.insert(itr+1,5,1999);
    display(vc1);
    cout<<vc1.at(3);
    
    vector<char> vc2(4);
    vc2[0]='a';
    vc2[1]='b';
    vc2[2]='c';
    vc2[3]='d';
    vc2.push_back('e');
    cout<<"\ndisplaying charcters"<<endl;
    display(vc2);
    vector<char> vc3(vc2);
    display(vc3);
    vector<int> vc4(4,14);
    display(vc4);
}