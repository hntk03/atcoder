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

void print(char c, int N){
	REP(i,N) cout << c;
}

int main(void){

	int N, K; cin >> N >> K;
	string S; cin >> S;

	vector<pair<char, int>> v;

	pair<char, int> now = make_pair(S.front(), 1);
	FOR(i,1,N){
		if(now.first == S[i]) now.second++;
		else{
			v.push_back(now);
			now = make_pair(S[i], 1);
		}
	}
	v.push_back(now);

	int cnt = 0;
	int idx = 0;
	REP(i,v.size()){
		if(v[i].first == '1') cnt++;

		if(cnt == K){
			idx = i;
			break;
		} 
	}

	pair<char, int> p = v[idx];
	v.erase(v.begin() + idx);
	idx--;

	while(idx >= 0){
		if(v[idx].first == '1') break;
		idx--;
	}

	v.insert(v.begin()+idx, p);

	REP(i,v.size()){
		print(v[i].first, v[i].second);
	}
	cout << endl;

	return 0;

}
