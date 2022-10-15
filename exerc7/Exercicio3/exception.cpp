#include "exception.h"
const char* exception::what() const throw(){
    return "Erro na leitura/abertura do arquivo.";
}