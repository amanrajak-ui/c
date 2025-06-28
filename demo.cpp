#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>a{0,1,0,1,1,0,1,1};
  int start =0;
  

  int end=a.size()-1;
  int i;
  while(i!=end)
   {
     if(a[i]==0)
     {
        swap(a[start],a[i]);
        i++;
        start++;
     }
     else
     {
      swap(a[end],a[i]);
      end--;
     }
    }

  for(int i=0;i<a.size();i++)
  {
    cout<<a[i];
  }
    return 0;
}