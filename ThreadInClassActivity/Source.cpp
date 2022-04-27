#include <iostream>
#include <thread>
#include <time.h>

using namespace std;

void Add(int x) {

}

int main() {

	int const size = 100;
	int const threads = 4;
	int numbers[100];

	srand(time(NULL));

	for (int x = 0; x < size; x++) {
		numbers[x] = rand() % 100;
	}

	for (int x = 0; x < size; x++) {
		cout << numbers[x] << endl;
	}

	int z = 100;

	thread t[threads] = thread(Add(z));

	for (int x = 0; x < threads; x++) {
		t[x] = thread();
		t[x].join();
	}

	return 0;
}