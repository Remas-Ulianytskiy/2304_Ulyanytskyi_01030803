#include <iostream>
#include <array>
#include <ctime>

using namespace std;

const int ARRAY_SIZE = 12;
const int MAX_RANGE = 10;
const int MIN_RANGE = -10;

void fill_array_rand(array<int, ARRAY_SIZE>& num_array);

int main()
{
	int sum = 0;

    array<int, ARRAY_SIZE> num_array;

	fill_array_rand(num_array);

	cout << "Array = { ";
	for (const auto& element : num_array) {
		cout << element << ' ';
		if (element < 0)
			sum += element;
	}
	cout << '}';

	cout << "\nSum of minimum numbers: " << sum;

    return 0;
}

void fill_array_rand(array<int, ARRAY_SIZE>& num_array) {
	srand(time(0));
	for (int i = 0; i < ARRAY_SIZE; i++) {
		num_array[i] = rand() % (MAX_RANGE - MIN_RANGE + 1) + MIN_RANGE;
	}
}