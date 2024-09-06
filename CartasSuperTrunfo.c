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
    char A3_Ribeirão_Preto_SP[70];
    char A4_SãoJosé_dos_Campos_SP[70];
    char B1_Florianópolis_SC[70];
    char B2_Joinville_SC[70];
    char B3_Blumenau_SC[70];
    char B4_São_José_SC[70];
    char C1_Porto_Alegre_RS[70];
    char C2_Caxias_do_Sul_RS[70];
    char C3_Canoas_RS[70];
    char C4_Pelotas_RS[70];
    char D1_Rio_de_Janeiro_RJ[70];
    char D2_São_Gonçalo_RJ[70];
    char D3_Duque_de_Caxias_RJ[70];
    char D4_Nova_Iguaçu_RJ[70];
    char E1_Curitiba_PR[70];
    char E2_Londrina_PR[70];
    char E3_Maringá_PR[70];
    char E4_Ponta_Grossa_PR[70];
    char F1_Belo_Horizonte_MG[70];
    char F2_Uberlândia_MG[70];
    char F3_Contagem_MG[70];
    char F4_Juiz_de_fora_MG[70];
    char G1_Manaus_AM[70];
    char G2_Itacoatiara_AM[70];
    char G3_Manacapuru_AM[70];
    char G4_Parintins_AM[70];
    char H1_Salvador_BA[70];
    char H2_Feira_de_Santana_BA[70];
    char H3_Vitória_da_Conquista_BA[70];
    char H4_Camaçari_BA[70];
    int número_de_pontos_turísticos_A1;
    int número_de_pontos_turísticos_A2;
    int número_de_pontos_turísticos_A3;
    int número_de_pontos_turísticos_A4;
    int número_de_pontos_turísticos_B1;
    int número_de_pontos_turísticos_B2;
    int número_de_pontos_turísticos_B3;
    int número_de_pontos_turísticos_B4;
    int número_de_pontos_turísticos_C1;
    int número_de_pontos_turísticos_C2;
    int número_de_pontos_turísticos_C3;
    int número_de_pontos_turísticos_C4;
    int número_de_pontos_turísticos_D1;
    int número_de_pontos_turísticos_D2;
    int número_de_pontos_turísticos_D3;
    int número_de_pontos_turísticos_D4;
    int número_de_pontos_turísticos_E1;
    int número_de_pontos_turísticos_E2;
    int número_de_pontos_turísticos_E3;
    int número_de_pontos_turísticos_E4;
    int número_de_pontos_turísticos_F1;
    int número_de_pontos_turísticos_F2;
    int número_de_pontos_turísticos_F3;
    int número_de_pontos_turísticos_F4;
    int número_de_pontos_turísticos_G1;
    int número_de_pontos_turísticos_G2;
    int número_de_pontos_turísticos_G3;
    int número_de_pontos_turísticos_G4;
    int número_de_pontos_turísticos_H1;
    int número_de_pontos_turísticos_H2;
    int número_de_pontos_turísticos_H3;
    int número_de_pontos_turísticos_H4;
    double população_A1;
    double população_A2;
    double população_A3;
    double população_A4;
    double população_B1;
    double população_B2;
    double população_B3;
    double população_B4;
    double população_C1;
    double população_C2;
    double população_C3;
    double população_C4;
    double população_D1;
    double população_D2;
    double população_D3;
    double população_D4;
    double população_E1;
    double população_E2;
    double população_E3;
    double população_E4;
    double população_F1;
    double população_F2;
    double população_F3;
    double população_F4;
    double população_G1;
    double população_G2;
    double população_G3;
    double população_G4;
    double população_H1;
    double população_H2;
    double população_H3;
    double população_H4;
    double área_A1;
    double área_A2;
    double área_A3;
    double área_A4;
    double área_B1;
    double área_B2;
    double área_B3;
    double área_B4;
    double área_C1;
    double área_C2;
    double área_C3;
    double área_C4;
    double área_D1;
    double área_D2;
    double área_D3;
    double área_D4;
    double área_E1;
    double área_E2;
    double área_E3;
    double área_E4;
    double área_F1;
    double área_F2;
    double área_F3;
    double área_F4;
    double área_G1;
    double área_G2;
    double área_G3;
    double área_G4;
    double área_H1;
    double área_H3;
    double área_H4;
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
    printf("digite o nº de pontos turísticos: %d", número_de_pontos_turísticos_A1);
    scanf("%d", &número_de_pontos_turísticos_A1);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
