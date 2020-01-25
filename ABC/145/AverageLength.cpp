#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N; cin >> N;
	vector<int> x(N);
	vector<int> y(N);
	vector<int> idx(N);


	REP(i,N){
		cin >> x[i] >> y[i];
		idx[i] = i;
	}

	double ans = 0.0;
	int cnt = 0;

	do{
		double sum = 0.0;	
		FOR(i,1,N){
			int a = idx[i];
			int b = idx[i-1];
			
			sum += sqrt(pow(x[a]-x[b],2) + pow(y[a]-y[b],2));
		}

		ans += sum;
		cnt++;
	}while(next_permutation(idx.begin(), idx.end()));

	ans /= cnt;
	cout << setprecision(16) <<  ans << endl;



	return 0;

}
