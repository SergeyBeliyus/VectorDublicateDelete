#include <iostream>
#include <vector>
#include <algorithm>


int main() {
	int count;
	std::vector<int> data {1,1,2,5,6,1,2,4};
	std::vector<int>::iterator it;

	std::cout << "[IN]: ";
	for (int i : data) {
		std::cout << i << " ";
	}

	std::cout << std::endl;

	std::sort(data.begin(), data.end(), [](int i, int j) { return i < j;});
	it = std::unique(data.begin(), data.end());
	data.resize(std::distance(data.begin(), it));

	std::cout << "[OUT]: ";
	for (int i : data) {
		std::cout << i << " ";
	}

	std::cout << std::endl;
}