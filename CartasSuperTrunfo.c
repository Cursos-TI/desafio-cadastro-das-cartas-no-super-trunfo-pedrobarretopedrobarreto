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
    char F2_Uberlandia_MG[70];
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

    printf("A1 São Paulo - SP %s\n", A1_Sao_Paulo_SP);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_A1);
    scanf("%f", &numero_de_pontos_turisticos_A1);
    printf("Digite a quantidade de população:%f\n", populacao_A1);
    scanf("%f", &populacao_A1);
    printf("Digite a área: %d\n", area_A1);
    scanf("%d", &area_A1);
    printf("Digite o PIB: %d\n", PIB_A1);
    scanf("%d", &PIB_A1);

    printf("A2 Campinas - SP %s\n", A2_Campinas_SP);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_A2);
    scanf("%f", &numero_de_pontos_turisticos_A2);
    printf("Digite a quantidade de população:%f\n", populacao_A2);
    scanf("%f", &populacao_A2);
    printf("Digite a área: %d\n", area_A2);
    scanf("%d", &area_A2);
    printf("Digite o PIB: %d\n", PIB_A2);
    scanf("%d", &PIB_A2);

    printf("A3 Ribeirão Preto - SP %s\n", A3_Ribeirao_Preto_SP);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_A3);
    scanf("%f", &numero_de_pontos_turisticos_A3);
    printf("Digite a quantidade de população:%f\n", populacao_A3);
    scanf("%f", &populacao_A3);
    printf("Digite a área: %d\n", area_A3);
    scanf("%d", &area_A3);
    printf("Digite o PIB: %d\n", PIB_A3);
    scanf("%d", &PIB_A3);

    printf("A4 São José dos Campos - SP %s\n", A4_SaoJose_dos_Campos_SP);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_A4);
    scanf("%f", &numero_de_pontos_turisticos_A4);
    printf("Digite a quantidade de população:%f\n", populacao_A4);
    scanf("%f", &populacao_A4);
    printf("Digite a área: %d\n", area_A4);
    scanf("%d", &area_A4);
    printf("Digite o PIB: %d\n", PIB_A4);
    scanf("%d", &PIB_A4);

    printf("B1 Florianópolis - SC %s\n", B1_Florianopolis_SC);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_B1);
    scanf("%f", &numero_de_pontos_turisticos_B1);
    printf("Digite a quantidade de população:%f\n", populacao_B1);
    scanf("%f", &populacao_B1);
    printf("Digite a área: %d\n", area_B1);
    scanf("%d", &area_B1);
    printf("Digite o PIB: %d\n", PIB_B1);
    scanf("%d", &PIB_B1);

    printf("B2 Joinville - SC %s\n", B2_Joinville_SC);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_B2);
    scanf("%f", &numero_de_pontos_turisticos_B2);
    printf("Digite a quantidade de população:%f\n", populacao_B2);
    scanf("%f", &populacao_B2);
    printf("Digite a área: %d\n", area_B2);
    scanf("%d", &area_B2);
    printf("Digite o PIB: %d\n", PIB_B2);
    scanf("%d", &PIB_B2);

    printf("B3 Blumenau - SC %s\n", B3_Blumenau_SC);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_B3);
    scanf("%f", &numero_de_pontos_turisticos_B3);
    printf("Digite a quantidade de população:%f\n", populacao_B3);
    scanf("%f", &populacao_B3);
    printf("Digite a área: %d\n", area_B3);
    scanf("%d", &area_B3);
    printf("Digite o PIB: %d\n", PIB_B3);
    scanf("%d", &PIB_B3);

    printf("B4 São José - SC %s\n", B4_Sao_Jose_SC);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_B4);
    scanf("%f", &numero_de_pontos_turisticos_B4);
    printf("Digite a quantidade de população:%f\n", populacao_B4);
    scanf("%f", &populacao_B4);
    printf("Digite a área: %d\n", area_B4);
    scanf("%d", &area_B4);
    printf("Digite o PIB: %d\n", PIB_B4);
    scanf("%d", &PIB_B4);

    printf("C1 Porto Alegre - RS %s\n", C1_Porto_Alegre_RS);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_C1);
    scanf("%f", &numero_de_pontos_turisticos_C1);
    printf("Digite a quantidade de população:%f\n", populacao_C1);
    scanf("%f", &populacao_C1);
    printf("Digite a área: %d\n", area_C1);
    scanf("%d", &area_C1);
    printf("Digite o PIB: %d\n", PIB_C1);
    scanf("%d", &PIB_C1);

    printf("C2 Caxias do Sul - RS %s\n", C2_Caxias_do_Sul_RS);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_C2);
    scanf("%f", &numero_de_pontos_turisticos_C2);
    printf("Digite a quantidade de população:%f\n", populacao_C2);
    scanf("%f", &populacao_C2);
    printf("Digite a área: %d\n", area_C2);
    scanf("%d", &area_C2);
    printf("Digite o PIB: %d\n", PIB_C2);
    scanf("%d", &PIB_C2);

    printf("C3 Canoas - RS %s\n", C3_Canoas_RS);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_C3);
    scanf("%f", &numero_de_pontos_turisticos_C3);
    printf("Digite a quantidade de população:%f\n", populacao_C3);
    scanf("%f", &populacao_C3);
    printf("Digite a área: %d\n", area_C3);
    scanf("%d", &area_C3);
    printf("Digite o PIB: %d\n", PIB_C3);
    scanf("%d", &PIB_C3);

    printf("C3 Pelotas - RS%s\n", C4_Pelotas_RS);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_C4);
    scanf("%f", &numero_de_pontos_turisticos_C4);
    printf("Digite a quantidade de população:%f\n", populacao_C4);
    scanf("%f", &populacao_C4);
    printf("Digite a área: %d\n", area_C4);
    scanf("%d", &area_C4);
    printf("Digite o PIB: %d\n", PIB_C4);
    scanf("%d", &PIB_C4);

    printf("D1 Rio de Janeiro - RJ %s\n", D1_Rio_de_Janeiro_RJ);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_D1);
    scanf("%f", &numero_de_pontos_turisticos_D1);
    printf("Digite a quantidade de população:%f\n", populacao_D1);
    scanf("%f", &populacao_D1);
    printf("Digite a área: %d\n", area_D1);
    scanf("%d", &area_D1);
    printf("Digite o PIB: %d\n", PIB_D1);
    scanf("%d", &PIB_D1);

    printf("D2 São Gonçalo - RJ %s\n", D2_Sao_Goncalo_RJ);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_D2);
    scanf("%f", &numero_de_pontos_turisticos_D2);
    printf("Digite a quantidade de população:%f\n", populacao_D2);
    scanf("%f", &populacao_D2);
    printf("Digite a área: %d\n", area_D2);
    scanf("%d", &area_D2);
    printf("Digite o PIB: %d\n", PIB_D2);
    scanf("%d", &PIB_D2);

    printf("D3 Duque de Caixias - RJ %s\n", D3_Duque_de_Caxias_RJ);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_D3);
    scanf("%f", &numero_de_pontos_turisticos_D3);
    printf("Digite a quantidade de população:%f\n", populacao_D3);
    scanf("%f", &populacao_D3);
    printf("Digite a área: %d\n", area_D3);
    scanf("%d", &area_D3);
    printf("Digite o PIB: %d\n", PIB_D3);
    scanf("%d", &PIB_D3);

    printf("D4 Nova Iguaçu - RJ %s\n", D4_Nova_Iguacu_RJ);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_D4);
    scanf("%f", &numero_de_pontos_turisticos_D4);
    printf("Digite a quantidade de população:%f\n", populacao_D4);
    scanf("%f", &populacao_D4);
    printf("Digite a área: %d\n", area_D4);
    scanf("%d", &area_D4);
    printf("Digite o PIB: %d\n", PIB_D4);
    scanf("%d", &PIB_D4);

    printf("E1 Curitiba - PR %s\n", E1_Curitiba_PR);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_E1);
    scanf("%f", &numero_de_pontos_turisticos_E1);
    printf("Digite a quantidade de população:%f\n", populacao_E1);
    scanf("%f", &populacao_E1);
    printf("Digite a área: %d\n", area_E1);
    scanf("%d", &area_E1);
    printf("Digite o PIB: %d\n", PIB_E1);
    scanf("%d", &PIB_E1);

    printf("E2 Londria - PR %s\n", E2_Londrina_PR);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_E2);
    scanf("%f", &numero_de_pontos_turisticos_E2);
    printf("Digite a quantidade de população:%f\n", populacao_E2);
    scanf("%f", &populacao_E2);
    printf("Digite a área: %d\n", area_E2);
    scanf("%d", &area_E2);
    printf("Digite o PIB: %d\n", PIB_E2);
    scanf("%d", &PIB_E2);

    printf("E3 Maringá - PR %s\n", E3_Maringa_PR);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_E3);
    scanf("%f", &numero_de_pontos_turisticos_E3);
    printf("Digite a quantidade de população:%f\n", populacao_E3);
    scanf("%f", &populacao_E3);
    printf("Digite a área: %d\n", area_E3);
    scanf("%d", &area_E3);
    printf("Digite o PIB: %d\n", PIB_E3);
    scanf("%d", &PIB_E3);

    printf("E4 Ponta Grossa - PR %s\n", E4_Ponta_Grossa_PR);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_E4);
    scanf("%f", &numero_de_pontos_turisticos_E4);
    printf("Digite a quantidade de população:%f\n", populacao_E4);
    scanf("%f", &populacao_E4);
    printf("Digite a área: %d\n", area_E4);
    scanf("%d", &area_E4);
    printf("Digite o PIB: %d\n", PIB_E4);
    scanf("%d", &PIB_E4);

    printf("F1 Belo Horizonte - MG %s\n", F1_Belo_Horizonte_MG);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_F1);
    scanf("%f", &numero_de_pontos_turisticos_F1);
    printf("Digite a quantidade de população:%f\n", populacao_F1);
    scanf("%f", &populacao_F1);
    printf("Digite a área: %d\n", area_F1);
    scanf("%d", &area_F1);
    printf("Digite o PIB: %d\n", PIB_F1);
    scanf("%d", &PIB_F1);

    printf("F2 Uberlândia- MG %s\n", F2_Uberlandia_MG);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_F2);
    scanf("%f", &numero_de_pontos_turisticos_F2);
    printf("Digite a quantidade de população:%f\n", populacao_F2);
    scanf("%f", &populacao_F2);
    printf("Digite a área: %d\n", area_F2);
    scanf("%d", &area_F2);
    printf("Digite o PIB: %d\n", PIB_F2);
    scanf("%d", &PIB_F2);

    printf("F3 Contagem - MG %s\n", F3_Contagem_MG);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_F3);
    scanf("%f", &numero_de_pontos_turisticos_F3);
    printf("Digite a quantidade de população:%f\n", populacao_F3);
    scanf("%f", &populacao_F3);
    printf("Digite a área: %d\n", area_F3);
    scanf("%d", &area_F3);
    printf("Digite o PIB: %d\n", PIB_F3);
    scanf("%d", &PIB_F3);

    printf("F4 Juíz de Fora - MG %s\n", F4_Juiz_de_fora_MG);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_F4);
    scanf("%f", &numero_de_pontos_turisticos_F4);
    printf("Digite a quantidade de população:%f\n", populacao_F4);
    scanf("%f", &populacao_F4);
    printf("Digite a área: %d\n", area_F4);
    scanf("%d", &area_F4);
    printf("Digite o PIB: %d\n", PIB_F4);
    scanf("%d", &PIB_F4);
    
    printf("G1 Manaus - AM %s\n", G1_Manaus_AM);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_G1);
    scanf("%f", &numero_de_pontos_turisticos_G1);
    printf("Digite a quantidade de população:%f\n", populacao_G1);
    scanf("%f", &populacao_G1);
    printf("Digite a área: %d\n", area_G1);
    scanf("%d", &area_G1);
    printf("Digite o PIB: %d\n", PIB_G1);
    scanf("%d", &PIB_G1);

    printf("G2 Itacoatiara - AM %s\n", G2_Itacoatiara_AM);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_G2);
    scanf("%f", &numero_de_pontos_turisticos_G2);
    printf("Digite a quantidade de população:%f\n", populacao_G2);
    scanf("%f", &populacao_G2);
    printf("Digite a área: %d\n", area_G2);
    scanf("%d", &area_G2);
    printf("Digite o PIB: %d\n", PIB_G2);
    scanf("%d", &PIB_G2);

    printf("G3 Manacapuru - AM %s\n", G3_Manacapuru_AM);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_G3);
    scanf("%f", &numero_de_pontos_turisticos_G3);
    printf("Digite a quantidade de população:%f\n", populacao_G3);
    scanf("%f", &populacao_G3);
    printf("Digite a área: %d\n", area_G3);
    scanf("%d", &area_G3);
    printf("Digite o PIB: %d\n", PIB_G3);
    scanf("%d", &PIB_G3);

    printf("G4 Parintins - AM %s\n", G4_Parintins_AM);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_G4);
    scanf("%f", &numero_de_pontos_turisticos_G4);
    printf("Digite a quantidade de população:%f\n", populacao_G4);
    scanf("%f", &populacao_G4);
    printf("Digite a área: %d\n", area_G4);
    scanf("%d", &area_G4);
    printf("Digite o PIB: %d\n", PIB_G4);
    scanf("%d", &PIB_G4);

    printf("H1 Salvador - BA %s\n", H1_Salvador_BA);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_H1);
    scanf("%f", &numero_de_pontos_turisticos_H1);
    printf("Digite a quantidade de população:%f\n", populacao_H1);
    scanf("%f", &populacao_H1);
    printf("Digite a área: %d\n", area_H1);
    scanf("%d", &area_H1);
    printf("Digite o PIB: %d\n", PIB_H1);
    scanf("%d", &PIB_H1);

    printf("H2 Feira de Santana - BA %s\n", H2_Feira_de_Santana_BA);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_H2);
    scanf("%f", &numero_de_pontos_turisticos_H2);
    printf("Digite a quantidade de população:%f\n", populacao_H2);
    scanf("%f", &populacao_H2);
    printf("Digite a área: %d\n", area_H2);
    scanf("%d", &area_H2);
    printf("Digite o PIB: %d\n", PIB_H2);
    scanf("%d", &PIB_H2);

    printf("H3 Vitória da Conquista - BA %s\n", H3_Vitoria_da_Conquista_BA);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_H3);
    scanf("%f", &numero_de_pontos_turisticos_H3);
    printf("Digite a quantidade de população:%f\n", populacao_H3);
    scanf("%f", &populacao_H3);
    printf("Digite a área: %d\n", area_H3);
    scanf("%d", &area_H3);
    printf("Digite o PIB: %d\n", PIB_H3);
    scanf("%d", &PIB_H3);

    printf("H4 Camacari - BA %s\n", H4_Camacari_BA);
    printf("Digite o nº de pontos turísticos:%f\n", numero_de_pontos_turisticos_H4);
    scanf("%f", &numero_de_pontos_turisticos_H4);
    printf("Digite a quantidade de população:%f\n", populacao_H4);
    scanf("%f", &populacao_H4);
    printf("Digite a área: %d\n", area_H4);
    scanf("%d", &area_H4);
    printf("Digite o PIB: %d\n", PIB_H4);
    scanf("%d", &PIB_H4);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
