
#include <bits/stdc++.h>
using namespace std;

int minServerLoads(int n, vector<int>& servers)
{
	
	int totalLoad = 0;
	for(int i : servers) totalLoad += i;

	int requiredLoad = totalLoad / 2;


	vector<vector<int>> dp(n + 1,
	vector<int>(requiredLoad + 1, 0));

	for(int i = 1; i < n + 1; i++)
	{
		for(int j = 1; j < requiredLoad + 1; j++)
		{
			
			
			if (servers[i - 1] > j)
				dp[i][j] = dp[i - 1][j];

		
			else
				dp[i][j] = max(dp[i - 1][j],
						servers[i - 1] +
						dp[i - 1][j - servers[i - 1]]); 
		}
	}

	return totalLoad - 2 * dp[n][requiredLoad];
}

// Driver Code
int main()
{
	int N = 5;
	
	vector<int> servers = { 1, 2, 3, 4, 5 };

	cout << (minServerLoads(N, servers));
}

