#include "exception.h"
const char* ExcecaoAcimaDeX::what() const throw(){
    return "Soma acima de X.";
}