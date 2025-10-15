#include<stdio.h>
#include<locale.h>

void menu(){
    printf("=== Músicas ===");
    printf("\n 1 - Love Me Like You Do");
    printf("\n 2 - Bad Romance");
    printf("\n 3 - Bola de Cristal");
    printf("\n 4 - Thumbs");
}

void musica1() {
    printf("\n=== Love Me Like You Do ===\n");
    printf("You're the light, you're the night\n");
    printf("You're the color of my blood\n");
    printf("You're the cure, you're the pain\n");
    printf("You're the only thing I wanna touch\n");
    printf("Never knew that it could mean so much, so much\n");
    printf("You're the fear, I don't care 'Cause I've never been so high\n");
    printf("Follow me to the dark Let me take you pass the satellites\n");
}

void musica2() {
    printf("\n=== Bad Romance ===\n");
    printf("Ra ra-ah-ah-ah Roma, Roma-ma\n");
    printf("Gaga, oh la-la\n");
    printf("Want your bad romance\n");
    printf("I want your ugly, I want your disease\n");
    printf("I want your everything as long as it's free\n");
    printf("I want your love\n");
    printf("Love, love, love, I want your love, yeah\n");
}

void musica3(){
    printf("\n=== Bola de Cristal ===\n");
    printf("Se você se perder\n");
    printf("Não precisa mais se preocupar\n");
    printf("Eu dou um jeito d'encontrar\n");
    printf("Você, você\n");
    printf("Não tenho bola de cristal\n");
    printf("Mas sei bem seguir minha intuição\n");
    printf("Não posso ler a sua mão, Mas posso sentir a batida do teu coração\n");
}

void musica4(){
    printf("\n=== Thumbs ===\n");
    printf("Somewhere in the world\n");
    printf("There is a father and a mother\n");
    printf("And the father is a son who has a mother\n");
    printf("The mother has a daughter\n");
    printf("Who gets married to the brother of a mother\n");
    printf("And they all just tryna multiply with one another\n");
}

int escolhaMusica(int opcao){
    if(opcao = 1){
        musica1();
    }else if(opcao = 2)
    {
        musica2();
    }else if(opcao = 3){
        musica3();
    }else if (opcao = 4)
    {
        musica4();
    }else{
        printf("Música escolhida não se encontra na biblioteca");
    }
}

int lerescolha(){
    int opcao;
    printf("\n\n Digite sua escolha: ");
    scanf("%d", &opcao);
    return opcao;
}

main(){
    setlocale(LC_ALL, "Portuguese");
    int x;

    menu();
    x = lerescolha();
    escolhaMusica(x);
}




























