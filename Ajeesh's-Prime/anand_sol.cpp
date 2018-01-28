#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

int main()
{
    ifstream input;
    input.open("input105.txt");
    int t;
    input >> t;
    string s;
    bool sieve[MAX];
    bool visited[MAX];
    makeSieve(sieve);
    int count , num;
    while(input >> s)
    {
        clear(visited);
        count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            num = 0;
            for(int j = 0; j < 5 && i+j < s.size(); j++){
                num = (num * 10) + (s[i+j] - '0');
                if(sieve[num] && !visited[num]){
                    count++;
                    visited[num] = 1;
                }
            }
    }
    cout << count << endl;
    }
    input.close();

    return 0;
}