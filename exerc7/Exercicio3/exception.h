#include <iostream>
class exception: public std::exception{
    public:
    virtual const char *what() const throw();
};