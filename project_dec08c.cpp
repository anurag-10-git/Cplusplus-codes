#include<iostream>
using namespace std;
class catfamily
{
    public:
    string category;
    int legs;
    int age;
    catfamily(string t,int l,int ag)
    {
      category=t;
      legs=l;
      age=ag;
    }
    ~catfamily()
    {
        cout<<"destructor called"<<endl;
    }
    void foodhabit();
    void placeofstay();
};

class panther:private catfamily
{
  void sex_species()
    {
        if(strcmp(category,"WHITE PANTHER")==0)
        {
            cout<<"endangered species"<<endl;
        }
    }  
};