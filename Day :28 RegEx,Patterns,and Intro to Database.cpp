#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N ,i ;
  cin>>N;

  regex exp(".+@gmail\\.com$");

  vector<string>strarray;

  for(i=0;i<N;i++)
  {
    string fName;
    string EmailId;
    cin>>fName>>EmailId;
    if(regex_match(EmailId,exp))
    {
      strarray.push_back(fName);
    }
  }
  sort(strarray.begin(),strarray.end());
  for(i = 0;i<strarray.size();i++)
  {
    cout<<strarray[i]<<endl;
  }
  return 0;
}
