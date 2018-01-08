#include<iostream>
#include<string>
#include<map>
#include<utility>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<stdlib.h>

using namespace std;

int main ()
{
	int t;
	cin>>t;
	for(int o = 0; o < t; o++)
	{
		string s;
		cin>>s;
		cout<<endl;
		vector<int> variables;
		stack<int> st;
		char sign = '+';
		int i = 1;
		for(string::iterator it = s.begin(); it != s.end(); ++it)
		{
			if(*it == '+')
			{
				sign = '+';
			}
			else if (*it == '-')
			{
				sign = '-';
			}
			else if(*it == '(')
			{
				st.push(((sign == '+')?(i):(i*-1)));
				sign = '+';
			}
			else if (*it == ')')
			{
				if (st.top() < 0)
				{
					for(vector<int>::iterator it = variables.end() - 1; it != variables.begin() - 1; it--)
					{
						if(abs(*it) < (st.top() * -1))
							break;
						if(*it < i)
						{
							*it = (*it)*-1;
						}
					}
				}
				st.pop();
				sign = '+';
			}
			else
			{
				variables.push_back(((sign == '+')?(i):(i*-1)));
			}
			i++;
		} 
		string result;
		for(vector<int>::iterator it = variables.begin(); it != variables.end(); it++)
		{
			if((*it) < 0)
			{
				result += string(1, '-');
				result += string(1, s[abs(*it) - 1]);
			}
			else
			{
				result += string(1, '+');
				result += string(1, s[(*it) - 1]);
			}
		}
		cout<<result<<endl;
	}
	return 0;
}