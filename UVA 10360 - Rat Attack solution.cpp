//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();
//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 10360 - Rat Attack
	int t, d, n, x, yy, i, k, final, fx, fy, r;
	cin >> t;
	int **y = new int*[1025];
	for (i = 0; i < 1025; i++)
		y[i] = new int[1025];
	while (t--) {
		cin >> d >> n;
		for (i = 0; i < 1025; i++)
			for (k = 0; k < 1025; k++)
				y[i][k] = 0;
		while (n--) {
			cin >> x >> yy >> r;
			for (i = x - d; i <= x + d && i < 1025; i++) {
				if (i < 0)
					continue;
				for (k = yy - d; k <= yy + d && k < 1025; k++) {
					if (k < 0)
						continue;
					y[i][k] += r;
				}
			}
		}
		final = 0, fx = fy = 1e9;
		for (i = 0; i < 1025; i++)
			for (k = 0; k < 1025; k++)
				if (y[i][k] > final) {
					final = y[i][k];
					fx = i;
					fy = k;
				}
		cout << fx << " " << fy << " " << final << endl;
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
