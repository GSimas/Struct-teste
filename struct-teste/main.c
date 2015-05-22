#include <stdio.h>
#include <stdlib.h>

//Struct-teste
//Projeto teste para estruturas

struct Ponto2D{
	float x;
	float y};

struct CorRGB{
	unsigned int r;
	unsigned int g;
	unsigned int b};

struct Circulo{
	struct Ponto2D centro;
	float raio;
	struct CorRGB cor};

void leInstancias(struct Ponto2D *p, struct Circulo *c){
	printf("Digite o valor da instancia1 para o ponto");
	printf("Digite o valor da instancia2 para o circulo");
	scanf("%f",&p);
};

int main()
{
	struct Ponto2D ponto1;
	struct Circulo circ1;

return 0;
}
