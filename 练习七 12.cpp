#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string a;
	cin>>a;
	int all=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='@')
		{
			if(a.find('.',i)<a.size())
			{
				int num=0;
				int num1=0,num2=0;
				for(int j=i+1;j<a.find('.',i);j++)
				{
					if((a[j]>='0'&&a[j]<='9')||(a[j]>='a'&&a[j]<='z'))
					{
						num++;
					}
				}
				if(num==a.find('.',i)-i-1)
				{
					for(int j=a.find('.',i)+1;j<a.size();j++)
					{
						if(a[j]>='a'&&a[j]<='z')
						{
							num2++;
						}
						else
						{
							break;
						}
					}
					for(int j=i-1;j>=0;j--)
					{
						if(a[j]=='@'||a[j]=='.')
						{
							break;
						}
						else if(a[j]>='a'&&a[j]<='z')
						{
							num1++;
						}
					}
				}
				all+=num1*num2;
			}
		}
	 } 
	 cout<<all<<endl;
}
