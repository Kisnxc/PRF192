#include <bits/stdc++.h>
#include <vector>
using namespace std;


/*
 * Complete the 'arrayManipulation' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */
int m;

long max(vector<long> list) {
	long max;
	for(int i = 0, n = list.size(); i < n; ++i) {
		max = (max < list[i])? list[i] : max;
	}
	return max;
}
long arrayManipulation(int n, vector<vector<int> > queries) {
	vector<long> list(m);
	for(int i = 0; i < m; ++i)
		list.push_back(0);
	int i, j;
	i = j = 0;
	for(int k = 0; k < m; ++k) {
		for(int x = queries[i][j]; x <= queries[i][j+1]; ++x) {
			list[x] += queries[i][3];
		}
		i++; j++;
	}
	long Max = max(list);
	return Max;
}

int main() {
	int n;
	vector<vector<int> > queries;
	cin >> n >> m;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			int temp1, temp2, temp3;
			cin >> temp1 >> temp2 >> temp3;
			queries[i].push_back(temp1);
			queries[i].push_back(temp2);
			queries[i].push_back(temp3);		
		}
	}
	cout << arrayManipulation(n, queries);
}
  
