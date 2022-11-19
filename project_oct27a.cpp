#include<iostream>
using namespace std;
struct team
{
    char player_name[15];
    int  player_no;
    char player_type[15];
};
int main()
{
    team tm[11];
    int flag=0;
    int ch;
    do
    {
     cout<<"enter 1 to input players detail"<<endl;
        cout<<"enter 2 for print detail of 11 players"<<endl;   
    cout<<"enter 3 print detail of specific player"<<endl;
 cin>>ch;
 switch(ch)
{       
 case 1:   
    for(int i=0;i<11;i++)
    {
    cout<<"enter the details of player no."<<i+1<<endl;
        cout<<"enter player name"<<endl;
        cin>>(tm[i].player_name);
        cout<<"Enter shirt no."<<endl;
        cin>>(tm[i].player_no);
        cout<<"enter player type"<<endl;
        cin>>(tm[i].player_type);
                flag++;
                }
   case 2:         
        if(flag!=0)
        {
        for(int i=0;i<11;i++)
        {
        cout<<"\nplayer name: ";
        cin>>(tm[i].player_name);
        cout<<"\nshirt no. ";
        cin>>(tm[i].player_no);
        cout<<"\nplayer type: ";
        cin>>(tm[i].player_type); 
        }
    }
            else
            cout<<"no imput"<<endl;
            }
} while((ch<4)&&(ch>0)); 
}  
    
