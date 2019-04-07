#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

int gcd(int a,int b)
{
	if (a%b==0) return(b);
	else return(gcd(b,a%b));
}


int main(void){

	int N, X; cin >> N >> X;
	vector<int> x(N);
	REP(i,N){
		int v; cin >> v;
		x[i] = abs(X-v);
	}

	int ans = x[0];
	FOR(i,1,N){
		ans = gcd(ans, x[i]);
	}

	cout << ans << endl;



	return 0;

}
