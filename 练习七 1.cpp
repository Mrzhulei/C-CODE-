#include<iostream>
using namespace std;
#include<string>
int main()
{
	int t;
	cin>>t;
    char ch='A';
    char a[26];
	for(int i=0;i<26;i++)
	{
			a[i]=ch+i;
	}
	for(int i=0;i<t;i++)
	{
		string word;
		cin.ignore();
		getline(cin,word);
		for(int i=0;i<word.size();i++)
		{
			if(word[i]<=122&&word[i]>=97)
			{
				word[i]-=32;
			}
		}
		int b[26];
		for(int i=0;i<26;i++)
		{
			b[i]=0; 
		}
		for(int i=0;i<word.size();i++)
		{
			for(int j=0;j<26;j++)
			{
				if(word[i]==a[j])
				{
					b[j]++;
					break;
				}
			}
		}
		int num=0;
		for(int i=0;i<26;i++)
		{
			if(b[i]!=0)
			{
				num++;
			}
			else
			{
				break;
			}
		}
		if(num==26)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<" ";
			for(int i=0;i<26;i++)
			{
				if(b[i]==0)
				{
					cout<<a[i]<<" ";
				}
			}
			cout<<endl;
		}
	}
}
