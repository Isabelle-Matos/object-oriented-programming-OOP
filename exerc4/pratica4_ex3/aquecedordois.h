class Aquecedor{
public:
	Aquecedor();
	Aquecedor(float Temperatura);
	Aquecedor(float Temperatura, float incremento);
	void setAquecedor(float Temperatura);
	float getAquecedor();
 	void setIncremento(float incremento);
 	float getIncremento();
	void aumentartemp();
	void diminuirtemp();
private:
	float temperaturaminima;
	float temperaturamaxima;
	float fatorincremento; 
	
};
