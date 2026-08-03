#include<iostream>
using namespace std;
int main()
{
    int reynoldsnumber;
    cout<<"enter a reynoldsnumber";
    cin>> reynoldsnumber;
    if ( reynoldsnumber<2000)
    {
    	cout<<"the flow will be laminar flow";
    }
    else if (reynoldsnumber>=2000 && reynoldsnumber<=3000)
    {
    	cout<<"the flow will be transitional flow";
    }
    else if (reynoldsnumber >3000)
    {
     cout<<"the flow will be turbulent flow";	
    }
}
