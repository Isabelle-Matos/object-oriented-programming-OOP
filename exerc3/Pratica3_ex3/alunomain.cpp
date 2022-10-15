#include <iostream>
#include "aluno.h"
using namespace std;
Aluno::Aluno()
{
	nome = new char[NOME];
	matricula = new char[MATRICULA];
	notas = new double[TAMANHO]();
	media_notas = 0;
	num_disciplinas = 0;
}
void Aluno::addnomematricula()
{
	cin.getline(nome, NOME);
	cin.getline(matricula, MATRICULA);
}
void Aluno::addnotas(double nota)
{
	if(num_disciplinas==TAMANHO)
	{
		cout << "Erro, lista cheia!"<<endl;
		exit(1);
	}
	notas[num_disciplinas] = nota;
	num_disciplinas++;
}
void Aluno::calcularMediaAluno()
{
	for(int i=0; i<num_disciplinas; i++)
	{
		media_notas+= notas[i];
	}
	media_notas= media_notas/num_disciplinas;

	
}
void Aluno::imprimeInformacoesAluno()
{
	cout <<"Nome: " <<nome <<endl;
	cout <<"Matricula: "<< matricula << endl;
	cout <<"Notas: "<<endl;
	for(int i=0; i<num_disciplinas; i++)
	{
		cout << notas[i]<<endl;
	}
	cout <<"Media notas: "<<media_notas << endl;
}
Aluno::~Aluno()
{
	delete[] notas;
	delete[] nome;
	delete[] matricula;

}
