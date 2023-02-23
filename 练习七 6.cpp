#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	for(int i=1;i<=s.size();i++)
	{
		if(s.size()%i==0)
		{
			int p=0;
			int q=i-1;
			while(p<q)
			{
				char temp=s[p];
				s[p]=s[q];
				s[q]=temp;
				p++;
				q--;
			}
		}
	}
	cout<<s<<endl;
	
}
