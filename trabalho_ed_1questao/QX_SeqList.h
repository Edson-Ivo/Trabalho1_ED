/**
 * Definicao da classe QX_SeqList 
 * Essa classe corresponde a uma lista sequencial implementada
 * como um array, cuja capacidade total deve ser definida 
 * pelo usuario no momento da criacao de um objeto do
 * tipo QX_SeqList.
 */
#ifndef QXSEQLIST_H
#define QXSEQLIST_H
#include <iostream>

class QX_SeqList {
    private:
        int *vec = NULL; // Vetor de inteiros
        int size_vec = 0; // Qtd de elementos no vetor
        int capacity_vec = 1; // Capacidade total do vetor
    public:
        // --- Construtor
        // Recebe como parametro a capacidade total da lista 
        QX_SeqList(); 

        // --- Destrutor
        // Libera a memoria alocada para a lista
        ~QX_SeqList();

        // --- size
        // Retorna tamanho da lista
        int size();

        // --- isFull
        // Retorna 'true' se a lista estiver cheia e 
        // 'false' caso contrario.
        //bool isFull();

        // --- isEmpty
        // Retorna 'true' se a lista estiver vazia e 
        // 'false' caso contrario.
        bool isEmpty();

        // --- clear 
        // Apos essa operacao, a lista fica vazia.
        void clear();

        // --- print
        // Imprime todos os elementos da lista em uma unica linha.
        void print();
        
        // --- printReverse
        // Imprime todos os elementos de forma reversa da lista em uma unica linha.
        void printReverse();

        // --- search
        // Busca o elemento x na lista e retorna o 
        // indice da primeira ocorrencia de x 
        // caso ele esteja presente na lista; ou retorna -1,
        // caso o elemento x nao esteja presente na lista 
        int search(int x); 

        // --- at
        // Retorna o elemento na posicao 'index'
        // Se 'index' estiver fora do intervalo valido, a 
        // operacao retorna o menor inteiro que uma variavel 
        // inteira pode armazenar.
        // Dica 1: o menor inteiro pode ser obtido usando a 
        // constante simbolica INT_MAX que esta definida na 
        // biblioteca <climits>
        // Dica 2: Uma outra forma de obter o menor inteiro eh usando
        // a constante std::numeric_limits<int>::min() 
        // que esta definida na biblioteca <limits>
        int at(int k);

        // --- push back
        // Recebe um inteiro x como argumento e
        // adiciona o inteiro x logo apos o ultimo elemento 
        void push_back(int x);

        // --- pop back
        // Remove elemento do nal da lista
        void pop_back();

        // --- remove
        // Remove a primeira ocorrencia do elemento x no QX_SeqList 
        void remove(int x);

        // --- removeAll
        // Remove todas as ocorrências do inteiro x no QX_SeqList 
        void removeAll(int x);

        // --- insertAt
        // Adiciona o elemento x na posicao 'index' 
        // (somente se 0 <= index <= size_vec && size_vec < max_vec)
        // Ao fazer isso, todos os elementos da posicao 
        // 'index' em diante são deslocados para a direita
        bool insertAt(int x, int index);

        // --- replaceAt
        // Troca o elemento na posicao 'index' pelo elemento x
        // (somente se 0 <= index <= size_vec-1)
        bool replaceAt(int x, int index);

        // --- removeAt
        // Remove o elemento na posicao k da lista
        // Deve-se ter 0 <= k <= size_vex-1; caso contrario,
        // a remocao nao sera realizada
        void removeAt(int k);

        // --- toString
        // Retorna os elementos da lista no formato de uma std::string
        // Dica: a fim de formar a string que sera retornada, 
        // use a função std::to_string() que recebe
        // um inteiro como argumento e retorna esse inteiro
        // no formato de uma std::string
        std::string toString();
};

#endif