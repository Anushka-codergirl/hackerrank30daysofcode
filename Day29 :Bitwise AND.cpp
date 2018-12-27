#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
  int T,N,K,i,j,value;
  cin>>T;

  while(T>0)
  {
    int maximum = 0;
    cin>>N>>K;

    for(i=1;i<N-1;i++)
    {
      for(j=i+1;j<=N;j++)
      {
        value = i&j;
        
        if(value>maximum && value<K)
        maximum = value;
      }
    }
    cout<<maximum<<endl;
    T--;
  }
  return 0;
}
