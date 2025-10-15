#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//Idade

int lerAnos(){
    int anos;
    printf("Digite sua idade em anos meses e dias");
    printf("\nAnos: ");
    scanf("%d", &anos);
    return anos;
}

int lerMeses(){
    int meses;
    printf("\nMeses: ");
    scanf("%d", &meses);
    return meses;
}

int lerDias(){
    int dias;
    printf("\nDias: ");
    scanf("%d", &dias);
    return dias;
}

int contaIdade(int anos, int meses, int dias){
    int idade;
    idade = (anos * 365) + (meses * 30) + dias;
    return idade;
}

void exibirResultado1(int idadeDias){
    printf("\n A sua idade em dias é %d", idadeDias);
}


int main1()
{

    setlocale(LC_ALL, "Portuguese");
    int a, m, d;
    a = lerAnos();
    m = lerMeses();
    d = lerDias();
    exibirResultado1(contaIdade(a,m,d));
    return 0;
}
////////////////////////////////////////////////////

//Peso

float lerAltura()
{
    float alt;
    printf("Digite sua Altura: ");
    scanf("%f", &alt);
    return alt;
}

char lerSexo()
{
    char sexo;
    do
    {
        printf("Escolha as opções: (F - M)");
        printf("\n F - Feminino");
        printf("\n M - Masculino\n ");
        scanf(" %c", &sexo);
    } while (sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm');
    return sexo;
}

float pesoIdeal(float alt, char sexo)
{
    float ideal;
    if (sexo == 'F' || sexo == 'f')
    {
        ideal = 62.1 * alt - 44.7;
    }
    else
    {
        ideal = 72.7 * alt - 58;
    }
    return ideal;
}

void exibirResultado2(float ideal)
{
    printf("\n O seu peso ideal é: %.2f ", ideal);
}

int main2()
{
    float a;
    char s;
    a = lerAltura();
    s = lerSexo();
    exibirResultado2(pesoIdeal(a, s));
    return 0;
}

/////////////////////////////////////////////////////

// Media

float lerNotas(){
    float n;
    printf("Digite a nota: ");
    scanf("%f", &n);
    return n;
}

char lerProva(){
    char tipo;
    do
    {
        printf("Digite o tipo de prova: ");
        scanf(" %c", &tipo);
    } while (tipo != 'A' && tipo != 'P' && tipo != 'a' && tipo != 'p');
    return tipo;
}

float media(float n1, float n2, char tipo){
    float media;
    if (tipo == 'A' || tipo == 'a')
    {
        printf("Média aritimetica é: ");
        media = (n1 + n2)/2;
        printf("%f",media);
    }else{
        printf("Média ponderada é: ");
        media = ((n1 * 3) + (n2 * 7))/10;
        printf("%.2f",media);
    }
    return media;
}

int main3()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;
    char tipo;
    n1 = lerNotas();
    n2 = lerNotas();
    tipo = lerProva();
    media(n1, n2, tipo);
    return 0;
}
/////////////////////////////////////////////////////

// Pesquisa 

void pesquisaPrefeitura() {
    float salario, somaSalario = 0, maiorSalario = 0;
    int filhos, somaFilhos = 0;
    int qtdPessoas = 0, qtdAte1412 = 0;

    printf("=== PESQUISA DA PREFEITURA ===\n");
    printf("Digite um salário negativo para encerrar.\n\n");

    do {
        printf("Informe o salário: R$ ");
        scanf("%f", &salario);

        if (salario >= 0) {
            printf("Informe o número de filhos: ");
            scanf("%d", &filhos);

            somaSalario += salario;
            somaFilhos += filhos;
            qtdPessoas++;

            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            if (salario <= 1412.0) {
                qtdAte1412++;
            }

            printf("\n==========================================\n");
        }

    } while (salario >= 0);

    if (qtdPessoas == 0) {
        printf("\nNenhum dado foi inserido.\n");
    } else {
        float mediaSalario = somaSalario / qtdPessoas;
        float mediaFilhos = (float)somaFilhos / qtdPessoas;
        float percentual1412 = ((float)qtdAte1412 / qtdPessoas) * 100;

        printf("\n==== RESULTADOS DA PESQUISA ====\n");
        printf("Média de salário da população: R$ %.2f\n", mediaSalario);
        printf("Média do número de filhos: %.2f\n", mediaFilhos);
        printf("Maior salário: R$ %.2f\n", maiorSalario);
        printf("Percentual com salário até R$1412,00: %.2f%%\n", percentual1412);
    }
}

int main4() {
    setlocale(LC_ALL, "Portuguese");
    pesquisaPrefeitura();
    return 0;
}
///////////////////////////////////////////////////

//Fatorial

int numeroPositivo()
{
    int num;

    do
    {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);
        if (num < 0)
        {
            printf("Número inválido! Digite um valor positivo.\n");
        }
    } while (num < 0);
    return num;
}

int calcularFatorial(int n)
{
    int fat = 1;

    for (int i = 1; i <= n; i++)
    {
        fat *= i;
    }

    return fat;
}

void exibirResultado5(int n, int fat)
{
    printf("\nO fatorial de %d é %d\n", n, fat);
}

int main5()
{
    int numero, fatorial;

    setlocale(LC_ALL, "Portuguese");
    numero = numeroPositivo();
    fatorial = calcularFatorial(numero);
    exibirResultado5(numero, fatorial);
    return 0;
}
///////////////////////////////////////////////////

