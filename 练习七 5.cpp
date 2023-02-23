#include<iostream>
using namespace std;
int main()
{
	string s;
	string t;
	cin>>s>>t;
	int all=0;
	while(1)
	{
		if(s.size()==0&&t.size()==0)
		{
			break;
		}
		else if(s.size()>=t.size())
		{
			s.erase(0,1);
			all++;
			if(s.compare(t)==0)
			{
				break;
			}
		}
		else
		{
			t.erase(0,1);
			all++;
			if(s.compare(t)==0)
			{
				break;
			}
		}
	 } 
	 cout<<all<<endl;
 } 
