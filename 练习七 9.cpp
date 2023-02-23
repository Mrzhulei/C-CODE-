#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	string b="WUB";
	if(a.find(b,0)==0)
	{
		a.erase(0,3);
	}
	if(a.rfind(b)==a.size()-3)
	{
		a.erase(a.size()-3,3);
	}
	while(a.find(b)!=-1)
	{
		a.replace(a.find(b),3," ");
	}
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==' ')
		{
			while(1)
			{
				if(a[i+1]==' ')
				{
					a.erase(i+1,1);
				}
				else
				{
					break;
				}
			}
		}
	 } 
	cout<<a<<endl;
}
