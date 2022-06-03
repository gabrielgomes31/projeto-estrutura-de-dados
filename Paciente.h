// Gabriel Augusto Ribiero Gomes TIA: 32134762
//


#ifndef __PACIENTE_H__
#define __PACIENTE_H__
class Paciente {
public:
    Paciente(int sexo, int tipoPaciente, int intubado, int pneumonia, int idade, int gravidez,
        int diabetes, int copd, int asma, int imunossupressao, int hipertensao, int outrasDoencas,
        int cardiovascular, int obesidade, int irc, int fumante, int outroCaso, int testeCovid, int icu, int obito);
    Paciente();
    int sexo;
    int tipoPaciente;
    int intubado;
    int pneumonia;
    int idade;
    int gravidez;
    int diabetes;
    int copd;
    int asma;
    int imunossupressao;
    int hipertensao;
    int outrasDoencas;
    int cardiovascular;
    int obesidade;
    int irc;
    int fumante;
    int outroCaso;
    int testeCovid;
    int icu;
    int obito;
};



#endif
