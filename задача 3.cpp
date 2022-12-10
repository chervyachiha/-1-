#include <iostream>
#include <string>
#include <fstream>

int main()
{
	setlocale(LC_ALL, "Russian");
	std::ifstream in("input.txt", std::ios::in);
	std::ofstream out("output.txt", std::ios::out);
	std::string k;
	std::string mas;
	while (in >> k)
	{
		for (int i = 0; i < size(k) - 1; i++)
		{
			if (k[i] == k[i + 1])
			{
				mas += k[i];
				k[i] = (char)((int)k[i] - 32);
				k[i + 1] = (char)((int)k[i + 1] - 32);
			}
			if ((char)((int)k[i] + 32) == k[i + 1])
			{
				mas += k[i + 1];
				k[i + 1] = (char)((int)k[i + 1] - 32);
			}
		}
		out << k;
		if (mas.length() != 0)
			out << "(" << mas << ")";
		out << " ";
		mas = "";
	}

}