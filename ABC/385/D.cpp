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

	int N, M;
  ll Sx, Sy; cin >> N >> M >> Sx >> Sy;
	map<ll, pair<int, int>> Xidx, Yidx;

	vector<ll> X(N), Y(N);
	REP(i,N) cin >> X[i] >> Y[i];
	map<ll, vector<ll>> mpX, mpY;
	REP(i,N){
		mpX[X[i]].push_back(Y[i]);
		mpY[Y[i]].push_back(X[i]);
	}

	REP(i,N) sort(mpX[X[i]].begin(), mpX[X[i]].end());
	REP(i,N) sort(mpY[Y[i]].begin(), mpY[Y[i]].end());
	
	ll nowX = Sx, nowY = Sy;
	REP(i,M){
		char D;
		ll C;
		cin >> D >> C;
		if(D == 'U'){
			ll nY = nowY + C;

			if(!mpX.count(nowX)){
				nowY = nY;
				continue;
			}

			int startIdx = lower_bound(mpX[nowX].begin(), mpX[nowX].end(), nowY) - mpX[nowX].begin();
			int endIdx = upper_bound(mpX[nowX].begin(), mpX[nowX].end(), nY) - mpX[nowX].begin();

			if(startIdx<endIdx){
				if(Xidx.count(nowX)){
					Xidx[nowX].first = min(Xidx[nowX].first, startIdx);
					Xidx[nowX].second = max(Xidx[nowX].second, endIdx);
				}else{
					Xidx[nowX] = make_pair(startIdx, endIdx);
				}
			}
			nowY = nY;
		}else if(D == 'D'){
			ll nY = nowY - C;

			if(!mpX.count(nowX)){
				nowY = nY;
				continue;
			}

			int startIdx = lower_bound(mpX[nowX].begin(), mpX[nowX].end(), nY) - mpX[nowX].begin();
			int endIdx = upper_bound(mpX[nowX].begin(), mpX[nowX].end(), nowY) - mpX[nowX].begin();

			if(startIdx<endIdx){
				if(Xidx.count(nowX)){
					Xidx[nowX].first = min(Xidx[nowX].first, startIdx);
					Xidx[nowX].second = max(Xidx[nowX].second, endIdx);
				}else{
					Xidx[nowX] = make_pair(startIdx, endIdx);
				}
			}
			nowY = nY;
		}else if(D == 'L'){
			ll nX = nowX - C;

			if(!mpY.count(nowY)){
				nowX = nX;
				continue;
			}

			int startIdx = lower_bound(mpY[nowY].begin(), mpY[nowY].end(), nX) - mpY[nowY].begin();
			int endIdx = upper_bound(mpY[nowY].begin(), mpY[nowY].end(), nowX) - mpY[nowY].begin();

			if(startIdx<endIdx){
				if(Yidx.count(nowY)){
					Yidx[nowY].first = min(Yidx[nowY].first, startIdx);
					Yidx[nowY].second = max(Yidx[nowY].second, endIdx);
				}else{
					Yidx[nowY] = make_pair(startIdx, endIdx);
				}
			}
			nowX = nX;
		}else if(D == 'R'){
			ll nX = nowX + C;

			if(!mpY.count(nowY)){
				nowX = nX;
				continue;
			}

			int startIdx = lower_bound(mpY[nowY].begin(), mpY[nowY].end(), nowX) - mpY[nowY].begin();
			int endIdx = upper_bound(mpY[nowY].begin(), mpY[nowY].end(), nX) - mpY[nowY].begin();

			if(startIdx<endIdx){
				if(Yidx.count(nowY)){
					Yidx[nowY].first = min(Yidx[nowY].first, startIdx);
					Yidx[nowY].second = max(Yidx[nowY].second, endIdx);
				}else{
					Yidx[nowY] = make_pair(startIdx, endIdx);
				}
			}
			nowX = nX;
		}
	}

	set<pair<ll, ll>> st;
	for(auto [k, v] : Xidx){
		FOR(i,v.first, v.second){
			st.insert(make_pair(k, mpX[k][i]));
		}
	}

	for(auto [k, v] : Yidx){
		FOR(i,v.first, v.second){
			st.insert(make_pair(mpY[k][i], k));
		}
	}

	ll ans = st.size();
	cout << nowX << " " << nowY << " " << ans << endl;

	return 0;

}
