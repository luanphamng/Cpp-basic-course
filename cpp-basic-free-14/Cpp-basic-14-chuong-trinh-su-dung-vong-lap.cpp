#include <iostream>
#include <ostream>

int main (int argc, char *argv[]) {
	int A[10] = {1, 4, 6, 9, 101, 135, 80, 199, 15, 22};
	
	for (int i = 0; i < 10; i++) {
		if (A[i] % 5 == 0) {
			if (A[i] % 2 == 0) {
				std::cout << A[i] << " chia het cho 10" << std::endl;
				continue;
				} else {
				std::cout << A[i] << " chia het cho 5" << std::endl;
				continue;
			}	
			} else if (A[i] % 2 == 0) {
			std::cout << A[i] << " chia het cho 2" << std::endl;
			} else {
			// Khong chia het cho 5, 2, 10
			// Khong nam trong de bai, khong xu ly
		}
	}
	return 0;
}
