#include <stdio.h>
//quebrei a cabeça tentando uma forma melhor de fazer
//mais ainda sei muito pouco sobre loops e como aplicar
//não consegui encaixar um loop
//também não consigo diminuir a quantidade de repetições
int main(){
    char estado[20]; 
    char codigodacarta[20];
    char cidade[20];
    float popular;
    float area;
    float pib;
    int pontotur;
    float percapita;
    float densidadepopular;
    
    printf("digite estado:\n");
    scanf("%s", &estado);
    printf("digite Código da Carta:\n");
    scanf("%s", &codigodacarta);
    printf("digite Cidade:\n");
    scanf("%s", &cidade);
    printf("digite População:\n");
    scanf("%f", &popular);
    printf("digite Área:\n");
    scanf("%f", &area);
    printf("digite PIB:\n");
    scanf("%f", &pib);
    printf("digite N pontos Turísticos:\n");
    scanf("%i", &pontotur);
    //essa implementação fiz em uma tacada só
    percapita = popular/pib;
    densidadepopular = popular/area;
    //eu chutei que o cálculo de variáveis seria algo simples
    printf("Carta registrada!\n");
    printf("estado:%s\n",estado);
    printf("Código:%s\n",codigodacarta);
    printf("Cidade:%s\n",cidade);
    printf("População:%.3f\n",popular);
    printf("Àrea:%.3f\n",area);
    printf("PIB:%.3f\n",pib);
    printf("Pontos Turísticos:%i\n",pontotur);
    printf("Percapita: %.f\n",percapita);
    printf("Densidade Populacional: %.f\n",densidadepopular);
    
    return 0;
}