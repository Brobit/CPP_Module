class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		int	getRawBits() const;
		void	setRawBits(int const raw);
		~Fixed();

	private:
		int					_fixedPointNumber;
		static const int	_fractionalBits = 8;
};
