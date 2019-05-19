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

	string s = "MARCH";
	int c[5] = {0};

	int N; cin >> N;
	REP(i,N){
		string t; cin >> t;
		REP(j,5){
			if(t[0] == s[j]) c[j]++;
		}
	}

	int ans = 0;
	REP(i,5){
		FOR(j,i+1,5){
			FOR(k,j+1,5){
				ans += c[i]*c[j]*c[k];
			}
		}
	}

	cout << ans << endl;
	return 0;

}
