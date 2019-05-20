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

	int N, K; cin >> N >> K;
	string S; cin >> S;

	if(S[K-1] == 'A') S[K-1] = 'a';
	else if(S[K-1] == 'B') S[K-1] = 'b';
	else if(S[K-1] == 'C') S[K-1] = 'c';

	cout << S << endl;


	return 0;

}
