#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain 
{
	private:
    	std::string ideas[100];
    public:

    	Brain(void);
    	Brain(Brain const &other);
    	Brain &operator=(Brain const &other);
    	~Brain(void);

    	std::string const &getIdea(int index) const;
};

#endif