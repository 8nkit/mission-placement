//Program to swap numbers
#include<bits/stdc++.h>
using namespace std;
main(){
int a,b;
a=10;
b=20;
a^=b;
b^=a;
a^=b;
cout<<a<<" "<<b;
return 0;
}
