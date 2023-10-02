#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <cmath>

class	Fixed 
{
	private:
		
		int			_integer;
		static const int	_fractional;

	public:

		Fixed();
		Fixed(const int x);
		Fixed(const float y);
		Fixed(const Fixed& b);
		~Fixed();
		Fixed& operator=(const Fixed& b);
		int	getRawBits() const;
		void	setRawBits(const int bits);
		float	toFloat() const;
		int	toInt() const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& input); 

#endif
