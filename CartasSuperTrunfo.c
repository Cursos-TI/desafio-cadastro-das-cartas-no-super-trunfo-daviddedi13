#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //CARTA 01 MINAS GERAIS
    int PopulacaoMG = 200000;
    int PontosTuristicosMG = 100;
    char EstadoMG[20] = "Minas Gerais";
    char CidadeMG[50] = "Belo Horizonte";
    float AreakmMG = 6;
    float PIBMG = 25000000;//25 milhoes
    char CartaMG[50] = "MG";
    char CodigodaCartaMG[50] = "A01";

    //CARTA 02 ESPIRITO SANTO
    int PopulacaoES = 3000000;
    int PontosTuristicosES = 120;
    char EstadoES[15] = "Espirito Santo";
    char CidadeES[10] = "Vitoria";
    float AreakmES = 70;
    float PIBES = 20000000;// 20 milhoes
    char CartaES[3] = "ES";
    char CodigodaCartaES[50] = "B02";

    //CARTA A01 MINAS GERAIS
    printf("Carta: %s\n", CartaMG);
    printf("Estado: %s\n", EstadoMG);
    printf("Código: %s\n", CodigodaCartaMG);
    printf("Nome da Cidade: %s\n", CidadeMG);
    printf("População: %d\n", PopulacaoMG);
    printf("Area por km²: %.3f\n", AreakmMG);
    printf("PIB: %.2f\n", PIBMG);
    printf("Pontos Turisticos: %d\n\n", PontosTuristicosMG);
 
    //CARTA B02 ESPIRITO SANTO
  
    printf("Carta: %s\n", CartaES);
    printf("Estado: %s\n", EstadoES);
    printf("Código: %s\n", CodigodaCartaES);
    printf("Nome da Cidade: %s\n", CidadeES);
    printf("População: %d\n", PopulacaoES);
    printf("Area por km²: %.3f\n", AreakmES);
    printf("PIB: %.2f\n", PIBES);
    printf("Pontos Turisticos: %d\n", PontosTuristicosES);
    
















    
    






    return 0;
}
