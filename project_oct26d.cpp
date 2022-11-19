#include<iostream>
using namespace std;
struct Library
{
  char book_name[30];
  int book_Id;
  char book_Shelf[20];    
};
int main()
{
    Library lb1;
    char str[]="cleoptra";
    cout<<"enter the book name\n";
    gets(lb1.book_name);
    cout<<"enter book id\n";
    cin>>lb1.book_Id;
    cout<<"enter book shelf\n";
    gets(lb1.book_Shelf);
 if(strcmp(str,lb1.book_name)==0)
    {
      cout<<"file found";  
    }
   else 
    cout<<"not found";
}