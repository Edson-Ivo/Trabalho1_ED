#include <iostream>
#include <climits>
#include "QX_SeqList.h"

QX_SeqList::QX_SeqList() { // lista sequenciada NO LIMITS MY BRO
    
        vec = new int[1];
        size_vec = 0;
        capacity_vec = 1;
}

QX_SeqList::~QX_SeqList() {
    if(vec != NULL) {
        delete[] vec;
        std::cout << "QX_SeqList destruido" << std::endl;
    }
}

int QX_SeqList::size() { 
    return size_vec;  // retorna o valor da variavel que verifica o tamanho do vetor
}

bool QX_SeqList::isEmpty(){
    return (size_vec==0); // verifica se existe algum valor na lista
}

int QX_SeqList::search(int x) {
    for(int i = 0; i < size_vec; i++)// procura o valor na lista, caso encontre retorna ele
        if(vec[i] == x)
            return i;
    return INT_MIN;
}
 
int QX_SeqList::at(int k) {
    if(k < 0 || k > size_vec-1)// verifica se k é válido para o tamanho da lista
        return INT_MIN;//
    
    return vec[k];// retorna o valor da lista no k-ésimo ponto
}

void QX_SeqList::push_back(int x) {
    
    if(size_vec<capacity_vec){// verifica se o número de elementos chegou ao tamanho total da lista
    vec[size_vec] = x; // caso não tenha chegado, ele apenas vai inserir normalmente no espaço livre na lista
    size_vec++;
    }else{// caso tenha chegado ao total da lista
        int *aux;
        aux=new int[capacity_vec*2];// aux recebe aponta para um inteiro de da capacidade 2 vezes maior que o da lista principal
        for(int i=0;i<capacity_vec;i++){//preencher a lista aux com os valores da lista principal
            aux[i]=vec[i];
        }
        aux[size_vec] = x;//adicionar na lista aux o valor do parâmetro
        delete[] vec; // apagando os valores da lista principal
        vec=aux;// lista principal recebendo a lista aux;
        size_vec++;// incrementando o número de elementos da lista
        capacity_vec*=2;// duplicando a capacidade do vetor principal
    }
}

void QX_SeqList::pop_back() {
    
        int *aux;
        aux=new int[capacity_vec-1];// criando uma lista com a capacidade menor que a da lista principal (qunt-1)
        for(int i=0;i<capacity_vec-1;i++){ //  inserindo os valores da lista principal na lista criada
            aux[i]=vec[i];      //   como a lista criada tem a capacidade-1 da lista principal, ela não receberá o utimo elemento da lista principal          
        }
        delete[] vec;// apaga os valores da lista principal
        vec=aux;// lista principal será aux
        size_vec--;// diminui a quantidade de componentes da lista
        capacity_vec--;// diminui a capacidade da lista
}

void QX_SeqList::clear() {
    size_vec = 0;// zera o tamanho do vetor
}

void QX_SeqList::print() {
    if(!isEmpty())
    for(int i = 0; i < size_vec; i++)
        std::cout << vec[i] << " "; // imprime até o utimo elemento da lita
    else
        std::cout << "Lista Vazia"; 
    std::cout <<std::endl;
}

void QX_SeqList::printReverse() {
    if(!isEmpty())
    for(int i = size_vec-1; i >=0; i--)
        std::cout << vec[i] << " ";// imprime de do útimo elemento até o 1 da lista
    else
        std::cout << "Lista Vazia"; 
    std::cout <<std::endl;
}

void QX_SeqList::remove(int x) {
    int index = search(x);// index recebe o retorno da procura da lista de um componente com valor x
    if(index != INT_MIN) {//
        while(index <= size_vec-2) { // ficará inserindo no vec[index] os valores vec[index+1], e assim por diante até chegar o número de (valores na lista)-2
            vec[index] = vec[index+1]; // a substuição dos componentes pelo seu próximo
            index++;
        }
        size_vec--;// diminui(-1) o número de elementos da lista
    }
}

void QX_SeqList::removeAll(int x) {

   if(isEmpty())// verifica se é vazio
    std::cout<<"A lista esta vazia"<<std::endl;
    else if(search(x)==INT_MIN)// verifica se não existe na lista o valor pedido
    std::cout<<"Valor nao encontrado"<<std::endl;
    else{
        while(!isEmpty() && search(x)!=INT_MIN){// ficará fazendo o remove até que acabe todos os campos com o valor do parâmetro
            remove(x);
        }
    }
}








