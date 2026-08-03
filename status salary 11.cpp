#include<iostream>
using namespace std;
int main()
{
    char status;
    int salary;
    cout<<"enter a status of senior saleperson 's' and any other for junior sale person";
    cin>>status;
    if (status=='s')
    {
    	cout<<"the senior saleperson will be displayed $800 ";
    }
     else
     {
     	cout<<"the junior saleperson will be displayed $500";
     }	    	
}
