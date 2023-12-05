#include <iostream>

void masomenos(float* valor){
	float mas, menos;
	if (valor[1] == 0)
	{
		std::cout << "indefinido";
	}else if (valor[2] == 0)
	{
		mas = valor[0]/valor[1] + valor[2];
		std::cout << mas;
	}
	else
	{
		mas = valor[0]/valor[1] + valor[2];
		menos = valor[0]/valor[1] - valor[2];
		std::cout << mas << " " << menos;
	}

}

int main(){
	float valor[3];
	int tam = sizeof(valor) / sizeof(valor[0]);
	for (int i = 0; i < tam; ++i)
	{
		std::cin >> valor[i];
	}
	masomenos(valor);
}