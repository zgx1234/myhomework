#include"account.h"
int main()
{
  int n=0,m=0,l=0;
  cout<<"������������ ";
  cin>>n;
  cout<<"��� ";
  cin>>m;
  cout<<"ȡ�� ";
  cin>>l;
  if(l<=n)
    l=l;
    else
    l=0&&cout<<"Debit amount exceeded account balance.";
  Account account(n,m,l);
  account.displaymessage();
    return 0;
}
