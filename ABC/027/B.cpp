#include <stdio.h>
#include <cmath>
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

	int sum = accumulate(a.begin(), a.end(), 0);
	int ave = sum / N;
	int ans = 0;
	if(sum % N == 0){
		sum = 0;
		REP(i,N){
			if(sum != i*ave) ans++;
			sum += a[i];
		}
		cout << ans << endl;
	}else{
		cout << -1 << endl;
	}

	return 0;

}
