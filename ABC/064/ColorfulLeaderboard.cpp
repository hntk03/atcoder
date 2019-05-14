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
	vector<int> a(N);
	REP(i,N) cin >> a[i];

	int tmp = 0;
	set<string> st;
	REP(i,N){
		if(a[i] < 400) st.insert("Gray");
		else if(a[i] < 800) st.insert("Blown");
		else if(a[i] < 1200) st.insert("Green");
		else if(a[i] < 1600) st.insert("mizuiro");
		else if(a[i] < 2000) st.insert("blue");
		else if(a[i] < 2400) st.insert("yellow");
		else if(a[i] < 2800) st.insert("daidai");
		else if(a[i] < 3200) st.insert("Red");
		else tmp++;

	}
	
	int min_value = st.size();
	int max_value = min_value+tmp;

	cout << min_value << ' ' << max_value << endl;

	return 0;

}
