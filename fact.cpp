#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

int fehrest;
cout<<"adad ra vared konid:"<<endl;
cin>>fehrest;
int fact=1;
while(fehrest>0)
{

fact=fact*fehrest;
fehrest--;

}
cout<<"the factorial of yor number is:"<<fact;
return 0;	
	
}
