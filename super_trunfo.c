#include <stdio.h>




int main(){
/*                                        Declaração de variáveis 1ª carta
 Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 População: O número de habitantes da cidade. Tipo: int
 Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 PIB: O Produto Interno Bruto da cidade. Tipo: float
 Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/
    char estado1[2];
    char codigodacarta1[4];  
    char cidade1[20];
    int populacao1;
    float area1;  
    float pib1;
    int pturisticos1;  
    float densidade1;  // Polulação dividido pela area da cidade
    float pibper1;     // PIB dividido pela população
    float superpoder1; // soma de todos os outros


 //                                         Declaração de variáveis da 2ª carta  


    char estado2[3];
    char codigodacarta2[3];  
    char cidade2[20];
    int populacao2;
    float area2;  
    float pib2;
    int pturisticos2;
    float densidade2; // Polulação dividido pela area da cidade
    float pibper2;    // PIB dividido pela população
    float superpoder2; // soma de todos os outros


//                                          Inicio do cadastro da 1ª carta
    //Letra referente ao estado
    printf("Vamos começar o cadastro da 1ª carta do nosso super trunfo!\n" "Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %1s", estado1);


    // Código da carta
    printf("Para o código da carta digite letra do estado seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf("%s", &codigodacarta1);


    //Nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s",cidade1);


    // População
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);


    //Área
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);


    //PIB
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);


    //Pontos turísticos
    printf("Digite o número de pontos turísticos na cidade: ");
    scanf("%d", &pturisticos1);


    densidade1 = (float)populacao1 / area1;
    pibper1 = pib1 * 1000000000 / (float)populacao1;
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) pturisticos1 + pibper1 + (1.0f / densidade1);


//                                          Inicio do cadastro da 2ª carta
   //Letra referente ao estado
    printf("A primeira carta foi cadastrada com sucesso!\n" "Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %1s", estado2);


    // Código da carta
    printf("Para o código da carta digite letra do estado seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf("%s", &codigodacarta2);


    //Nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s",cidade2);


    // População
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);


    //Área
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);


    //PIB
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);


    //Pontos turísticos
    printf("Digite o número de pontos turísticos na cidade: ");
    scanf("%d", &pturisticos2);  


    //Resultado do cadastro


    printf("Parabéns! Você conclui o cadastro das 2 cartas do super trunfo.\n");


    densidade2 = (float)populacao2 / area2;
    pibper2 = pib2 * 1000000000 / (float)populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pturisticos2 + pibper2 + (1.0f / densidade2);


     // Exibição da Carta 1
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pturisticos1);
    printf("Densidade popilacional: %.2f hab/km²\n" , densidade1);
    printf("PIB per Capita: %.2f reais\n" , pibper1);
    printf("Super Poder da Carta 1: %.2f\n", superpoder1);


    // Exibição da Carta 2
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pturisticos2);
    printf("Densidade popilacional: %.2f hab/km²\n" , densidade2);
    printf("PIB per Capita: %.2f reais\n" , pibper2);
    printf("Super Poder da Carta 2: %.2f\n", superpoder2);


/*Exemplo de Saída:
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais


Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 44532.91 reais         */


    // comparações
/* comparando o valor de população */    
    printf("\n===== Comparacao de Cartas =====\n");
    printf("Comparação de cartas (Atributo: População):\n\n");


    printf("Carta 1 - %s: %d habitantes\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n\n", cidade2, populacao2);


if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
}
else if (populacao2 > populacao1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}
else {
    printf("Resultado: Empate!\n");
}


// comparando o valor de Área
    printf("Comparação de cartas (Atributo: Área):\n\n");


    printf("Carta 1 - %s: %f km² \n", cidade1, area1);
    printf("Carta 2 - %s: %f km²\n\n", cidade2, area2);


if (area1 > area2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
}
else if (area1 > area2) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}
else {
    printf("Resultado: Empate!\n");
}
// comparando pib
    printf("Comparação de cartas (Atributo: PIB):\n\n");


    printf("Carta 1 - %s: %f bilhões de reais \n", cidade1, pib1);
    printf("Carta 2 - %s: %f bilhões de reais\n\n", cidade2, pib2);


if (pib1 > pib2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
}
else if (pib1 > pib2) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}
else {
    printf("Resultado: Empate!\n");
}
// comparanto pontos turísticos
   printf("Comparação de cartas (Atributo: Pontos turísticos):\n\n");


    printf("Carta 1 - %s: %d pontos turísticos \n", cidade1, pturisticos1);
    printf("Carta 2 - %s: %d pontos turísticos\n\n", cidade2, pturisticos2);


if (pturisticos1 > pturisticos2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
}
else if (pturisticos1 > pturisticos2) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}
else {
    printf("Resultado: Empate!\n");
}
// comparando densidade populacional
 printf("Comparação de cartas (Atributo: densidade populacional):\n\n");


    printf("Carta 1 - %s: %f hab/km² \n", cidade1, densidade1);
    printf("Carta 2 - %s: %f hab/km²\n\n", cidade2, densidade2);


if (densidade1 < densidade2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
}
else
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);




   
// comparando PIB per Capita
printf("Comparação de cartas (Atributo: PIB per Capita):\n\n");


    printf("Carta 1 - %s: %f reais \n", cidade1, densidade1);
    printf("Carta 2 - %s: %f reais\n\n", cidade2, densidade2);


if (pibper1 > pibper2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
}
else if (pibper1 > pibper2) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}
else {
    printf("Resultado: Empate!\n");
}




return 0;
}

