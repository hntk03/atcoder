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
	int N = S.length();
	int h = N/2;

	ll ans = 0;

	FOR(i,h,N-1){
		vector<int> left(h);
		vector<int> right(N-h);
		REP(j,h) left[j] = j;
		int k = 0;
		FOR(j,h,N){
		right[k++] = j;
		}


		do{
				int tmp1 = S[left[0]] - '0';
				int tmp2;
				FOR(j,1,h){
					if(j == 1 and tmp1 == 0) break;
					tmp1 *= 10;
					tmp1 += S[left[j]] - '0';
				}
			do{
				tmp2 = S[right[0]] - '0';
				cout << S[right[0]] << endl;
				FOR(j,1,N-h){
					cout << S[right[j]] << endl;
					if(j == 1 and tmp2 == 0) break;
					tmp2 *= 10;
					tmp2 += S[right[j]] - '0';
				}
		
				cout << tmp1 << ":" << tmp2 << endl;
			ans = max(ans, (ll)tmp1*tmp2);
			}while(next_permutation(right.begin(), right.end()));
		}while(next_permutation(left.begin(), left.end()));


	}

	cout << ans << endl;


	return 0;

}
