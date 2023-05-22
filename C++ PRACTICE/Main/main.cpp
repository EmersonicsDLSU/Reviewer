#include <format>
#include <iostream>
#include <vector>
#include <queue>
#include <limits>

void Triangle(int size) {
	int row, col;
	// 1st half
	for (row = 0; row < size; row++) {
		for (col = 0; col < row + 1; col++) {
			std::cout << ("O");
		}
		std::cout << "\n";
	}
	// 2nd half
	for (row = 0; row < size - 1; row++) {
		for (col = size - 1; col > 0; col--) {
			std::cout << ("O");
		}
		std::cout << "\n";
	}
}

int main() {
	Triangle(5);

    return 0;
}