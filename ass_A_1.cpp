#include <iostream>
using namespace std;
int main() {
  int a[10],i,n,count=0;
  cout<<"\n enter the size of arry";
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  int mid=0,low=0,high=n-1,temp;
 while(high>=low)
 {
    mid=(low+high)/2;
    if(a[mid]==0)
    {
        high=mid-1;
    }
    else if(a[mid]==1)
    {
        low=mid+1;
    }
    if(a[mid]==0 && a[mid-1]==1)
    {
        temp=mid;
    }
 }
  count=n-temp;
  cout<<"total no of zeros"<<count;
}
