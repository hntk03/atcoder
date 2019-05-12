#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int count(int a){

	int ans = 0;
	while(a % 2 == 0){
		ans++;
		a /= 2;
	}
	return ans;
}

int main(void){

	int N; cin >> N;
	vector<int> a(N);
	REP(i,N) cin >> a[i];

	int ans = 0;
	REP(i,N){
		ans += count(a[i]);
	}

	cout << ans << endl;

	return 0;

}
