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
	string S; cin >> S;

	int idx = 0;
	REP(i,N){
		if(S[i] == '#'){
			idx = i;
			if(S[min(i+1,N-1)] == '.') break;
			else{
				idx = min(i+1,N-1);
			}
		}
	}

	S = S.substr(idx);

	int white = count(S.begin(), S.end(), '.');
	int black = count(S.begin(), S.end(), '#');
	
	int ans = min(white, black);

	cout << ans << endl;
	return 0;

}
