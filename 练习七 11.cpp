#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string a;
		cin>>a;
		int num=0;
		for(int j=0;j<a.size();j++)
		{
			if(a[j]=='(')
			{
				num++;
				break;
			}
		}
		if(num==0)
		{
			int fenmu=0,fenzi=0;
			int temp=a.size()-2;
			fenmu=1;
			for(int j=0;j<temp;j++)
			{
				fenmu*=10;
			 } 
			 for(int j=2;j<a.size();j++)
			 {
			 	fenzi=fenzi*10+(a[j]-'0');
			 }
			 for(int j=2;j<=fenzi;j++)
			 {
			 	if(fenzi%j==0&&fenmu%j==0)
			 	{
			 		fenzi/=j;
					fenmu/=j;
					j=2;
				 }
			 }
			 cout<<fenzi<<"/"<<fenmu<<endl;
		}
		else
		{
			string temp1;
			string temp2;
			int num1=0;
			for(int j=2;j<a.find('(');j++)
			{
				num1=num1*10+(a[j]-'0');
			}
			int num2=0;
			for(int j=a.find('(')+1;j<a.find(')');j++)
			{
				num2=num2*10+(a[j]-'0');
			}
			int fenmu=0,fenzi=0;
			int temp3=a.find(')')-a.find('(')-1;
			fenmu=1;
			for(int j=0;j<temp3;j++)
			{
				fenmu*=10;
			}
			fenmu-=1;
			int temp4;
			temp4=a.find('(')-2;
			fenzi=num1*fenmu+num2;
			for(int j=0;j<temp4;j++)
			{
				fenmu*=10;
			}
			for(int j=2;j<=fenzi;j++)
			{
				if(fenmu%j==0&&fenzi%j==0)
				{
					fenzi/=j;fenmu/=j;
					j=2;
			    }
			}
			cout<<fenzi<<"/"<<fenmu<<endl;
		}
	}
}
