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

	int N, Q; cin >> N >> Q;
	string server;
	vector<string> pc(N);
	vector<string> S;
	map<string, int> mp;
	REP(i,Q){
		int type; cin >> type;

		if(type == 1){
			int p; cin >> p; p--;
			pc[p] = server;
		}else if(type == 2){
			int p; cin >> p; p--;
			string s; cin >> s;
			if(mp.count(s)) pc[p] += to_string(mp[s]) + ",";
			else{
				S.push_back(s);
				int idx = S.size() - 1;
				mp[s] = idx;
				pc[p] += to_string(idx) + ",";
			} 
		}else{
			int p; cin >> p; p--;
			server = pc[p];
		}
	}

	REP(i,server.size()){
		int n = 0;
		while('0' <= server[i] and server[i] <= '9'){
			n *= 10;
			n += server[i] - '0';
			i++;
		}
		if(server[i] == ',') cout << S[n];
	}
	cout << endl;

	return 0;

}
