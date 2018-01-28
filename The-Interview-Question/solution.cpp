#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int x[4] , y[4];
    int l1,b1,l2,b2;

    cin >> x[0] >> y[0]; 
    cin >> l1 >> b1; 
    cin >> x[2] >> y[2]; 
    cin >> l2 >> b2;
    x[1] = x[0] + l1;
    y[1] = y[0] + b1;
    x[3] = x[2] + l2;
    y[3] = y[2] + b2;

    if( ( (x[0] <= x[2] && x[2] <= x[1]) || (x[2] <= x[0] && x[0] <= x[3]) ) &&
    ( (y[0] <= y[2] && y[2] <= y[1]) || (y[2] <= y[0] && y[0] <= y[3]) ) )
    {
    sort(x,x+4);
    sort(y,y+4);
    int area = ( x[2] - x[1] ) * ( y[2] - y[1]);
    cout << area;
    }
    else
    cout << 0 ;
    return 0;
}