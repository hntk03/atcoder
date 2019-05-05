#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int N; cin >> N;
	vector<int> a(N);
	REP(i,N) cin >> a[i];

	int l, r;
	l = r = 0;
	int ans = 0;

	while(l < N){
		int p = l;
		while(a[p++] <= a[r] and r < N) r++;
		ans += (r-l+1);
		l++;
	}

	cout << ans << endl;

	return 0;

}
