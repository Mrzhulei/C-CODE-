#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int num=0;
	for(int i=0;i<a.size();i++)
	{
		if(i==a.size()-1)
		{
			if(a[i]=='n'||a[i]=='a'||a[i]=='o'||a[i]=='u'||a[i]=='i'||a[i]=='e')
			{
				num++;
			}
			else
			{
				break;
		    }
		}
		else
		{
			if(a[i]!='n'&&a[i]!='a'&&a[i]!='o'&&a[i]!='u'&&a[i]!='i'&&a[i]!='e')
			{
				if(a[i+1]=='a'||a[i+1]=='o'||a[i+1]=='u'||a[i+1]=='i'||a[i+1]=='e')
				{
					num++;
				}
				else
				{
					break;
				}
			}
			else
			{
				num++;
			}
		}
	}
	if(num==a.size())
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
