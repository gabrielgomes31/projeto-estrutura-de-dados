// Gabriel Augusto Ribiero Gomes TIA: 32134762
//


#include "Paciente.h"

Paciente::Paciente(int sexo, int tipoPaciente, int intubado, int pneumonia, int idade, int gravidez, int diabetes,
	int copd, int asma, int imunossupressao, int hipertensao,
	int outrasDoencas, int cardiovascular, int obesidade, int irc, 
	int fumante, int outroCaso, int testeCovid, int icu, int obito)
{
	this->sexo = sexo;
	this->tipoPaciente = tipoPaciente;
	this->intubado = intubado;
	this->pneumonia = pneumonia;
	this->idade = idade;
	this->gravidez = gravidez;
	this->diabetes = diabetes;
	this->copd = copd;
	this->asma = asma;
	this->imunossupressao = imunossupressao;
	this->hipertensao = hipertensao;
	this->outrasDoencas = outrasDoencas;
	this->cardiovascular = cardiovascular;
	this->obesidade = obesidade;
	this->irc = irc;
	this->fumante = fumante;
	this->outroCaso = outroCaso;
	this->testeCovid = testeCovid;
	this->icu = icu;
	this->obito = obito;
}
Paciente::Paciente(){}
