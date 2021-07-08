#pragma once
#include <vector>
#include <iostream>

template < typename T >
class MetodsForContainer
{
	std::vector<T> vec;
	void FillingTheContainerWithRandomNumbers(std::vector<T>& vec, int amountOfElements);
	void SquaringContainerElements(std::vector<T>& vec);
	void RemoveOdd(std::vector<T>& vec);
	void TheSumOfAllTheElementsOfTheContainer(std::vector<T>& vec);
public:
	MetodsForContainer();
	~MetodsForContainer();
	void CompltetedTask();
};


template<typename T>
MetodsForContainer<T>::MetodsForContainer()
{
}

template<typename T>
MetodsForContainer<T>::~MetodsForContainer()
{
}

template<typename T>
void MetodsForContainer<T>::FillingTheContainerWithRandomNumbers(std::vector<T>& vec, int amountOfElements)
{

	while (vec.size() != amountOfElements)
	{
		vec.push_back(rand() % 11);
		
	}

	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
}

template<typename T>
inline void MetodsForContainer<T>::SquaringContainerElements(std::vector<T>& vec)
{
	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		*iter *= (*iter);
	}
	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
}

template<typename T>
void MetodsForContainer<T>::RemoveOdd(std::vector<T>& vec)
{

	vec.erase(std::remove_if(vec.begin(), vec.end(),
		[](int item) { return item % 2 != 0; }), vec.end());

	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
}

template<typename T>
void MetodsForContainer<T>::TheSumOfAllTheElementsOfTheContainer(std::vector<T>& vec)
{
	int sum = 0;

	for (auto iter = vec.begin(); iter != vec.end(); ++iter)
		sum += (*iter);

	std::cout << sum << std::endl;
		
}

template<typename T>
inline void MetodsForContainer<T>::CompltetedTask()
{
	FillingTheContainerWithRandomNumbers(vec, 10);
	RemoveOdd(vec);
	SquaringContainerElements(vec);
	TheSumOfAllTheElementsOfTheContainer(vec);
}
