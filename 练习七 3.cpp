#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	for(int i=0;i<t;i++)
	{
		string a;
		getline(cin,a);
		int lw=0;
		int rw=0;
		for(int i=0;i<a.find('^');i++)
		{
			if(a[i]!='=')
			{
				lw+=(a[i]-48)*(a.find('^')-i);
			}
		}
		for(int i=a.find('^')+1;i<a.size();i++)
		{
			if(a[i]!='=')
			{
				rw+=(a[i]-48)*(i-a.find('^'));
			}
		}
		if(rw<lw)
		{
			cout<<"left"<<endl;
		}
		else if(rw>lw)
		{
			cout<<"right"<<endl;
		}
		else
		{
			cout<<"balance"<<endl;
		}
	}
}
