#ifndef CAT_HPP
# define CAT_HPP

# include "iostream"
# include <iomanip>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : virtual public Abs_Animal
{
	private:
		Brain *_brain;
	public:
		Cat(void);
		virtual ~Cat();
		Cat(Cat const &src);
		Cat & operator=(Cat const &rSym);

		void makeSound() const;
		void think() const;
		void explainideas() const;
	protected:
};

#endif
