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

	vector<int> v;

	int cnt = 0;
	REP(i,N){
		if(S[i] == '1'){
			v.push_back(cnt);
			cnt = 0;
		}else{
			cnt++;
		}
	}
	if(cnt != 0) v.push_back(cnt);

	// REP(i,v.size()){
	// 	cout << v[i] << endl;
	// }

	sort(v.begin(), v.end(), greater<int>());
	// REP(i,v.size()){
	// 	cout << v[i] << endl;
	// }
	int ans = count(S.begin(), S.end(), '1');
	
	REP(i,K){
		ans += v[i];
	}
	cout << ans << endl;



	return 0;

}
