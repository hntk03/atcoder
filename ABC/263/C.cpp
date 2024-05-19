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
int N, M;

void f(vector<int> a){
	if(a.size() == N){
		for(int x : a) cout << x << " ";
		cout << endl;
		return;
	}

	int sx = 1;
	if(a.size() > 0){
		sx = a.back() + 1;
	}

	a.push_back(sx);
	while(a.back() <= M){
		f(a);
		a.back()++;
	}
}

int main(void){

	cin >> N >> M;	

	f(vector<int>(0));

	return 0;

}
