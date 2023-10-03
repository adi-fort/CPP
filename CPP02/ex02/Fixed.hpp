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
		
		bool	operator>(const Fixed& num)	const;
		bool	operator<(const Fixed& num)	const;
		bool	operator>=(const Fixed& num)	const;
		bool	operator<=(const Fixed& num)	const;
		bool	operator==(const Fixed& num)	const;
		bool	operator!=(const Fixed& num)	const;
		
		Fixed	operator+(const	Fixed& num)	const;
		Fixed	operator-(const	Fixed& num)	const;
		Fixed	operator*(const	Fixed& num)	const;
		Fixed	operator/(const	Fixed& num)	const;
		
		Fixed&	operator++(); //prima incrementa poi ritorna il valore++
		Fixed	operator++(int);//ritorna il valore non incrementato
		Fixed&	operator--();
		Fixed	operator--(int);

		
		int					getRawBits() const;
		void				setRawBits(const int bits);
		float				toFloat() const;
		int					toInt() const;

		static Fixed&		min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream&	operator<<(std::ostream& os, const Fixed& input); 

#endif
