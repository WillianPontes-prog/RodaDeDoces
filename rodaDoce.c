#include <stdio.h>
#include <stdlib.h>

/**==Structure================================**/
typedef struct node {

    int data;               //Valor da posição

    struct node *next;      //Próxima posição

    struct node *before;    //Posição anterior

}   Node;   //Nome da structure

/**==Declarando funções=======================**/

Node* CreateCircle(int n, int fixN);    //Cria um circulo com a quantidade de doces desejada

void Cleam(Node* K, Node* M );          //Limpa a posição

int Validar();                          //lê entradas até encontrar uma válida

/**==Main=====================================**/
int main(){

    //declaração de variaveis;
    Node* K;
    Node* M;
    int Knumber, Mnumber, Ndoces;
    int i, contagem = 0;


    //**==Número de doces========================**//*

    printf("\nQuantidade de doces: ");
    Ndoces = Validar();

    //**==Passos por rodado do Kleitim===========**//*

    printf("\nPassos de Kleitim por rodada:");
    Knumber = Validar();

    //**==Passos por rodado do Marquim===========**//*

    printf("\nPassos de Marquim por rodada:");
    Mnumber = Validar();

    //**==Cria o circulo de doces===============**//*

    printf("\n");

    //Adiciona um ponteiro que aponta para posição em que Kteitim esta e armazena na variavel K
    K = CreateCircle(Ndoces, Ndoces);
    //Copia o ponteiro para Marquim na variavel M e ajusta uma posição
    M = K;
    M = M->next;


    while(contagem != Ndoces){

        //faz Kleitim andar
        for(i = 0; i < Knumber; i++){
            K = K->next;
        }

        //faz Marquim andar
        for(i = 0; i < Mnumber; i++){
            M = M->before;
        }


        if(M == K){
            printf("Ambos pararam na posicao: %d  ", K->data);

            Cleam(&*K, &*M);

            contagem++;
        }else{
            printf("Kleitim parou na posicao: %d \nMarquim parou na posicao: %d ", K->data, M->data);

            Cleam(&*K, &*M);

            contagem+=2;
        }




        printf("\n\n");
    }

    return 0;
}

Node* CreateCircle(int n, int fixN) {

    Node* l;
    Node* aux;
    Node* auxBack;


    l = (Node*)malloc(sizeof(Node));


    if(n > 0){
        l->data = n;

        l->before = CreateCircle(n - 1, fixN);

        if(n == fixN){

            //cria um ponteiro auxiliar
            aux = l;

            while(aux->before != NULL){
                auxBack = aux;
                aux = aux->before;
                aux->next = auxBack;
            }

            l->next = aux;
            aux->before = l;
        }


    }else{
        l = NULL;
    }


    return l;
}

void Cleam(Node *K, Node *M) {

    Node *l, *aux;

    l = K->next;
    l->before = K->before;

    l = K->before;
    l->next = K->next;

    l = M->next;
    l->before = M->before;

    l = M->before;
    l->next = M->next;

    aux = K;
    *K = *K->next;
    *K = *K->before;

    if(aux != M && aux != K){
        free(aux);
    }

    aux = M;

    *M = *M->before;
    *M = *M->next;

    if(aux != M && aux != K){
        free(aux);
    }

}

int Validar(){
    int num;
    while ((scanf("%d", &num) != 1) || (num <=0)){
        static char temp[256];
        fgets(temp, sizeof(temp), stdin);
        printf("\nEntrada invalida.\n\nTente novamente:");
    }
    return num;
}
