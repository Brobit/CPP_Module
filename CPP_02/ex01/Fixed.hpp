#include <ostream>
class Fixed {
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
		~Fixed();

	private:
		int					_fixedPointNumber;
		static const int	_fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
