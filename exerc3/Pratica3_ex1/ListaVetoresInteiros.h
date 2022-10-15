#define TAMANHO 5
struct ListaVetorInteiros
{
    	int *_elementos;
    	int _num_elementos_inseridos;

    	ListaVetorInteiros();
    	~ListaVetorInteiros();
    	void inserir_lista(int elemento);
	void remover_primeiro();
	void remover_ultimo();
	void inverte();
	void imprimir(); 
};
