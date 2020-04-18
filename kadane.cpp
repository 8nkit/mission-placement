#include<bits/stdc++.h>
using namespace std;
int maxf(int arr[],int n){
int maxsofar=INT_MIN;
int maxendhere=0;
for(int i=0;i<n;i++){
maxendhere+=arr[i];
if(maxsofar<maxendhere)
maxsofar=maxendhere;
if(maxendhere<0)
maxendhere=0;
}
return maxsofar;
}
main()
{
//KADANE ALGORITHM TO FIND MAX SUB ARRAY SUM
int arr[5]={2,3,5,-10,6};
cout<<maxf(arr,5);
return 0;
}
