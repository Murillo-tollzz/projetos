#include <stdio.h>
#include <stdbool.h>

int main() {

    //introdução
    printf("*** Checagem de segurança ***\n");
    printf("Por favor, insira os dados a seguir:\n\n");

    // declaração de variáveis
    float temp, umid;
    unsigned int estoque;
    bool alert = false;
    
    // entrada de dados
    printf("Digite a temperatura: ");
    scanf("%f", &temp);
    printf("Digite a umidade: ");
    scanf("%f", &umid);
    printf("Digite o estoque: ");
    scanf("%u", &estoque);
    printf("\n");
    
    // comparação e avaliação dos dados
    // temperatura
    if (temp > 30) {
        printf("[!] Temperatura acima da norma!\n");
        alert = true;
    }
    else if (temp < -20) {
        printf("[!] Temperatura abaixo da norma!\n");
        alert = true;
    }
    else {
        printf("[*] Temperatura dentro dos conformes.\n");
    }
    
    // umidade
    if (umid > 50) {
        printf("[!] Umidade acima da norma!\n");
        alert = true;
    }
    else if (umid < 10) {
        printf("[!] Umidade abaixo da norma!\n");
        alert = true;
    }
    else {
        printf("[*] Umidade dentro dos conformes.\n");
    }
    
    // estoque
    if (estoque > 50000) {
        printf("[!] Estoque acima do limite!\n");
        alert = true;
    }
    else if (estoque < 2000) {
        printf("[!] Estoque abaixo do mínimo!\n");
        alert = true;
    }
    else {
        printf("[*] Estoque dentro da média.\n");
    }
    printf("\n");
    
    // emissão de alerta
    if (alert == true) {
        printf("[!] Uma medida de segurança deve ser realizada o quanto antes!\n\n");
    }
    else {
        printf("[*] Todos os paramêtros dentro dos conformes, tenha um bom dia.\n\n");
    }

    // fim do programa
    return 0;
}