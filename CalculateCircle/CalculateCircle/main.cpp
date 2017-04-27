#include "iostream"
#include "Cal.h"
using namespace  std;
int main()
{
	double r,s;
	cout<<"Please enter the radius of the circle:"<<endl;
	cin>>r;
	while (r<0)
	{
		cout<<"Your inout is wrong,the radius can not be nagative"<<endl;
		cout<<"Please enter the radius of the circle:"<<endl;
		cin>>r;
	}
	s = calculate(r);
	cout<<"The area of the circle is:"<<s<<endl;
	return 0;
}