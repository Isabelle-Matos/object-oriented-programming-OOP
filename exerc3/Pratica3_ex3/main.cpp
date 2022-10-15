#include <iostream>
#include "aluno.h"
using namespace std;

int main()
{
   	Aluno aluno;
	Aluno *a1 = &aluno;
	a1->addnomematricula();
	a1->addnotas(10.5);
	a1->addnotas(9.8);
        a1->addnotas(6.0);
        a1->addnotas(7.9);
        a1->addnotas(8.5);

	a1->calcularMediaAluno();
	a1->imprimeInformacoesAluno();
	
	delete a1;
	
	return 0;
	
}
