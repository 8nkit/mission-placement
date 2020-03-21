//Program Leap Year
#include<bits/stdc++.h>
using namespace std;
main(){
int a;
cin>>a;
if(a%400==0)
cout<<"LEAP YEAR";
if(a%100==0)
    cout<<"NOT A LEAP YEAR";
if(a%4==0)
    cout<<"LEAP YEAR";

return 0;
}
