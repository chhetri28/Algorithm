#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[3],b[3],count=0,count1=0;
  for(int i=0;i<3;i++){ cin>>a[i];count=0;}
  for(int i=0;i<3;i++){ cin>>b[i];count1=0;}
    for(int i=0;i<3;i++)
    {
    	if(a[i]>b[i]){count++;}
        else if(a[i]<b[i]){count1++;}
	}
	cout<<count;
	cout<<setw(2)<<count1;
}