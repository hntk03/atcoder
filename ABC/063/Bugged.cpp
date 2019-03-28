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
	vector<int> s(N);
	REP(i,N) cin >> s[i];

	// sort(s.begin(), s.end(), greater<int>());
	SORT(s);

	int sum = accumulate(s.begin(), s.end(), 0);
	int i = 0;
	while(sum % 10 == 0 and i < N){
		sum -= s[i++];
	}
	if(i == N) sum = 0;

	cout << sum << endl;


	return 0;

}
