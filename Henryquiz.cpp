#include <stdio.h>

void limpa(){
	scanf("%*[^\n]");
	scanf("%*c");
}
int main()
{
	char resposta;
	int nota;
	printf("Quiz tecnologia digite a alternativa carreta.\n");
	printf("pergunta 1:Qual � a t�cnica de agricultura que utiliza a �gua de maneira inteligente e eficiente, reduzindo o consumo de �gua em at� 70% em rela��o � agricultura convencional? \n  A - Aquaponia \n B - B \n C - C \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='a'|| resposta=='A'){
		nota+=1;
	}
	limpa();
	
		printf("pergunta 2:Que tipo de painel solar usa lentes para concentrar a luz do sol em c�lulas fotovoltaicas menores, produzindo eletricidade de forma mais eficiente do que os pain�is solares convencionais?\n A - A \n B - B \n B - Concentrador solar \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='b' || resposta=='B'){
		nota+=1;
	}
	limpa();
	
		printf("pergunta 3:Qual � a t�cnica que consiste em criar hortas em espa�os urbanos, aproveitando �reas ociosas para produzir alimentos frescos e saud�veis?\n A - A \n B - B \n C - Agricultura urbana \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='c'|| resposta=='C'){
		nota+=1;
	}
	limpa();
	
		printf("pergunta 4:Qual � o nome do processo de convers�o de res�duos org�nicos em adubo, que ajuda a reduzir a quantidade de lixo e a fertilizar o solo de forma natural?\n A - Compostagem \n B - B \n C - C \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='a'|| resposta=='A'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 5:Que tipo de energia � gerada a partir do movimento das ondas do mar?\n A - A \n B - B \n C - C \n D - Energia das ondas \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='d'|| resposta=='D'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 6:Qual � a t�cnica de constru��o de casas e edif�cios que utiliza materiais reciclados ou reaproveitados, com o objetivo de reduzir o impacto ambiental da constru��o civil? \n A - A \n  B - Constru��o sustent�vel \n C - C \n D - D \n \nResposta:" );
	scanf("%c", &resposta);
	
	if(resposta=='c'|| resposta=='C'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 7:Que tipo de transporte utiliza a for�a muscular humana, seja atrav�s de bicicletas, patinetes ou outros meios de locomo��o?\n A - A \n B - B \n C - Transporte ativo \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='c'|| resposta=='C'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 8:Qual � o processo de filtragem de �gua que utiliza uma s�rie de camadas de materiais naturais, como areia, carv�o ativado e cascalho, para remover impurezas e poluentes da �gua?\n A - Filtra��o natural \n B - B \n C - C \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='a'|| resposta=='A'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 9:Que tipo de energia � gerada a partir do calor produzido pelo n�cleo da Terra? \n A - A \n B - B \n C - C \n D - Energia geot�rmica \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='D'|| resposta=='d'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 10:pergunta 4:Qual � o nome do processo de convers�o de res�duos org�nicos em adubo, que ajuda a reduzir a quantidade de lixo e a fertilizar o solo de forma natural?\n A - Compostagem \n B - B \n C - C \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='a'|| resposta=='A'){
		nota+=1;
	}

	limpa();
	
	printf("seu resultado e = %d", nota);
	
	return (0);
	
	
}
