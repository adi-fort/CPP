#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed 
{
	private:
		
		int			_fp_num;
		static const int	_fract = 8;

	public:

		Fixed();
		Fixed(const Fixed& b);
		~Fixed();
		Fixed& operator=(const Fixed& b);
		int	getRawBits() const;
		void	setRawBits(const int bits);
};

#endif
