#include <iostream>
using namespace std;
int main()
{
    int l,b,pl=0,pb=0;
cout<<"Enter Length of Square : ";
cin>>l;

cout<<"Enter Breadth of Square : ";
cin>>b;
cout<<endl;
while (pb<b)
{
    while(pl<l){
        
        cout<<" * ";
        pl++;
        }
    pl=0;
    cout<<endl;
    pb++;


}


return 0;
}