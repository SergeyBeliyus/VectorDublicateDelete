#include <iostream>
#include <vector>
#include <algorithm>

void dublicate_delete(std::vector<int> &v) {
	std::vector<int>::iterator it;

	std::sort(v.begin(), v.end(), [](int i, int j) { return i < j; });
	it = std::unique(v.begin(), v.end());
	v.resize(std::distance(v.begin(), it));
}


int main() {
	int count;
	std::vector<int> data {1,1,2,5,6,1,2,4};


	std::cout << "[IN]: ";
	for (int i : data) {
		std::cout << i << " ";
	}

	std::cout << std::endl;

	dublicate_delete(data);

	std::cout << "[OUT]: ";
	for (int i : data) {
		std::cout << i << " ";
	}

	std::cout << std::endl;
}