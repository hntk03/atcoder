#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	string S; cin >> S;

	S = S.substr(1);

	int cnt = 0;
	vector<int> ans;
	for(char c : S){
		if(c == '|'){
			ans.push_back(cnt);
			cnt = 0;
		}else{
			cnt++;
		}
	}

	for(int x : ans){
		cout << x << " ";
	}
	cout << endl;

	return 0;

}
