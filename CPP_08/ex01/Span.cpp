#include "Span.hpp"

Span::Span() : N(0)
{
}

Span::Span(unsigned N) : N(N)
{
}

Span::Span(Span const &other) : N(other.N)
{
}

Span::~Span()
{
}

void	Span::addNumber(int nb)
{
	if (this->size() >= N)
		throw (std::out_of_range("Too much elements in container"));
	this->push_back(nb);
}

unsigned		Span::shortestSpan()
{
	unsigned	minSpan;

	minSpan = UINT_MAX;
	if (this->size() < 2)
		throw (std::out_of_range("No span could be found, not enough numbers"));
	std::sort(this->begin(), this->end());
	for (unsigned int i = 1; i < this->size(); i++)
		minSpan = std::min(minSpan, static_cast<unsigned>((*this)[i] - (*this)[i - 1]));
	return (minSpan);
}

unsigned		Span::longestSpan()
{
	if (this->size() < 2)
		throw (std::out_of_range("No span could be found, not enough numbers"));
	return (*std::max_element(this->begin(), this->end()) - *std::min_element(this->begin(), this->end()));
}

Span	&Span::operator=(Span const &other)
{
	this->Span::vector::operator=(other);
	this->N = other.N;
	return (*this);
}
