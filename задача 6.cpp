#include <iostream>
#include <vector>

int main()
{
	//вводит вектор
	std::vector<int> vec = { 1,2,3 };
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i];
	std::cout << std::endl;
	//добавляет числа в конец (нужен объект типа элемента)
	vec.push_back(2);
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i];
	std::cout << std::endl;
	//вводим итератор, который указывает на первый элемент вектора
	std::vector<int>::iterator iter = vec.begin(); 
	//удаляет элемент по итератору
	vec.erase(iter + 1);
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i];
	std::cout << std::endl;
	//вставляет элемент на позицию, указанную итератором
	vec.insert(iter + 2, 8);
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i];
	std::cout << std::endl;
	//добавляет числа в конец (просто передаются элементы)
	vec.emplace_back(7);
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i];
	std::cout << std::endl;
	//меняет размер вектора
	vec.resize(3);
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i];
	std::cout << std::endl;
	//меняет объем выделенной памяти
	vec.reserve(8);
	//уменьшает кол-ко используемой памяти до размера вектора
	vec.shrink_to_fit();
	//возвращает объем памяти, выделенный для вектора
	vec.capacity();
	//удаляет все элементы
	vec.clear();
	//5 пункт задачи
	std::vector<int> vec1 = { 1,2,3 };
	vec = vec1;
	vec[1] = 10;
}
