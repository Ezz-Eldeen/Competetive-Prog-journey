#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::sort(a.begin(), a.end());
	int ans = 0;
	int j = 0;
	for (int i = 0; i < n; i++) {
		while (j < n && a[j] - a[i] <= 5) {
			j++;
			ans = std::max(ans, j - i);
		}
	}
	
	std::cout << ans << "\n";
    return 0;
}