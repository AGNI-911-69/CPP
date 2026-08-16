#include <iostream>
#include <string>
using namespace std;
class employee
{
    public:
    string department;
    string name;
    int salary;
};
int main ()
{
   employee e;
   cout<<"enter department name: ";
   cin>>e.department;

   cout<<"enter name: ";
   cin>>e.name;

   cout<<"enter salary: ";
   cin>>e.salary;

   cout<<"\n--Employee Details--\n"<<endl;
   cout<<"Department: "<<e.department<<endl;
   cout<<"Name: "<<e.name<<endl;
   cout<<"Salary: "<<e.salary<<endl;

   return 0;
}