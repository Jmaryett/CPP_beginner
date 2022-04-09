#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <algorithm>

//поскольку мы наследуем от родителя, то сначала инициализируем
//через его конструктор
//у стд::стек есть протектед элемент - неопределенный контейнер
//который мы и изменяем в операторе=, и с которым мы и типа работаем потом
//затем создаем свои итераторы (ну сокращаем им название, чтобы кучу раз не прописывать)
//они должны указывать на начало или конец контейнера, потому что
//стек он типа ЛИФО (ласт ин, ферст аут (кек)), ну и он типа шаблонный?

template <class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {};
	MutantStack(const MutantStack &object)
	{
		*this = object;
	}
	MutantStack& operator=(const MutantStack &object)
	{
		this->c = object.c;
		return (*this);
	}
	virtual ~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin() { return this->c.begin(); };
	iterator	end() { return this->c.end(); };
};


#endif