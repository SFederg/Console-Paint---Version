#pragma once
#include <vector>
#include <typeinfo>

template<typename T, typename R>
class Finder
{
public:
	T& FindElement(vector<T*> &elements, R &element)
	{
		for (int i = 0; i < elements.size(); i++)
		{
			if (elements[i] == element)
			{
				return *element;
			}
		}
		return nullptr;
	}

	void SortByElementType(vector<T*> &elements, R &element)
	{
		for (int i = 0; i < elements.size(); i++)
		{
			T el = elements[i];
			if (typeid(el).name() == typeid(element).name())
			{
				for (int j = 0; j < elements.size()-1; j++)
				{
					elements[j + 1] = elements[j];
				}
				elements[0] = el;
			}
		}
	}
};

