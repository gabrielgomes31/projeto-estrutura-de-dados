// Gabriel Augusto Ribiero Gomes TIA: 32134762
//


#include <string>
#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
};
LinkedList::~LinkedList() {
    clear();
};

// Libera memória 
void LinkedList::clear() {
    NodeLL* pAnt, * pAnda = head;

    while (pAnda != nullptr) {
        pAnt = pAnda;  // Libera o nó
        pAnda = pAnda->getProx();
        pAnt->setProx(nullptr);
        delete pAnt;
        pAnt = nullptr;
    }
    head = nullptr;
}

int LinkedList::numeroDeObesosMortosComCovid() {
    NodeLL* aux = head;
    int contador = 0;
    while (aux != nullptr) {
        TIPO data = aux->getId();
        bool consulta = data.obito == 1 && data.testeCovid == 1 && data.obesidade == 1;
        if (consulta) {
            contador++;
        }
        aux = aux->getProx();
    }
    return contador;
}

int LinkedList::numeroDeMulheresMortasNaoGravidasComCovid()
{
    NodeLL* aux = head;
    int contador = 0;
    while (aux != nullptr) {
        TIPO data = aux->getId();
        bool consulta = data.obito == 1 && data.sexo == 1 && data.gravidez == 2 && data.testeCovid == 1;
        if (consulta) {
            contador++;
        }
        aux = aux->getProx();
    }
    return contador;
}

int LinkedList::numeroDeHomensFumantesComHipertensaoNaoMortosComCovid()
{
    NodeLL* aux = head;
    int contador = 0;
    while (aux != nullptr) {
        TIPO data = aux->getId();
        bool consulta = data.obito == 0 && data.sexo == 2 && data.fumante == 1 && data.testeCovid == 1 && data.hipertensao == 1;
        if (consulta) {
            contador++;
        }
        aux = aux->getProx();
    }
    return contador;
}

int LinkedList::numeroDeMulheresComAsmaFumantesVivasComCovid()
{
    NodeLL* aux = head;
    int contador = 0;
    while (aux != nullptr) {
        TIPO data = aux->getId();
        bool consulta = data.obito == 0 && data.sexo == 1 && data.fumante == 1 && data.testeCovid == 1 && data.asma == 1;
        if (consulta) {
            contador++;
        }
        aux = aux->getProx();
    }
    return contador;
}

int LinkedList::numeroDePessoasComHipertensaoEImunossupressaoVivasComCovid()
{
    NodeLL* aux = head;
    int contador = 0;
    while (aux != nullptr) {
        TIPO data = aux->getId();
        bool consulta = data.hipertensao == 1 && data.imunossupressao == 1 && data.obito == 0 && data.testeCovid == 1;
        if (consulta) {
            contador++;
        }
        aux = aux->getProx();
    }
    return contador;
}


bool LinkedList::isEmpty() {
    if (getHead() == nullptr) return true;
    else return false;
};

bool LinkedList::isFull() {
    NodeLL* aux = new NodeLL();

    if (aux == nullptr) return true;

    aux = nullptr;
    return false;
};


bool LinkedList::insertTail(TIPO& dado) {
    NodeLL* node;
    if (!isFull()) {
        node = new NodeLL(dado, nullptr);
        if (isEmpty()) { // Lista está vazia
            head = node;
            tail = node;
        }
        else { // Insere no começo e atualiza o ponteiro
            NodeLL* aux = tail;
            aux->setProx(node);
            tail = node;
        }
        return true;
    }
    else return false; // std::cout << "Overflow – Sem memória";

};





