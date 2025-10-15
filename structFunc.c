#include <stdio.h>

#define LEN 50

struct endereco{
	char rua[LEN];
	char cidade_estado_cep[LEN];
};

//prototipos de funcoes
struct endereco obtem_endereco();
void imprime_endereco(struct endereco);
