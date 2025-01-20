#pragma once

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>

class Span : public std::vector<int>
{
	private :
		unsigned	N;

	public :
		Span();
		Span(unsigned N);
		Span(Span const &other);
		virtual ~Span();

		void		addNumber(int nb);
		unsigned	shortestSpan();
		unsigned	longestSpan();

		Span		&operator=(Span const &other);

		template <typename Iterator>
		void		addRange(Iterator begin, Iterator end);
};

template <typename Iterator>
void	Span::addRange(Iterator begin, Iterator end)
{
	if (distance(begin, end) + this->size() > this->N)
		throw (std::out_of_range("Too much elements in container"));
	this->insert(this->end(), begin, end);
}
