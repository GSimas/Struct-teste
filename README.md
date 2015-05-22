# Struct-teste
##Projeto teste para estruturas
*Cria uma estrutura
struct Ponto2D{
	float x;
	float y;}
struct CorRGB{
	unsigned int r;
	unsigned int g;
	unsigned int b;}
struct Circulo{
	struct centro Ponto2D;
	float raio;
	struct cor CorRGB;}

void leInstancias(struct Ponto2D *p, struct Circulo *c){
	printf("Digite o valor da instancia1 para o ponto");
	printf("Digite o valor da instancia2 para o circulo");
	scanf("%f",&p);
}

int(main){
	struct ponto1 Ponto2D;
	struct circ1 Circulo;

return 0
};