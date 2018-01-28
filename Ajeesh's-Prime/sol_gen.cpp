#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001

vector<bool> boolSieve()
{
    vector<bool> sieve(MAX,true);
    sieve[0] = false;
    sieve[1] = false;

    for(int i = 2; i*i < MAX ; i++)
    {
        if(sieve[i])
        {
            for(int j = i*i; j < MAX ; j += i)
            {
                sieve[j] = false;
            }
        }
    }

    return sieve;
}

int main()
{
    vector<bool> sieve = boolSieve();
    int t;
    cin >> t;
    vector<int> outputs;
    while(t--)
    {
        string s;
        cin >> s;
        int count = 0;
        vector<bool> visited(MAX,0);
        for(int i = 0; i < s.size(); i++)
        {
            int num = 0;
            for(int j = 0; j <= 5 && i+j < s.size(); j++)
            {
                // if( i+j <= n)
                // {
                //     string sub = s.substr(i,j);
                //     int num = stoi(sub);
                //     if(sieve[num])
                //     {
                //         count++;
                //     }
                // }
                num = num * 10 + (s[i+j] - '0');
                if(sieve[num] == 1 && !visited[num])
                {
                    count++;
                    visited[num] = 1;
                }
            }
        }
        outputs.push_back(count);
    }
    for(int i = 0; i < outputs.size(); i++)
        cout<<outputs[i]<<endl;
    return 0;
}