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

vector<int> f(int N){
	if(N == 1) return vector<int>(1, 1);
	vector<int> v = f(N-1);
	int size = v.size();
	v.push_back(N);
	REP(i,size){
		v.push_back(v[i]);
	}
	return v;
}

int main(void){

	int N; cin >> N;	

	vector<int> ans = f(N);

	for(int x : ans) cout << x << " ";
	cout << endl;
	
	return 0;

}
