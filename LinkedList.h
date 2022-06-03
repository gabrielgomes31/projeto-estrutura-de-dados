// Gabriel Augusto Ribiero Gomes TIA: 32134762
//

// LinkedList.h
#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include "NodeLL.h"
#include <string>
#include "Paciente.h"


class LinkedList {
private:
	NodeLL* head;
	NodeLL* tail;
public:
	LinkedList();
	~LinkedList();
	bool isEmpty();
	bool isFull();
	//bool insertHead(TIPO& dado);
	bool insertTail(TIPO& dado);
	//NodeLL* search(TIPO dado);
	//bool remove(TIPO dado);
	void clear();
	//void print();
	int numeroDeObesosMortosComCovid();
	int numeroDeMulheresMortasNaoGravidasComCovid();
	int numeroDeHomensFumantesComHipertensaoNaoMortosComCovid();
	int numeroDeMulheresComAsmaFumantesVivasComCovid();
	int numeroDePessoasComHipertensaoEImunossupressaoVivasComCovid();

	NodeLL* getHead(void) { return head; };
	void setHead(NodeLL* head) { this->head = head; }
};

#endif
