#include <iostream>
#include <vector>
#include <cmath>

// Kadane's alg

int maxSumOfSubArr(std::vector<int> &v) {
	
	size_t n = v.size();
	
	int localMax = 0;
	int globalMax = INT_MIN;
	
	for(size_t i = 0; i < n; ++i) {
		localMax = std::max(v[i], v[i]+localMax);
		
		if(localMax > globalMax) {
			globalMax = localMax;
		}
		
	}
	
	return globalMax;
}

void test() {
	std::vector<int> v = { -2, 1, -3, 4, -1 , 2, 1, -5, 4 };
	
	std::cout << maxSumOfSubArr(v) << std::endl;
}

int main() {
	test();
}
