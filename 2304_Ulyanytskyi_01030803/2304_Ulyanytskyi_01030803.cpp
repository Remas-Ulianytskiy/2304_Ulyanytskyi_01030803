#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

void fill_array(array<int, 12> & num_array) {
	srand(20458);
	int min = -10;
	int max = 10;

	for (int i = 0; i < num_array.size(); i++) {
		num_array[i] = rand() % (max - min + 1) + min;
	}
}

int main()
{
	const int ARRAY_SIZE = 12;
	int sum = 0;

    array<int, ARRAY_SIZE> num_array;

	fill_array(num_array);

	cout << "Array:\n";

	for (const auto& element : num_array)
	{
		cout << element << ' ';
	}

	for (const auto& element : num_array) {
		if (element < 0) {
			sum += element;
		}
	}

	cout << "\nSum: " << sum;

    return 0;
}