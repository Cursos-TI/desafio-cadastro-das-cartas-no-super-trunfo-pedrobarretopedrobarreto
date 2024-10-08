#include <stdio.h>

// Desafio Super Trunfo - Países - Nível Intermediário
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//  **Densidade Populacional:** População dividida pela área da cidade.
// - **PIB per Capita:** PIB total dividido pela população

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Meu comentário: nessa parte em baixo cadastrei cada variável que precisaria utilizar para os nomes
    // das cidades e atributos de cada cidade. Para isso precisa "alocar" espaço para cada informação que
    // fosse digitada pelo usuário para salvar em scanf e assim precisaria ter um espaço(que no caso é uma variável)
    // para armazenar as informações inseridas. Cada espaço desse precisa ser registrado com algum nome
    // que faça sentido para o que ele está armazenando, ficando assim fácil identificação. Para isso registrei
    // em cada cidade um código e em cada atributo o código da cidade que ele representa. Nas variáveis dos atributos 
    // e até mesmo das cidades poderia ter usada a mesma linha para por mais de uma variável, porém para execução
    // e organização do projeto achei melhor fazer um por linha. Essa primeira parte é o momento de declaração das variáveis.
    // Como seria necessário para os atributos salvar informações com scanf não deveria inicializar as váriaveis dos mesmos.
    // Também não identifiquei necessidade de incializar as variáveis dos nomes das cidades.
    // Para o nível intermediário criei variáveis para o atributos densidade populacional e PIB per capita
    // com tipo de dados double para não ter erro em relação a casas decimais.

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
    int populacao_A1;
    int populacao_A2;
    int populacao_A3;
    int populacao_A4;
    int populacao_B1;
    int populacao_B2;
    int populacao_B3;
    int populacao_B4;
    int populacao_C1;
    int populacao_C2;
    int populacao_C3;
    int populacao_C4;
    int populacao_D1;
    int populacao_D2;
    int populacao_D3;
    int populacao_D4;
    int populacao_E1;
    int populacao_E2;
    int populacao_E3;
    int populacao_E4;
    int populacao_F1;
    int populacao_F2;
    int populacao_F3;
    int populacao_F4;
    int populacao_G1;
    int populacao_G2;
    int populacao_G3;
    int populacao_G4;
    int populacao_H1;
    int populacao_H2;
    int populacao_H3;
    int populacao_H4;
    int area_A1;
    int area_A2;
    int area_A3;
    int area_A4;
    int area_B1;
    int area_B2;
    int area_B3;
    int area_B4;
    int area_C1;
    int area_C2;
    int area_C3;
    int area_C4;
    int area_D1;
    int area_D2;
    int area_D3;
    int area_D4;
    int area_E1;
    int area_E2;
    int area_E3;
    int area_E4;
    int area_F1;
    int area_F2;
    int area_F3;
    int area_F4;
    int area_G1;
    int area_G2;
    int area_G3;
    int area_G4;
    int area_H1;
    int area_H2;
    int area_H3;
    int area_H4;
    int PIB_A1;
    int PIB_A2;
    int PIB_A3;
    int PIB_A4;
    int PIB_B1;
    int PIB_B2;
    int PIB_B3;
    int PIB_B4;
    int PIB_C1;
    int PIB_C2;
    int PIB_C3;
    int PIB_C4;
    int PIB_D1;
    int PIB_D2;
    int PIB_D3;
    int PIB_D4;
    int PIB_E1;
    int PIB_E2;
    int PIB_E3;
    int PIB_E4;
    int PIB_F1;
    int PIB_F2;
    int PIB_F3;
    int PIB_F4;
    int PIB_G1;
    int PIB_G2;
    int PIB_G3;
    int PIB_G4;
    int PIB_H1;
    int PIB_H2;
    int PIB_H3;
    int PIB_H4;
    double densidade_populacional_A1;
    double densidade_populacional_A2;
    double densidade_populacional_A3;
    double densidade_populacional_A4;
    double densidade_populacional_B1;
    double densidade_populacional_B2;
    double densidade_populacional_B3;
    double densidade_populacional_B4;
    double densidade_populacional_C1;
    double densidade_populacional_C2;
    double densidade_populacional_C3;
    double densidade_populacional_C4;
    double densidade_populacional_D1;
    double densidade_populacional_D2;
    double densidade_populacional_D3;
    double densidade_populacional_D4;
    double densidade_populacional_E1;
    double densidade_populacional_E2;
    double densidade_populacional_E3;
    double densidade_populacional_E4;
    double densidade_populacional_F1;
    double densidade_populacional_F2;
    double densidade_populacional_F3;
    double densidade_populacional_F4;
    double densidade_populacional_G1;
    double densidade_populacional_G2;
    double densidade_populacional_G3;
    double densidade_populacional_G4;
    double densidade_populacional_H1;
    double densidade_populacional_H2;
    double densidade_populacional_H3;
    double densidade_populacional_H4;
    double pib_percapita_A1;
    double pib_percapita_A2;
    double pib_percapita_A3;
    double pib_percapita_A4;
    double pib_percapita_B1;
    double pib_percapita_B2;
    double pib_percapita_B3;
    double pib_percapita_B4;
    double pib_percapita_C1;
    double pib_percapita_C2;
    double pib_percapita_C3;
    double pib_percapita_C4;
    double pib_percapita_D1;
    double pib_percapita_D2;
    double pib_percapita_D3;
    double pib_percapita_D4;
    double pib_percapita_E1;
    double pib_percapita_E2;
    double pib_percapita_E3;
    double pib_percapita_E4;
    double pib_percapita_F1;
    double pib_percapita_F2;
    double pib_percapita_F3;
    double pib_percapita_F4;
    double pib_percapita_G1;
    double pib_percapita_G2;
    double pib_percapita_G3;
    double pib_percapita_G4;
    double pib_percapita_H1;
    double pib_percapita_H2;
    double pib_percapita_H3;
    double pib_percapita_H4;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Meu comentário: prinf para expressar o nome da cidade e direcionar o que é para o usuário fazer.
    // Coloquei em seguida do printf que está indicando o nome da cidade a variável que representaria a própria
    // cidade mas não precisava uma vez que não utilizou o variável.
    // Scanf para guardar as informações do usuário. \n para pular linha. A formatação %d que faz conexão com
    // o dado int para fazer conexão com as variáveis dos atributos.

    printf("A1 São Paulo - SP\n", A1_Sao_Paulo_SP);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_A1);
    scanf("%d", &numero_de_pontos_turisticos_A1);
    printf("Digite a quantidade de população:\n", populacao_A1);
    scanf("%d", &populacao_A1);
    printf("Digite a área:\n", area_A1);
    scanf("%d", &area_A1);
    printf("Digite o PIB:\n", PIB_A1);
    scanf("%d", &PIB_A1);

    printf("A2 Campinas - SP\n", A2_Campinas_SP);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_A2);
    scanf("%d", &numero_de_pontos_turisticos_A2);
    printf("Digite a quantidade de população:\n", populacao_A2);
    scanf("%d", &populacao_A2);
    printf("Digite a área:\n", area_A2);
    scanf("%d", &area_A2);
    printf("Digite o PIB:\n", PIB_A2);
    scanf("%d", &PIB_A2);

    printf("A3 Ribeirão Preto - SP\n", A3_Ribeirao_Preto_SP);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_A3);
    scanf("%d", &numero_de_pontos_turisticos_A3);
    printf("Digite a quantidade de população:\n", populacao_A3);
    scanf("%d", &populacao_A3);
    printf("Digite a área:\n", area_A3);
    scanf("%d", &area_A3);
    printf("Digite o PIB:\n", PIB_A3);
    scanf("%d", &PIB_A3);

    printf("A4 São José dos Campos - SP\n", A4_SaoJose_dos_Campos_SP);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_A4);
    scanf("%d", &numero_de_pontos_turisticos_A4);
    printf("Digite a quantidade de população:\n", populacao_A4);
    scanf("%d", &populacao_A4);
    printf("Digite a área:\n", area_A4);
    scanf("%d", &area_A4);
    printf("Digite o PIB:\n", PIB_A4);
    scanf("%d", &PIB_A4);

    printf("B1 Florianópolis - SC\n", B1_Florianopolis_SC);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_B1);
    scanf("%d", &numero_de_pontos_turisticos_B1);
    printf("Digite a quantidade de população:\n", populacao_B1);
    scanf("%d", &populacao_B1);
    printf("Digite a área:\n", area_B1);
    scanf("%d", &area_B1);
    printf("Digite o PIB:\n", PIB_B1);
    scanf("%d", &PIB_B1);

    printf("B2 Joinville - SC\n", B2_Joinville_SC);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_B2);
    scanf("%d", &numero_de_pontos_turisticos_B2);
    printf("Digite a quantidade de população:\n", populacao_B2);
    scanf("%d", &populacao_B2);
    printf("Digite a área:\n", area_B2);
    scanf("%d", &area_B2);
    printf("Digite o PIB:\n", PIB_B2);
    scanf("%d", &PIB_B2);

    printf("B3 Blumenau - SC\n", B3_Blumenau_SC);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_B3);
    scanf("%d", &numero_de_pontos_turisticos_B3);
    printf("Digite a quantidade de população:\n", populacao_B3);
    scanf("%d", &populacao_B3);
    printf("Digite a área:\n", area_B3);
    scanf("%d", &area_B3);
    printf("Digite o PIB:\n", PIB_B3);
    scanf("%d", &PIB_B3);

    printf("B4 São José - SC\n", B4_Sao_Jose_SC);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_B4);
    scanf("%d", &numero_de_pontos_turisticos_B4);
    printf("Digite a quantidade de população:\n", populacao_B4);
    scanf("%d", &populacao_B4);
    printf("Digite a área:\n", area_B4);
    scanf("%d", &area_B4);
    printf("Digite o PIB:\n", PIB_B4);
    scanf("%d", &PIB_B4);

    printf("C1 Porto Alegre - RS\n", C1_Porto_Alegre_RS);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_C1);
    scanf("%d", &numero_de_pontos_turisticos_C1);
    printf("Digite a quantidade de população:\n", populacao_C1);
    scanf("%d", &populacao_C1);
    printf("Digite a área:\n", area_C1);
    scanf("%d", &area_C1);
    printf("Digite o PIB:\n", PIB_C1);
    scanf("%d", &PIB_C1);

    printf("C2 Caxias do Sul - RS\n", C2_Caxias_do_Sul_RS);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_C2);
    scanf("%d", &numero_de_pontos_turisticos_C2);
    printf("Digite a quantidade de população:\n", populacao_C2);
    scanf("%d", &populacao_C2);
    printf("Digite a área:\n", area_C2);
    scanf("%d", &area_C2);
    printf("Digite o PIB:\n", PIB_C2);
    scanf("%d", &PIB_C2);

    printf("C3 Canoas - RS\n", C3_Canoas_RS);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_C3);
    scanf("%d", &numero_de_pontos_turisticos_C3);
    printf("Digite a quantidade de população:\n", populacao_C3);
    scanf("%d", &populacao_C3);
    printf("Digite a área:\n", area_C3);
    scanf("%d", &area_C3);
    printf("Digite o PIB:\n", PIB_C3);
    scanf("%d", &PIB_C3);

    printf("C3 Pelotas - RS\n", C4_Pelotas_RS);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_C4);
    scanf("%d", &numero_de_pontos_turisticos_C4);
    printf("Digite a quantidade de população:\n", populacao_C4);
    scanf("%d", &populacao_C4);
    printf("Digite a área:\n", area_C4);
    scanf("%d", &area_C4);
    printf("Digite o PIB:\n", PIB_C4);
    scanf("%d", &PIB_C4);

    printf("D1 Rio de Janeiro - RJ\n", D1_Rio_de_Janeiro_RJ);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_D1);
    scanf("%d", &numero_de_pontos_turisticos_D1);
    printf("Digite a quantidade de população:\n", populacao_D1);
    scanf("%d", &populacao_D1);
    printf("Digite a área:\n", area_D1);
    scanf("%d", &area_D1);
    printf("Digite o PIB:\n", PIB_D1);
    scanf("%d", &PIB_D1);

    printf("D2 São Gonçalo - RJ\n", D2_Sao_Goncalo_RJ);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_D2);
    scanf("%d", &numero_de_pontos_turisticos_D2);
    printf("Digite a quantidade de população:\n", populacao_D2);
    scanf("%d", &populacao_D2);
    printf("Digite a área:\n", area_D2);
    scanf("%d", &area_D2);
    printf("Digite o PIB:\n", PIB_D2);
    scanf("%d", &PIB_D2);

    printf("D3 Duque de Caixias - RJ\n", D3_Duque_de_Caxias_RJ);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_D3);
    scanf("%d", &numero_de_pontos_turisticos_D3);
    printf("Digite a quantidade de população:\n", populacao_D3);
    scanf("%d", &populacao_D3);
    printf("Digite a área:\n", area_D3);
    scanf("%d", &area_D3);
    printf("Digite o PIB:\n", PIB_D3);
    scanf("%d", &PIB_D3);

    printf("D4 Nova Iguaçu - RJ\n", D4_Nova_Iguacu_RJ);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_D4);
    scanf("%d", &numero_de_pontos_turisticos_D4);
    printf("Digite a quantidade de população:\n", populacao_D4);
    scanf("%d", &populacao_D4);
    printf("Digite a área:\n", area_D4);
    scanf("%d", &area_D4);
    printf("Digite o PIB:\n", PIB_D4);
    scanf("%d", &PIB_D4);

    printf("E1 Curitiba - PR\n", E1_Curitiba_PR);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_E1);
    scanf("%d", &numero_de_pontos_turisticos_E1);
    printf("Digite a quantidade de população:\n", populacao_E1);
    scanf("%d", &populacao_E1);
    printf("Digite a área:\n", area_E1);
    scanf("%d", &area_E1);
    printf("Digite o PIB:\n", PIB_E1);
    scanf("%d", &PIB_E1);

    printf("E2 Londria - PR\n", E2_Londrina_PR);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_E2);
    scanf("%d", &numero_de_pontos_turisticos_E2);
    printf("Digite a quantidade de população:\n", populacao_E2);
    scanf("%d", &populacao_E2);
    printf("Digite a área:\n", area_E2);
    scanf("%d", &area_E2);
    printf("Digite o PIB:\n", PIB_E2);
    scanf("%d", &PIB_E2);

    printf("E3 Maringá - PR\n", E3_Maringa_PR);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_E3);
    scanf("%d", &numero_de_pontos_turisticos_E3);
    printf("Digite a quantidade de população:\n", populacao_E3);
    scanf("%d", &populacao_E3);
    printf("Digite a área:\n", area_E3);
    scanf("%d", &area_E3);
    printf("Digite o PIB:\n", PIB_E3);
    scanf("%d", &PIB_E3);

    printf("E4 Ponta Grossa - PR\n", E4_Ponta_Grossa_PR);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_E4);
    scanf("%d", &numero_de_pontos_turisticos_E4);
    printf("Digite a quantidade de população:\n", populacao_E4);
    scanf("%d", &populacao_E4);
    printf("Digite a área:\n", area_E4);
    scanf("%d", &area_E4);
    printf("Digite o PIB:\n", PIB_E4);
    scanf("%d", &PIB_E4);

    printf("F1 Belo Horizonte - MG\n", F1_Belo_Horizonte_MG);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_F1);
    scanf("%d", &numero_de_pontos_turisticos_F1);
    printf("Digite a quantidade de população:\n", populacao_F1);
    scanf("%d", &populacao_F1);
    printf("Digite a área:\n", area_F1);
    scanf("%d", &area_F1);
    printf("Digite o PIB:\n", PIB_F1);
    scanf("%d", &PIB_F1);

    printf("F2 Uberlândia- MG\n", F2_Uberlandia_MG);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_F2);
    scanf("%d", &numero_de_pontos_turisticos_F2);
    printf("Digite a quantidade de população:\n", populacao_F2);
    scanf("%d", &populacao_F2);
    printf("Digite a área:\n", area_F2);
    scanf("%d", &area_F2);
    printf("Digite o PIB:\n", PIB_F2);
    scanf("%d", &PIB_F2);

    printf("F3 Contagem - MG\n", F3_Contagem_MG);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_F3);
    scanf("%d", &numero_de_pontos_turisticos_F3);
    printf("Digite a quantidade de população:\n", populacao_F3);
    scanf("%d", &populacao_F3);
    printf("Digite a área:\n", area_F3);
    scanf("%d", &area_F3);
    printf("Digite o PIB:\n", PIB_F3);
    scanf("%d", &PIB_F3);

    printf("F4 Juíz de Fora - MG\n", F4_Juiz_de_fora_MG);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_F4);
    scanf("%d", &numero_de_pontos_turisticos_F4);
    printf("Digite a quantidade de população:\n", populacao_F4);
    scanf("%d", &populacao_F4);
    printf("Digite a área:\n", area_F4);
    scanf("%d", &area_F4);
    printf("Digite o PIB:\n", PIB_F4);
    scanf("%d", &PIB_F4);
    
    printf("G1 Manaus - AM\n", G1_Manaus_AM);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_G1);
    scanf("%d", &numero_de_pontos_turisticos_G1);
    printf("Digite a quantidade de população:\n", populacao_G1);
    scanf("%d", &populacao_G1);
    printf("Digite a área:\n", area_G1);
    scanf("%d", &area_G1);
    printf("Digite o PIB:\n", PIB_G1);
    scanf("%d", &PIB_G1);

    printf("G2 Itacoatiara - AM\n", G2_Itacoatiara_AM);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_G2);
    scanf("%d", &numero_de_pontos_turisticos_G2);
    printf("Digite a quantidade de população:\n", populacao_G2);
    scanf("%d", &populacao_G2);
    printf("Digite a área: \n", area_G2);
    scanf("%d", &area_G2);
    printf("Digite o PIB:\n", PIB_G2);
    scanf("%d", &PIB_G2);

    printf("G3 Manacapuru - AM\n", G3_Manacapuru_AM);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_G3);
    scanf("%d", &numero_de_pontos_turisticos_G3);
    printf("Digite a quantidade de população:\n", populacao_G3);
    scanf("%d", &populacao_G3);
    printf("Digite a área:\n", area_G3);
    scanf("%d", &area_G3);
    printf("Digite o PIB:\n", PIB_G3);
    scanf("%d", &PIB_G3);

    printf("G4 Parintins - AM\n", G4_Parintins_AM);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_G4);
    scanf("%d", &numero_de_pontos_turisticos_G4);
    printf("Digite a quantidade de população:\n", populacao_G4);
    scanf("%d", &populacao_G4);
    printf("Digite a área:\n", area_G4);
    scanf("%d", &area_G4);
    printf("Digite o PIB:\n", PIB_G4);
    scanf("%d", &PIB_G4);

    printf("H1 Salvador - BA\n", H1_Salvador_BA);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_H1);
    scanf("%d", &numero_de_pontos_turisticos_H1);
    printf("Digite a quantidade de população:\n", populacao_H1);
    scanf("%d", &populacao_H1);
    printf("Digite a área:\n", area_H1);
    scanf("%d", &area_H1);
    printf("Digite o PIB:\n", PIB_H1);
    scanf("%d", &PIB_H1);

    printf("H2 Feira de Santana - BA\n", H2_Feira_de_Santana_BA);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_H2);
    scanf("%d", &numero_de_pontos_turisticos_H2);
    printf("Digite a quantidade de população:\n", populacao_H2);
    scanf("%d", &populacao_H2);
    printf("Digite a área:\n", area_H2);
    scanf("%d", &area_H2);
    printf("Digite o PIB:\n", PIB_H2);
    scanf("%d", &PIB_H2);

    printf("H3 Vitória da Conquista - BA\n", H3_Vitoria_da_Conquista_BA);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_H3);
    scanf("%d", &numero_de_pontos_turisticos_H3);
    printf("Digite a quantidade de população:\n", populacao_H3);
    scanf("%d", &populacao_H3);
    printf("Digite a área:\n", area_H3);
    scanf("%d", &area_H3);
    printf("Digite o PIB:\n", PIB_H3);
    scanf("%d", &PIB_H3);

    printf("H4 Camacari - BA\n", H4_Camacari_BA);
    printf("Digite o nº de pontos turísticos:\n", numero_de_pontos_turisticos_H4);
    scanf("%d", &numero_de_pontos_turisticos_H4);
    printf("Digite a quantidade de população:\n", populacao_H4);
    scanf("%d", &populacao_H4);
    printf("Digite a área:\n", area_H4);
    scanf("%d", &area_H4);
    printf("Digite o PIB:\n", PIB_H4);
    scanf("%d", &PIB_H4);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Meu comentário: printf para expressar as cidades e seus atributos salvos pelo scanf.
    // Para o nível intermediário eu fiz as operações aritméticas entre população e área para 
    // obter a densidade populacional e entre PIB e população para obter PIB per capital. Para ambos
    // eu forcei a conversão(casting) de tipo de dado para double para não ter erro de cálculo. 
    // printf sobre as variáveis que quis obter os resultados da operações.

    printf("A1 São Paulo - SP\n", A1_Sao_Paulo_SP);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_A1);
    printf("Quantidade de população: %d\n", populacao_A1);
    printf("Area: %d\n", area_A1);
    printf("PIB: %d\n", PIB_A1);
    densidade_populacional_A1 = (double) populacao_A1 / area_A1;
    printf("Densidade Populacional: %f\n", densidade_populacional_A1);
    pib_percapita_A1 = (double) PIB_A1 / populacao_A1;
    printf("PIB per capita: %f\n", pib_percapita_A1);

    printf("A2 Campinas - SP\n", A2_Campinas_SP);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_A2);
    printf("Quantidade de população: %d\n", populacao_A2);
    printf("Area: %d\n", area_A2);
    printf("PIB: %d\n", PIB_A2);
    densidade_populacional_A2 = (double) populacao_A2 / area_A2;
    printf("Densidade Populacional: %f\n", densidade_populacional_A2);
    pib_percapita_A2 = (double) PIB_A2 / populacao_A2;
    printf("PIB per capita: %f\n", pib_percapita_A2);

    printf("A3 Ribeirão Preto - SP\n", A3_Ribeirao_Preto_SP);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_A3);
    printf("Quantidade de população: %d\n", populacao_A3);
    printf("Area: %d\n", area_A3);
    printf("PIB: %d\n", PIB_A3);
    densidade_populacional_A3 = (double) populacao_A3 / area_A3;
    printf("Densidade Populacional: %f\n", densidade_populacional_A3);
    pib_percapita_A3 = (double) PIB_A3 / populacao_A3;
    printf("PIB per capita: %f\n", pib_percapita_A3);

    printf("A4 São José dos Campos - SP\n", A4_SaoJose_dos_Campos_SP);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_A4);
    printf("Quantidade de população: %d\n", populacao_A4);
    printf("Area: %d\n", area_A4);
    printf("PIB: %d\n", PIB_A4);
    densidade_populacional_A4 = (double) populacao_A4 / area_A4;
    printf("Densidade Populacional: %f\n", densidade_populacional_A4);
    pib_percapita_A4 = (double) PIB_A4 / populacao_A4;
    printf("PIB per capita: %f\n", pib_percapita_A4);

    printf("B1 Florianópolis - SC\n", B1_Florianopolis_SC);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_B1);
    printf("Quantidade de população: %d \n", populacao_B1);
    printf("Area: %d\n", area_B1);
    printf("PIB: %d\n", PIB_B1);
    densidade_populacional_B1 = (double) populacao_B1 / area_B1;
    printf("Densidade Populacional: %f\n", densidade_populacional_B1);
    pib_percapita_B1 = (double) PIB_B1 / populacao_B1;
    printf("PIB per capita: %f\n", pib_percapita_B1);

    printf("B2 Joinville - SC\n", B2_Joinville_SC);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_B2);
    printf("Quantidade de população: %d \n", populacao_B2);
    printf("Area: %d\n", area_B2);
    printf("PIB: %d\n", PIB_B2);
    densidade_populacional_B2 = (double) populacao_B2 / area_B2;
    printf("Densidade Populacional: %f\n", densidade_populacional_B2);
    pib_percapita_B2 = (double) PIB_B2 / populacao_B2;
    printf("PIB per capita: %f\n", pib_percapita_B2);

    printf("B3 Blumenau - SC\n", B3_Blumenau_SC);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_B3);
    printf("Quantidade de população: %d \n", populacao_B3);
    printf("Area: %d\n", area_B3);
    printf("PIB: %d\n", PIB_B3);
    densidade_populacional_B3 = (double) populacao_B3 / area_B3;
    printf("Densidade Populacional: %f\n", densidade_populacional_B3);
    pib_percapita_B3 = (double) PIB_B3 / populacao_B3;
    printf("PIB per capita: %f\n", pib_percapita_B3);

    printf("B4 São José - SC\n", B4_Sao_Jose_SC);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_B4);
    printf("Quantidade de população: %d \n", populacao_B4);
    printf("Area: %d\n", area_B4);
    printf("PIB: %d\n", PIB_B4);
    densidade_populacional_B4 = (double) populacao_B4 / area_B4;
    printf("Densidade Populacional: %f\n", densidade_populacional_B4);
    pib_percapita_B4 = (double) PIB_B4 / populacao_B4;
    printf("PIB per capita: %f\n", pib_percapita_B4);

    printf("C1 Porto Alegre - RS\n", C1_Porto_Alegre_RS);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_C1);
    printf("Quantidade de população: %d \n", populacao_C1);
    printf("Area: %d\n", area_C1);
    printf("PIB: %d\n", PIB_C1);
    densidade_populacional_C1 = (double) populacao_C1 / area_C1;
    printf("Densidade Populacional: %f\n", densidade_populacional_C1);
    pib_percapita_C1 = (double) PIB_C1 / populacao_C1;
    printf("PIB per capita: %f\n", pib_percapita_C1);

    printf("C2 Caxias do Sul - RS\n", C2_Caxias_do_Sul_RS);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_C2);
    printf("Quantidade de população: %d \n", populacao_C2);
    printf("Area: %d\n", area_C2);
    printf("PIB: %d\n", PIB_C2);
    densidade_populacional_C2 = (double) populacao_C2 / area_C2;
    printf("Densidade Populacional: %f\n", densidade_populacional_C2);
    pib_percapita_C2 = (double) PIB_C2 / populacao_C2;
    printf("PIB per capita: %f\n", pib_percapita_C2);

    printf("C3 Canoas - RS\n", C3_Canoas_RS);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_C3);
    printf("Quantidade de população: %d \n", populacao_C3);
    printf("Area: %d\n", area_C3);
    printf("PIB: %d\n", PIB_C3);
    densidade_populacional_C3 = (double) populacao_C3 / area_C3;
    printf("Densidade Populacional: %f\n", densidade_populacional_C3);
    pib_percapita_C3 = (double) PIB_C3 / populacao_C3;
    printf("PIB per capita: %f\n", pib_percapita_C3);

    printf("C3 Pelotas - RS\n", C4_Pelotas_RS);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_C4);
    printf("Quantidade de população: %d \n", populacao_C4);
    printf("Area: %d\n", area_C4);
    printf("PIB: %d\n", PIB_C4);
    densidade_populacional_C4 = (double) populacao_C4 / area_C4;
    printf("Densidade Populacional: %f\n", densidade_populacional_C4);
    pib_percapita_C4 = (double) PIB_C4 / populacao_C4;
    printf("PIB per capita: %f\n", pib_percapita_C4);

    printf("D1 Rio de Janeiro - RJ\n", D1_Rio_de_Janeiro_RJ);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_D1);
    printf("Quantidade de população: %d \n", populacao_D1);
    printf("Area: %d\n", area_D1);
    printf("PIB: %d\n", PIB_D1);
    densidade_populacional_D1 = (double) populacao_D1 / area_D1;
    printf("Densidade Populacional: %f\n", densidade_populacional_D1);
    pib_percapita_D1 = (double) PIB_D1 / populacao_D1;
    printf("PIB per capita: %f\n", pib_percapita_D1);

    printf("D2 São Gonçalo - RJ\n", D2_Sao_Goncalo_RJ);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_D2);
    printf("Quantidade de população: %d \n", populacao_D2);
    printf("Area: %d\n", area_D2);
    printf("PIB: %d\n", PIB_D2);
    densidade_populacional_D2 = (double) populacao_D2 / area_D2;
    printf("Densidade Populacional: %f\n", densidade_populacional_D2);
    pib_percapita_D2 = (double) PIB_D2 / populacao_D2;
    printf("PIB per capita: %f\n", pib_percapita_D2);

    printf("D3 Duque de Caixias - RJ\n", D3_Duque_de_Caxias_RJ);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_D3);
    printf("Quantidade de população: %d \n", populacao_D3);
    printf("Area: %d\n", area_D3);
    printf("PIB: %d\n", PIB_D3);
    densidade_populacional_D3 = (double) populacao_D3 / area_D3;
    printf("Densidade Populacional: %f\n", densidade_populacional_D3);
    pib_percapita_D3 = (double) PIB_D3 / populacao_D3;
    printf("PIB per capita: %f\n", pib_percapita_D3);

    printf("D4 Nova Iguaçu - RJ\n", D4_Nova_Iguacu_RJ);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_D4);
    printf("Quantidade de população: %d \n", populacao_D4);
    printf("Area: %d\n", area_D4);
    printf("PIB: %d\n", PIB_D4);
    densidade_populacional_D4 = (double) populacao_D4 / area_D4;
    printf("Densidade Populacional: %f\n", densidade_populacional_D4);
    pib_percapita_D4 = (double) PIB_D4 / populacao_D4;
    printf("PIB per capita: %f\n", pib_percapita_D4);

    printf("E1 Curitiba - PR\n", E1_Curitiba_PR);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_E1);
    printf("Quantidade de população: %d \n", populacao_E1);
    printf("Area: %d\n", area_E1);
    printf("PIB: %d\n", PIB_E1);
    densidade_populacional_E1 = (double) populacao_E1 / area_E1;
    printf("Densidade Populacional: %f\n", densidade_populacional_E1);
    pib_percapita_E1 = (double) PIB_E1 / populacao_E1;
    printf("PIB per capita: %f\n", pib_percapita_E1);

    printf("E2 Londria - PR\n", E2_Londrina_PR);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_E2);
    printf("Quantidade de população: %d \n", populacao_E2);
    printf("Area: %d\n", area_E2);
    printf("PIB: %d\n", PIB_E2);
    densidade_populacional_E2 = (double) populacao_E2 / area_E2;
    printf("Densidade Populacional: %f\n", densidade_populacional_E2);
    pib_percapita_E2 = (double) PIB_E2 / populacao_E2;
    printf("PIB per capita: %f\n", pib_percapita_E2);

    printf("E3 Maringá - PR\n", E3_Maringa_PR);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_E3);
    printf("Quantidade de população: %d \n", populacao_E3);
    printf("Area: %d\n", area_E3);
    printf("PIB: %d\n", PIB_E3);
    densidade_populacional_E3 = (double) populacao_E3 / area_E3;
    printf("Densidade Populacional: %f\n", densidade_populacional_E3);
    pib_percapita_E3 = (double) PIB_E3 / populacao_E3;
    printf("PIB per capita: %f\n", pib_percapita_E3);

    printf("E4 Ponta Grossa - PR\n", E4_Ponta_Grossa_PR);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_E4);
    printf("Quantidade de população: %d \n", populacao_E4);
    printf("Area: %d\n", area_E4);
    printf("PIB: %d n", PIB_E4);
    densidade_populacional_E4 = (double) populacao_E4 / area_E4;
    printf("Densidade Populacional: %f\n", densidade_populacional_E4);
    pib_percapita_E4 = (double) PIB_E4 / populacao_E4;
    printf("PIB per capita: %f\n", pib_percapita_E4);

    printf("F1 Belo Horizonte - MG\n", F1_Belo_Horizonte_MG);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_F1);
    printf("Quantidade de população: %d \n", populacao_F1);
    printf("Area: %d\n", area_F1);
    printf("PIB: %d\n", PIB_F1);
    densidade_populacional_F1 = (double) populacao_F1 / area_F1;
    printf("Densidade Populacional: %f\n", densidade_populacional_F1);
    pib_percapita_F1 = (double) PIB_F1 / populacao_F1;
    printf("PIB per capita: %f\n", pib_percapita_F1);

    printf("F2 Uberlândia- MG\n", F2_Uberlandia_MG);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_F2);
    printf("Quantidade de população: %d \n", populacao_F2);
    printf("Area: %d\n", area_F2);
    printf("PIB: %d\n", PIB_F2);
    densidade_populacional_F2 = (double) populacao_F2 / area_F2;
    printf("Densidade Populacional: %f\n", densidade_populacional_F2);
    pib_percapita_F2 = (double) PIB_F2 / populacao_F2;
    printf("PIB per capita: %f\n", pib_percapita_F2);

    printf("F3 Contagem - MG\n", F3_Contagem_MG);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_F3);
    printf("Quantidade de população: %d \n", populacao_F3);
    printf("Area: %d\n", area_F3);
    printf("PIB: %d\n", PIB_F3);
    densidade_populacional_F3 = (double) populacao_F3 / area_F3;
    printf("Densidade Populacional: %f\n", densidade_populacional_F3);
    pib_percapita_F3 = (double) PIB_F3 / populacao_F3;
    printf("PIB per capita: %f\n", pib_percapita_F3);

    printf("F4 Juíz de Fora - MG\n", F4_Juiz_de_fora_MG);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_F4);
    printf("Quantidade de população: %d \n", populacao_F4);
    printf("Area: %d\n", area_F4);
    printf("PIB: %d\n", PIB_F4);
    densidade_populacional_F4 = (double) populacao_F4 / area_F4;
    printf("Densidade Populacional: %f\n", densidade_populacional_F4);
    pib_percapita_F4 = (double) PIB_F4 / populacao_F4;
    printf("PIB per capita: %f\n", pib_percapita_F4);
    
    printf("G1 Manaus - AM\n", G1_Manaus_AM);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_G1);
    printf("Quantidade de população: %d \n", populacao_G1);
    printf("Area: %d\n", area_G1);
    printf("PIB: %d\n", PIB_G1);
    densidade_populacional_G1 = (double) populacao_G1 / area_G1;
    printf("Densidade Populacional: %f\n", densidade_populacional_G1);
    pib_percapita_G1 = (double) PIB_G1 / populacao_G1;
    printf("PIB per capita: %f\n", pib_percapita_G1);

    printf("G2 Itacoatiara - AM\n", G2_Itacoatiara_AM);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_G2);
    printf("Quantidade de população: %d \n", populacao_G2);
    printf("Area: %d\n", area_G2);
    printf("PIB: %d\n", PIB_G2);
    densidade_populacional_G2 = (double) populacao_G2 / area_G2;
    printf("Densidade Populacional: %f\n", densidade_populacional_G2);
    pib_percapita_G2 = (double) PIB_G2 / populacao_G2;
    printf("PIB per capita: %f\n", pib_percapita_G2);

    printf("G3 Manacapuru - AM\n", G3_Manacapuru_AM);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_G3);
    printf("Quantidade de população: %d \n", populacao_G3);
    printf("Area: %d\n", area_G3);
    printf("PIB: %d\n", PIB_G3);
    densidade_populacional_G3 = (double) populacao_G3 / area_G3;
    printf("Densidade Populacional: %f\n", densidade_populacional_G3);
    pib_percapita_G3 = (double) PIB_G3 / populacao_G3;
    printf("PIB per capita: %f\n", pib_percapita_G3);

    printf("G4 Parintins - AM\n", G4_Parintins_AM);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_G4);
    printf("Quantidade de população: %d \n", populacao_G4);
    printf("Area: %d\n", area_G4);
    printf("PIB: %d\n", PIB_G4);
    densidade_populacional_G4 = (double) populacao_G4 / area_G4;
    printf("Densidade Populacional: %f\n", densidade_populacional_G4);
    pib_percapita_G4 = (double) PIB_G4 / populacao_G4;
    printf("PIB per capita: %f\n", pib_percapita_G4);

    printf("H1 Salvador - BA\n", H1_Salvador_BA);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_H1);
    printf("Quantidade de população: %d \n", populacao_H1);
    printf("Area: %d\n", area_H1);
    printf("PIB: %d\n", PIB_H1);
    densidade_populacional_H1 = (double) populacao_H1 / area_H1;
    printf("Densidade Populacional: %f\n", densidade_populacional_H1);
    pib_percapita_H1 = (double) PIB_H1 / populacao_H1;
    printf("PIB per capita: %f\n", pib_percapita_H1);

    printf("H2 Feira de Santana - BA\n", H2_Feira_de_Santana_BA);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_H2);
    printf("Quantidade de população: %d \n", populacao_H2);
    printf("Area: %d\n", area_H2);
    printf("PIB: %d\n", PIB_H2);
    densidade_populacional_H2 = (double) populacao_H2 / area_H2;
    printf("Densidade Populacional: %f\n", densidade_populacional_H2);
    pib_percapita_H2 = (double) PIB_H2 / populacao_H2;
    printf("PIB per capita: %f\n", pib_percapita_H2);

    printf("H3 Vitória da Conquista - BA\n", H3_Vitoria_da_Conquista_BA);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_H3);
    printf("Quantidade de população: %d \n", populacao_H3);
    printf("Area: %d\n", area_H3);
    printf("PIB: %d\n", PIB_H3);
    densidade_populacional_H3 = (double) populacao_H3 / area_H3;
    printf("Densidade Populacional: %f\n", densidade_populacional_H3);
    pib_percapita_H3 = (double) PIB_H3 / populacao_H3;
    printf("PIB per capita: %f\n", pib_percapita_H3);

    printf("H4 Camacari - BA\n", H4_Camacari_BA);
    printf("Nº de pontos turísticos: %d\n", numero_de_pontos_turisticos_H4);
    printf("Quantidade de população: %d \n", populacao_H4);
    printf("Area: %d\n", area_H4);
    printf("PIB: %d\n", PIB_H4);
    densidade_populacional_H4 = (double) populacao_H4 / area_H4;
    printf("Densidade Populacional: %f\n", densidade_populacional_H4);
    pib_percapita_H4 = (double) PIB_H4 / populacao_H4;
    printf("PIB per capita: %f\n", pib_percapita_H4);

    return 0;
}
