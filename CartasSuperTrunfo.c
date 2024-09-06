#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char A1_Sao_Paulo_SP[70]; 
    char A2_Campinas_SP[70];
    char A3_Ribeirao_Preto_SP[70];
    char A4_SaoJose_dos_Campos_SP[70];
    char B1_Florianopolis_SC[70];
    char B2_Joinville_SC[70];
    char B3_Blumenau_SC[70];
    char B4_Sao_Jose_SC[70];
    char C1_Porto_Alegre_RS[70];
    char C2_Caxias_do_Sul_RS[70];
    char C3_Canoas_RS[70];
    char C4_Pelotas_RS[70];
    char D1_Rio_de_Janeiro_RJ[70];
    char D2_Sao_Goncalo_RJ[70];
    char D3_Duque_de_Caxias_RJ[70];
    char D4_Nova_Iguacu_RJ[70];
    char E1_Curitiba_PR[70];
    char E2_Londrina_PR[70];
    char E3_Maringa_PR[70];
    char E4_Ponta_Grossa_PR[70];
    char F1_Belo_Horizonte_MG[70];
    char F2_Uberladia_MG[70];
    char F3_Contagem_MG[70];
    char F4_Juiz_de_fora_MG[70];
    char G1_Manaus_AM[70];
    char G2_Itacoatiara_AM[70];
    char G3_Manacapuru_AM[70];
    char G4_Parintins_AM[70];
    char H1_Salvador_BA[70];
    char H2_Feira_de_Santana_BA[70];
    char H3_Vitoria_da_Conquista_BA[70];
    char H4_Camacari_BA[70];
    int numero_de_pontos_turisticos_A1;
    int numero_de_pontos_turisticos_A2;
    int numero_de_pontos_turisticos_A3;
    int numero_de_pontos_turisticos_A4;
    int numero_de_pontos_turisticos_B1;
    int numero_de_pontos_turisticos_B2;
    int numero_de_pontos_turisticos_B3;
    int numero_de_pontos_turisticos_B4;
    int numero_de_pontos_turisticos_C1;
    int numero_de_pontos_turisticos_C2;
    int numero_de_pontos_turisticos_C3;
    int numero_de_pontos_turisticos_C4;
    int numero_de_pontos_turisticos_D1;
    int numero_de_pontos_turisticos_D2;
    int numero_de_pontos_turisticos_D3;
    int numero_de_pontos_turisticos_D4;
    int numero_de_pontos_turisticos_E1;
    int numero_de_pontos_turisticos_E2;
    int numero_de_pontos_turisticos_E3;
    int numero_de_pontos_turisticos_E4;
    int numero_de_pontos_turisticos_F1;
    int numero_de_pontos_turisticos_F2;
    int numero_de_pontos_turisticos_F3;
    int numero_de_pontos_turisticos_F4;
    int numero_de_pontos_turisticos_G1;
    int numero_de_pontos_turisticos_G2;
    int numero_de_pontos_turisticos_G3;
    int numero_de_pontos_turisticos_G4;
    int numero_de_pontos_turisticos_H1;
    int numero_de_pontos_turisticos_H2;
    int numero_de_pontos_turisticos_H3;
    int numero_de_pontos_turisticos_H4;
    double populacao_A1;
    double populacao_A2;
    double populacao_A3;
    double populacao_A4;
    double populacao_B1;
    double populacao_B2;
    double populacao_B3;
    double populacao_B4;
    double populacao_C1;
    double populacao_C2;
    double populacao_C3;
    double populacao_C4;
    double populacao_D1;
    double populacao_D2;
    double populacao_D3;
    double populacao_D4;
    double populacao_E1;
    double populacao_E2;
    double populacao_E3;
    double populacao_E4;
    double populacao_F1;
    double populacao_F2;
    double populacao_F3;
    double populacao_F4;
    double populacao_G1;
    double populacao_G2;
    double populacao_G3;
    double populacao_G4;
    double populacao_H1;
    double populacao_H2;
    double populacao_H3;
    double populacao_H4;
    double area_A1;
    double area_A2;
    double area_A3;
    double area_A4;
    double area_B1;
    double area_B2;
    double area_B3;
    double area_B4;
    double area_C1;
    double area_C2;
    double area_C3;
    double area_C4;
    double area_D1;
    double area_D2;
    double area_D3;
    double area_D4;
    double area_E1;
    double area_E2;
    double area_E3;
    double area_E4;
    double area_F1;
    double area_F2;
    double area_F3;
    double area_F4;
    double area_G1;
    double area_G2;
    double area_G3;
    double area_G4;
    double area_H1;
    double area_H3;
    double area_H4;
    double PIB_A1;
    double PIB_A2;
    double PIB_A3;
    double PIB_A4;
    double PIB_B1;
    double PIB_B2;
    double PIB_B3;
    double PIB_B4;
    double PIB_C1;
    double PIB_C2;
    double PIB_C3;
    double PIB_C4;
    double PIB_D1;
    double PIB_D2;
    double PIB_D3;
    double PIB_D4;
    double PIB_E1;
    double PIB_E2;
    double PIB_E3;
    double PIB_E4;
    double PIB_F1;
    double PIB_F2;
    double PIB_F3;
    double PIB_F4;
    double PIB_G1;
    double PIB_G2;
    double PIB_G3;
    double PIB_G4;
    double PIB_H1;
    double PIB_H2;
    double PIB_H3;
    double PIB_H4;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("A1 São Paulo - SP %s", A1_Sao_Paulo_SP);
    printf("digite o nº de pontos turísticos: %d", numero_de_pontos_turisticos_A1);
    scanf("%d", &numero_de_pontos_turisticos_A1);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
