#include "iostream"
class ExcecaoAcimaDeX : public std::exception{
    public:
    virtual const char *what() const throw();
};