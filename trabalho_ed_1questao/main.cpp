#include <iostream>
#include "QX_SeqList.h"
#define MAX 10
using namespace std;

int main() { 
    QX_SeqList lista; // Criando lista sequencial

    ///////////////////////////////////////
    cout<<"isEmpty "<<lista.isEmpty();// imprimir se a lista está vazia
    cout<<endl;//quebra de linha para deixar organized hehe
    //Inserindo valores////////////////////
    lista.push_back(1);// Inserindo valor 1
    lista.push_back(1);// Inserindo valor 1
    lista.push_back(2);// Inserindo valor 2
    lista.push_back(2);// Inserindo valor 2
    lista.push_back(2);// Inserindo valor 2
    lista.push_back(3);// Inserindo valor 3
    lista.push_back(4);// Inserindo valor 4
    lista.push_back(5);// Inserindo valor 5
    ///////////////////////////////////////
    lista.print();//imprimindo valores em ordem de inserimento
    ///////////////////////////////////////
    lista.printReverse();//imprimindo valores em ordem inversa de inserimento
    ///////////////////////////////////////
    cout<<"size "<<lista.size();// imprimir o tamanho da lista
    cout<<endl;//quebra de linha para deixar organized hehe
    ///////////////////////////////////////
    cout<<"isEmpty "<<lista.isEmpty();// imprimir se a lista está vazia
    cout<<endl;//quebra de linha para deixar organized hehe
    ///////////////////////////////////////
    cout<<"Seach "<<lista.search(3);// imprimir a posição se caso for encontrada um nó de valor x, caso n retorna INT_MIN;
    cout<<endl;//quebra de linha para deixar organized hehe
    ///////////////////////////////////////
    cout<<"at "<<lista.at(3);// imprimir a (?)-ésimo valor;
    cout<<endl;//quebra de linha para deixar organized hehe
    ///////////////////////////////////////
    lista.print();
    lista.remove(2);// apaga o 1° valor encontrado na lista
    lista.print();
    lista.removeAll(1);// apaga todos os valores encontrados na lista
    lista.print();
    ///////////////////////////////////////
    lista.print();
    lista.pop_back();// Removendo o utimo valor inserido (diminui o tamanho da lista)
    lista.print();
    ///////////////////////////////////////
    cout<<"size "<<lista.size();// imprimir o tamanho da lista
    cout<<endl;//quebra de linha para deixar organized hehe
    ///////////////////////////////////////
    lista.print();
    lista.clear();// Limpa a lista
    lista.print();
    ///////////////////////////////////////
    cout<<"size "<<lista.size();// imprimir o tamanho da lista
    cout<<endl;//quebra de linha para deixar organized hehe
    ///////////////////////////////////////
    

    






    
    //lista.clear();
    

    return 0;
}
