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
	printf("pergunta 1:Qual é a técnica de agricultura que utiliza a água de maneira inteligente e eficiente, reduzindo o consumo de água em até 70% em relação à agricultura convencional? \n  A - Aquaponia \n B - B \n C - C \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='a'|| resposta=='A'){
		nota+=1;
	}
	limpa();
	
		printf("pergunta 2:Que tipo de painel solar usa lentes para concentrar a luz do sol em células fotovoltaicas menores, produzindo eletricidade de forma mais eficiente do que os painéis solares convencionais?\n A - A \n B - B \n B - Concentrador solar \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='b' || resposta=='B'){
		nota+=1;
	}
	limpa();
	
		printf("pergunta 3:Qual é a técnica que consiste em criar hortas em espaços urbanos, aproveitando áreas ociosas para produzir alimentos frescos e saudáveis?\n A - A \n B - B \n C - Agricultura urbana \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='c'|| resposta=='C'){
		nota+=1;
	}
	limpa();
	
		printf("pergunta 4:Qual é o nome do processo de conversão de resíduos orgânicos em adubo, que ajuda a reduzir a quantidade de lixo e a fertilizar o solo de forma natural?\n A - Compostagem \n B - B \n C - C \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='a'|| resposta=='A'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 5:Que tipo de energia é gerada a partir do movimento das ondas do mar?\n A - A \n B - B \n C - C \n D - Energia das ondas \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='d'|| resposta=='D'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 6:Qual é a técnica de construção de casas e edifícios que utiliza materiais reciclados ou reaproveitados, com o objetivo de reduzir o impacto ambiental da construção civil? \n A - A \n  B - Construção sustentável \n C - C \n D - D \n \nResposta:" );
	scanf("%c", &resposta);
	
	if(resposta=='c'|| resposta=='C'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 7:Que tipo de transporte utiliza a força muscular humana, seja através de bicicletas, patinetes ou outros meios de locomoção?\n A - A \n B - B \n C - Transporte ativo \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='c'|| resposta=='C'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 8:Qual é o processo de filtragem de água que utiliza uma série de camadas de materiais naturais, como areia, carvão ativado e cascalho, para remover impurezas e poluentes da água?\n A - Filtração natural \n B - B \n C - C \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='a'|| resposta=='A'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 9:Que tipo de energia é gerada a partir do calor produzido pelo núcleo da Terra? \n A - A \n B - B \n C - C \n D - Energia geotérmica \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='D'|| resposta=='d'){
		nota+=1;
	}

	limpa();
	
		printf("pergunta 10:pergunta 4:Qual é o nome do processo de conversão de resíduos orgânicos em adubo, que ajuda a reduzir a quantidade de lixo e a fertilizar o solo de forma natural?\n A - Compostagem \n B - B \n C - C \n D - D \n \nResposta:" );
	scanf("%c", &resposta);

	if(resposta=='a'|| resposta=='A'){
		nota+=1;
	}

	limpa();
	
	printf("seu resultado e = %d", nota);
	
	return (0);
	
	
}
