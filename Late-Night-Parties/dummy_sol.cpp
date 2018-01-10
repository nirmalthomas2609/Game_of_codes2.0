#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node{
int fun,spend;
}zero;

node maxFun(int* fee, int* fun , int n , int budget){
if(n == 0 || budget == 0)
return zero;
node ans1 = maxFun(fee+1,fun+1,n-1,budget);
if(budget >= fee[0]){
node ans2 = maxFun(fee+1,fun+1,n-1,budget-fee[0]);
ans2.fun += fun[0];
ans2.spend += fee[0];

if(ans2.fun > ans1.fun)
return ans2;

if(ans2.fun == ans1.fun)
if(ans2.spend < ans1.spend)
return ans2;
}
return ans1;
}




int main() {
int t; 
cin >> t;
while(t--){
int b,n;
cin >> b >> n;
zero.fun = 0;
zero.spend = 0;
int * fee = new int[n];
int * fun = new int[n];
for(int i = 0 ; i<n ; i++)
cin >> fee[i] >> fun[i];
node result = maxFun(fee,fun,n,b);
cout << result.spend <<" "<< result.fun << endl;
}
return 0;
}