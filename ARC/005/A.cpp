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

	int ans = 0;
	REP(i,N){
		string w; cin >> w;
		if(i == N-1){
			w = w.substr(0,w.length()-1);
		}
		if(w == "TAKAHASHIKUN") ans++;
		else if(w == "Takahashikun") ans++;
		else if(w == "takahashikun") ans++;
	}

	cout << ans << endl;

	return 0;

}
