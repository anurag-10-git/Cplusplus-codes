#include<iostream>
using namespace std;
struct person
{
    char Name[15];
    int age;
};
struct date
{
    int day;
    int month;
    int year;
};
struct ticket
{
   char PNR[15];
   date DOT;
   person Passenger;
   char from[20];
   char to[20];
   int  traversed;
};