#include<iostream>
using namespace std;
class ArrayList
{
    struct Controlblock
    {
       int capacity;
       int* arr_ptr; 
    };
    Controlblock* s;
    
    public:
    ArrayList(int capacity)
    {
      s=new Controlblock;
     s->capacity=capacity;
     s->arr_ptr=new int
        
    }
};