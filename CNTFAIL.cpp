#include <bits/stdc++.h>
using namespace std;
#define loop(i,c,t) for(int i=c;i<t;i++)
void solve()
{
	int n;
	cin>>n;
	vector<int> mv;
	int p;
	loop(i,0,n)
	{
		cin>>p;
		mv.push_back(p);
	}
	
	p=-1;
	if(n>1)
	{
		sort(mv.begin(),mv.end());
		if(mv[0]==mv[n-1])
		{
			if(mv[0]==n-1) p=0;
			if(mv[0]==0) p=n;
		}else
		{
			if(mv[0]>=0 && mv[n-1]<n && mv[0]+1==mv[n-1] && mv[n-1]==mv[mv[n-1]] && mv[mv[n-1]-1]==mv[0])
			{
				p=n-mv[n-1];
			}
		}
	}
	cout<<p<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}