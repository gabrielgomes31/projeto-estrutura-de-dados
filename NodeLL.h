// Gabriel Augusto Ribiero Gomes TIA: 32134762
//


// NodeLL.h
#include "Paciente.h"
#ifndef __NODE_LL_H__
#define __NODE_LL_H__
typedef Paciente TIPO;
class NodeLL  // ll = linked List
{
public:
	NodeLL() { prox = nullptr; };
	NodeLL(TIPO dado, NodeLL* prox) {
		this->dado = dado;
		this->prox = prox;
	};
	~NodeLL();

	NodeLL* getProx() { return prox; };
	TIPO getId() { return dado; };

	void setProx(NodeLL* prox) { this->prox = prox; };
	void setId(TIPO dado) { this->dado = dado; };

private:
	TIPO dado;
	NodeLL* prox;
};

#endif
