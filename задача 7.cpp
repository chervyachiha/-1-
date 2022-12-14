#include <iostream>



int main()
{
	int q1, p1, q2, p2, a;
	std::cin >> q1 >> p1 >> q2 >> p2 >> a;
	int sum = 0;
	int t;
	if (q1 > q2)
		t = a / q2 + 1;
	else
		t = a / q2 + 1;
	int min = 1000000000;
	for (int i = 0; i < t; i++)
		for (int j = 0; j < t; j++)
			if (q1 * i + q2 * j >= a)
			{
				sum = p1 * i + p2 * j;
				if (sum < min)
					min = sum;
			}
	std::cout << min;
}
