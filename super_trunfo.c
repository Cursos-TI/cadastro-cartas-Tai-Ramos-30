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

//                                          Inicio do cadastro da 1ª carta
    //Letra referente ao estado
    printf("Vamos começar o cadastro da 1ª carta do nosso super trunfo!\n" "Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %1s", estado1);

    // Código da carta 
    printf("Para o código da carta digite letra do estado seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf("%s", &codigodacarta1);

    //Nome da cidade
    printf("Digite o nome da cidade: ");
    getchar();                 // remove o ENTER sobrando
    fgets(cidade1, 20, stdin); // lê o nome da cidade

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

//                                          Inicio do cadastro da 2ª carta
   //Letra referente ao estado
    printf("A primeira carta foi cadastrada com sucesso!\n" "Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %1s", estado2);

    // Código da carta 
    printf("Para o código da carta digite letra do estado seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf("%s", &codigodacarta2);

    //Nome da cidade
    printf("Digite o nome da cidade: ");
    getchar();                 // remove o ENTER sobrando
    fgets(cidade2, 20, stdin); // lê o nome da cidade

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

    return 0;
}