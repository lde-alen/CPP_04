NAME		=	polymorphism

SRCS		=	main.cpp			\
				Animal.cpp			\
				Dog.cpp				\
				Cat.cpp				\
				WrongAnimal.cpp		\
				WrongCat.cpp

OBJS		=	$(SRCS:.cpp=.o)

HEADER		=	Animal.hpp			\
				Dog.hpp				\
				Cat.hpp				\
				WrongAnimal.hpp		\
				WrongCat.hpp

CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -Wconversion -std=c++98

RM			=	rm -f

$(NAME)		:	$(OBJS) $(HEADER)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all			:	$(NAME)

clean		:
				$(RM) $(OBJS)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

