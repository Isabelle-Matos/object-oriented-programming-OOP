#include "artigohigiene.h"

ArtigoHigiene::ArtigoHigiene(std::string codigo,std::string descricao,double precodecompra,double percentual):
    Farmacia(codigo,descricao,precodecompra,percentual) {}

double ArtigoHigiene::gerarPrecoDeVenda(){
    return getprecodecompra() + getpercentuallucro();
}