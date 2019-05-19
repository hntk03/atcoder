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

int gcd(int a, int b){

	if(b < a) swap(a, b);

	if(a == 0) return b;
	else return gcd(a, b%a);


}

int main(void){

	int N; cin >> N;
	int ans; cin >> ans;
	REP(i,N-1){
		int A; cin >> A;
		ans = gcd(ans, A);
	}

	cout << ans << endl;
	return 0;

}