// Vetor

#define TAM 10

void lerVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %d° elemento do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void trocarMetade(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[i + tamanho / 2];
        vetor[i + tamanho / 2] = temp;
    }
}

void mostrarVetor(int vetor[], int tamanho) {
    printf("\nVetor final:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}

int main6() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[TAM];

    lerVetor(vetor, TAM);
    trocarMetade(vetor, TAM);
    mostrarVetor(vetor, TAM);

    return 0;
}
///////////////////////////////////////////////////

// Lyrics

void menu7(){
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

void escolhaMusica(int opcao){
    if(opcao == 1){
        musica1();
    }else if(opcao == 2)
    {
        musica2();
    }else if(opcao == 3){
        musica3();
    }else if (opcao == 4)
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

int main7(){
    setlocale(LC_ALL, "Portuguese");
    int x;

    menu7();
    x = lerescolha();
    escolhaMusica(x);
    return 0;
}


//////////////////////////////////////////////////////

// temperatura 

void lerTemp(float *temp, char *tipo) {
    do {
        printf("Digite o tipo de temperatura (C - F): ");
        scanf(" %c", tipo);
    } while (*tipo != 'C' && *tipo != 'c' && *tipo != 'F' && *tipo != 'f');

    printf("Digite a temperatura: ");
    scanf("%f", temp);
}

void converteTemp(float temp, char tipo) {
    if (tipo == 'C' || tipo == 'c') {
        float f = (temp * 9.0 / 5.0) + 32;
        printf("A conversão de Celsius para Fahrenheit é: %.2f°F\n", f);
    } else {
        float c = (temp - 32) * 5.0 / 9.0;
        printf("A conversão de Fahrenheit para Celsius é: %.2f°C\n", c);
    }
}

int main8() {
    setlocale(LC_ALL, "Portuguese");

    float temp;
    char tipo;

    lerTemp(&temp, &tipo);      
    converteTemp(temp, tipo);   


    return 0;
}





////////////////////////////////////////////////////////////////

// Adivinhação

int lerPalpite()
{
    int palp;
    printf("Digite o palpite: ");
    scanf("%d", &palp);
    return palp;
}

void verificaNumero(int numero)
{
    int palpite;
    do
    {
        palpite = lerPalpite();
        if (palpite == numero)
        {
            printf("Acertou o número!!!\n");
        }
        else if (palpite < numero)
        {
            printf("O número é maior que seu palpite!\n");
        }
        else
        {
            printf("O número é menor que seu palpite!\n");
        }
    } while (palpite != numero);
}

int main9()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));
    int numero = rand() % 100 + 1;
    printf("=== Jogo de Adivinhação ===\n");
    verificaNumero(numero);

    return 0;
}

// ///////////////////////////////////////////////////////////

// Jogo Pedra papel tesoura 


int lerEscolha() {
    int escolha;
    printf("\n=== Pedra, Papel ou Tesoura ===");
    printf("\n1 - Pedra");
    printf("\n2 - Papel");
    printf("\n3 - Tesoura");
    printf("\nEscolha sua opção: ");
    scanf("%d", &escolha);
    return escolha;
}

int jogadaComputador() {
    srand(time(NULL)); // inicializa o gerador aleatório
    return rand() % 3 + 1; // número entre 1 e 3
}

void verificarResultado10(int jogador, int computador) {
    char *opcoes[] = {"", "Pedra", "Papel", "Tesoura"};
    printf("\nVocê escolheu: %s", opcoes[jogador]);
    printf("\nComputador escolheu: %s\n", opcoes[computador]);

    if (jogador == computador) {
        printf("\nEmpate!");
    } else if ((jogador == 1 && computador == 3) ||
               (jogador == 2 && computador == 1) ||
               (jogador == 3 && computador == 2)) {
        printf("\nVocê venceu!");
    } else {
        printf("\nComputador venceu!");
    }
}

int main10() {
    setlocale(LC_ALL, "Portuguese");

    int jogador = lerEscolha();
    int computador = jogadaComputador();
    verificarResultado10(jogador, computador);

    return 0;
}
//////////////////////////////////////////////////////////////////

void menuPrincipal()
{
    int opcao;
    do
    {
        printf("\n\n1 - Idade em dias\n");
        printf("2 - Peso ideal\n");
        printf("3 - Média aritmética ou ponderada\n");
        printf("4 - Pesquisa de habitantes\n");
        printf("5 - Fatorial\n");
        printf("6 - Invertendo valores no vetor\n");
        printf("7 - Lyrics de Música\n");
        printf("8 - Temperatura\n");
        printf("9 - Jogo de adivinhação\n");
        printf("10 - Jogo de Pedra, Papel e Tesoura\n");
        printf("0 - Sair\n");
        printf("============================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: main1(); break;
            case 2: main2(); break;
            case 3: main3(); break;
            case 4: main4(); break;
            case 5: main5(); break;
            case 6: main6(); break;
            case 7: main7(); break;
            case 8: main8(); break;
            case 9: main9(); break;
            case 10: main10(); break;
            case 0: printf("Saindo do programa...\n"); break;
            default: printf("Opção inválida!\n"); break;
        }

    } while (opcao != 0);
}


// main main 
int main()
{
    
    printf("=== Menu ===\n");
    srand(time(NULL));
    menuPrincipal();

    return 0;
}
