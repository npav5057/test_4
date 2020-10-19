#include <bits/stdc++.h>
using namespace std;
#define loop(i,c,t) for(int i=c;i<t;i++)
#define ll long long 
#define max 1000000007
ll gcd(ll a, ll b){ll dd= a>b ? a:b;ll dr= a<b ? a:b;while(dr!=0){ll rm=dd%dr;dd=dr;dr=rm;}return dd;}
class fraction{
	public:
		ll nm;
		ll dn;
		fraction(ll n,ll d){nm=n;dn=d;}
		void red(){ll h=gcd(nm,dn);nm=nm/h;dn=dn/h;}	
};

fraction  add( fraction &f1, fraction &f2){ll dd=f1.dn*f2.dn;ll nn= f1.dn*f2.nm+f1.nm*f2.dn;fraction *rt= new fraction(nn,dd);return *rt;}
 
fraction ml(fraction &f1, fraction &f2){ll dd=f1.dn*f2.dn;ll nn= f1.nm*f2.nm; fraction *rt= new fraction(nn,dd);return *rt;}
ll modInverse(ll a, ll m)
{
	a=a%m;
	loop(x,1,m)
	{
		if((a*x)%m==1)
			return x;
	}	
}
ll modI(ll a, ll m) 

{ 
	ll hj=m;
	 ll y = 0, x = 1;
    while (a > 1) 
    { 
        ll q = a / m; 
        ll t = m; 

        m = a % m, a = t; 

        t = y;

        y = x - q * y; 

        x = t; 

    } 
    if(x<0){
    	x+=hj;
    }

  return x;
} 



int main()
{
	fraction k(2,3);
	fraction l(3,4);
	fraction m=ml(k,l);
	m.red();
	cout<<m.nm<<"/"<<m.dn<<endl;
	 ll p=1,q=5;
	 cout<<"mod "<<modI(60,43)<<endl;
	return 0;
}
    

    
    
