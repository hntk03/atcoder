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

	int N; cin >> N;
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	vector<int> ameba;
	ameba.push_back(0);

	REP(i,N){
		int num = ameba[A[i]-1];
		ameba.push_back(num+1);
		ameba.push_back(num+1);
	}

	REP(i,ameba.size()){
		cout << ameba[i] << endl;
	}

	return 0;

}
