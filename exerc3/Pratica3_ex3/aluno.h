#define TAMANHO 5
#define NOME 9 //nome= isabelle, ndecaract= 8+1;
#define MATRICULA 6 //matricula= 95388, ndecaract=5+1;
struct Aluno
{
	char *nome, *matricula;
	double *notas;
	double media_notas;
	int num_disciplinas=0;

	Aluno();
	~Aluno();

	void addnotas(double nota);
	void addnomematricula();
	void calcularMediaAluno();
	void imprimeInformacoesAluno();
	
};
