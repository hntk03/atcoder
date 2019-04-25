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
	map<int, int> even;
	map<int, int> odd;
	REP(i,N){
		int v; cin >> v;
		if(i%2 == 0) even[v]++;
		else odd[v]++;
	}
	vector<pair<int, int>> e;
	vector<pair<int, int>> o;

	for(auto t:even){
		e.push_back(make_pair(t.second, t.first));
	}
	for(auto t:odd){
		o.push_back(make_pair(t.second, t.first));
	}
	SORT(e);
	SORT(o);

	int ans = 0;
	int e_cnt;
	int o_cnt;
	if(N % 2 == 0){
		e_cnt = o_cnt = N / 2;
	}else{
		e_cnt = N / 2;
		o_cnt = N / 2 + 1;
	}

	if(e.back().second == o.back().second){
		int i = 2;
		while(true){
			if(e[N-i].second != o[N-i].second){
				if(e[N-i].first > o[N-i].first){
					ans = e_cnt - e[N-i].first + o_cnt - o[N-i+1].first;
					break;
				}else if(e[N-i].first < o[N-i].first){
					ans = e_cnt - e[N-i+1].first + o_cnt - o[N-i].first;
					break;
				}else if(e[N-i].first < o[N-i].first){
				}else{
					i++;
				}
			}

		}

	}else{
		ans = e_cnt - e.back().first + o_cnt - o.back().first;
	}

	cout << ans << endl;
	return 0;

}
