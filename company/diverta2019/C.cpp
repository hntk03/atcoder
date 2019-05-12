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
	vector<string> s(N);
	REP(i,N) cin >> s[i];

	int last_a=0;
	int first_b = 0;
	int ba = 0;
	int ans = 0;
	REP(i,N){
		REP(j,s[i].length()-1){
			if(s[i].substr(j,2) == "AB") ans++;
		}
		if(s[i].back() == 'A' and s[i].front() == 'B') ba++;
		if(s[i].back() == 'A') last_a++;
		if(s[i].front() == 'B') first_b++;
	}
	if(last_a == 0 and first_b == 0 and ba > 0) ans += ba-1;
	else ans += min(last_a+ba, first_b+ba);
	cout << ans << endl;


	return 0;

}
