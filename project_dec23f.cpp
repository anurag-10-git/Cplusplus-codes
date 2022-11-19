#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> str;
    str["anurag"]=23;
    str["nikhil"]=21;
    str["messi"]=34;
    map<string,int>::iterator itr;
    for(itr=str.begin();itr!=str.end();itr++)
    {
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
}
}
