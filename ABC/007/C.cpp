#include <stdio.h>
#include <cmath>
#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

int sy, sx;
int gy, gx;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
const int MAX = 51;
bool reached[MAX][MAX];
int num[MAX][MAX];


int main(void){

	int R, C; cin >> R >> C;
	cin >> sy >> sx >> gy >> gx;
	sy--;
	sx--;
	gy--;
	gx--;

	VS c(R);
	REP(i,R) cin >> c[i];

	REP(i,R){
		REP(j,C){
			reached[i][j] = false;
			num[i][j] = 0;
		}
	}

	queue<tuple<int, int, int>> q;
	tuple<int, int, int> start = make_tuple(sy, sx, 0);
	tuple<int, int, int> now;
	q.push(start);

	while(!q.empty()){
		now = q.front();
		q.pop();
		int y, x, cnt;
		y = get<0>(now);
		x = get<1>(now);
		cnt = get<2>(now);
		reached[y][x] = true;
		num[y][x] = cnt;

		REP(i,4){
			int next_y = y + dy[i];
			int next_x = x + dx[i];

			if(next_y >= 0 and next_y < R and next_x >= 0 and next_x < C and reached[next_y][next_x] == false and c[next_y][next_x] == '.'){
				tuple<int, int, int> next = make_tuple(next_y, next_x, cnt+1);
				q.push(next);
			}

		}

	}


	cout << num[gy][gx] << endl;




	return 0;

}
