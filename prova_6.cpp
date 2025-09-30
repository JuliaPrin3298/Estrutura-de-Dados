#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    char resp;

    printf("É mamífero? (S/N): ");
    scanf(" %c", &resp);

    if(resp == 'S' || resp == 's') {
        printf("É quadrúpede? (S/N): ");
        scanf(" %c", &resp);
        if(resp == 'S' || resp == 's') {
            printf("É carnívoro? (S/N): ");
            scanf(" %c", &resp);
            if(resp == 'S' || resp == 's') {
                printf("O animal escolhido é o Leão.\n");
            } else {
                printf("O animal escolhido é o Cavalo.\n");
            }
        } else {
            printf("É bípede? (S/N): ");
            scanf(" %c", &resp);
            if(resp == 'S' || resp == 's') {
                printf("É onívoro? (S/N): ");
                scanf(" %c", &resp);
                if(resp == 'S' || resp == 's') {
                    printf("O animal escolhido é o Homem.\n");
                } else {
                    printf("É frutífero? (S/N): ");
                    scanf(" %c", &resp);
                    if(resp == 'S' || resp == 's') {
                        printf("O animal escolhido é o Macaco.\n");
                    }
                }
            } else {
                printf("É voador? (S/N): ");
                scanf(" %c", &resp);
                if(resp == 'S' || resp == 's') {
                    printf("O animal escolhido é o Morcego.\n");
                } else {
                    printf("É aquático? (S/N): ");
                    scanf(" %c", &resp);
                    if(resp == 'S' || resp == 's') {
                        printf("O animal escolhido é a Baleia.\n");
                    }
                }
            }
        }
    } else {
        printf("É ave? (S/N): ");
        scanf(" %c", &resp);
        if(resp == 'S' || resp == 's') {
            printf("Não voa? (S/N): ");
            scanf(" %c", &resp);
            if(resp == 'S' || resp == 's') {
                printf("O animal escolhido é o Avestruz.\n");
            } else {
                printf("Nada na água? (S/N): ");
                scanf(" %c", &resp);
                if(resp == 'S' || resp == 's') {
                    printf("O animal escolhido é o Pinguim.\n");
                } else {
                    printf("Voa e nada? (S/N): ");
                    scanf(" %c", &resp);
                    if(resp == 'S' || resp == 's') {
                        printf("O animal escolhido é o Pato.\n");
                    } else {
                        printf("O animal escolhido é a Águia.\n");
                    }
                }
            }

        } else { 
            printf("É réptil? (S/N): ");
            scanf(" %c", &resp);
            if(resp == 'S' || resp == 's') {
                printf("Anda devagar e tem casco? (S/N): ");
                scanf(" %c", &resp);
                if(resp == 'S' || resp == 's') {
                    printf("O animal escolhido é a Tartaruga.\n");
                } else {
                    printf("É grande e aquático? (S/N): ");
                    scanf(" %c", &resp);
                    if(resp == 'S' || resp == 's') {
                        printf("O animal escolhido é o Crocodilo.\n");
                    } else {
                        printf("O animal escolhido é a Cobra.\n");
                    }
                }
            }
        }
    }

}
