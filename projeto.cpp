// Gabriel Augusto Ribiero Gomes TIA: 32134762
//

#include <iostream>
#include <sstream>
#include "LinkedList.h"
#include <fstream>
#include <string>
#include <iostream>
#include <istream>
using namespace std;

LinkedList criarLista() {
    // Cria a lista
    LinkedList lista = LinkedList();
    // Tenta abrir o arquivo
    ifstream input_file("./df_covid.csv");
    // Se nao conseguir abrir o arquivo, fechar o programa
    if (!input_file.is_open()) {
        cout << "nao foi possivel abrir o arquivo. Coloque ele no diretorio de execucao\n";
        exit(1);
    }
    stringstream stream;
    // Joga conteudo na stream 
    stream << input_file.rdbuf(); 
    string str;
    getline(stream, str); //Pega a primeira linha do stream e joga na string

    while (getline(stream, str)) {
        stringstream line(str);
        int atributos[20];
        int cont = 0;
        //para cada valor separado por virgula, armazenar na string
        while (getline(line, str, ',')) {
            int atributo = stoi(str);
            atributos[cont] = atributo;
            cont++;
        }
        int sexo = atributos[0];
        int tipoPaciente = atributos[1];
        int intubado = atributos[2];
        int pneumonia = atributos[3];
        int idade = atributos[4];
        int gravidez = atributos[5];
        int diabetes = atributos[6];
        int copd = atributos[7];
        int asma = atributos[8];
        int imunossupressao = atributos[9];
        int hipertensao = atributos[10];
        int outrasDoencas = atributos[11];
        int cardiovascular = atributos[12];
        int obesidade = atributos[13];
        int irc = atributos[14];
        int fumante = atributos[15];
        int outroCaso = atributos[16];
        int testeCovid = atributos[17];
        int icu = atributos[18];
        int obito = atributos[19];
        Paciente pac = Paciente(sexo, tipoPaciente, intubado, pneumonia, idade, gravidez, diabetes, copd, asma, imunossupressao, hipertensao, outrasDoencas,
            cardiovascular, obesidade, irc, fumante, outroCaso, testeCovid, icu, obito);
        lista.insertTail(pac);
    }
    return lista;

}
int main(){
    LinkedList lista = criarLista();
    cout << "Escolha o dado desejado:\n1- Numero de obesos mortos com covid:" << endl;
    cout << "2- Numero de mulheres nao gravidas mortas com covid:" << endl;
    cout << "3- Numero de homens fumantes com hipertansao nao mortos com covid:" << endl;
    cout << "4- Numero de mulheres com asma fumantes vivas com covid:" << endl;
    cout << "5- Numero de pessoas com hipertensao e imunossupressao vivas com covid:" << endl;
    
    int obesosMortosComCovid = lista.numeroDeObesosMortosComCovid();
    int mulheresNaoGravidasMortasComCovid = lista.numeroDeMulheresMortasNaoGravidasComCovid();
    int homensFumantesComHipertansaoNaoMortosComCovid = lista.numeroDeHomensFumantesComHipertensaoNaoMortosComCovid();
    int mulheresComAsmaFumantesVivasComCovid = lista.numeroDeMulheresComAsmaFumantesVivasComCovid();
    int pessoasComHipertensaoEImunossupressaoVivasComCovid = lista.numeroDePessoasComHipertensaoEImunossupressaoVivasComCovid();
    
    int opcao;
    cin >> opcao;
    switch (opcao) {
        case 1:
            cout << "Numero de obesos mortos com covid: " << obesosMortosComCovid << endl;
            break;
        case 2:
            cout << "Numero de mulheres nao gravidas mortas com covid: " << mulheresNaoGravidasMortasComCovid << endl;
            break;
        case 3:
            cout << "Numero de homens fumantes com hipertansao nao mortos com covid: " << homensFumantesComHipertansaoNaoMortosComCovid << endl;
            break;
        case 4:
            cout << "Numero de mulheres com asma fumantes vivas com covid: " << mulheresComAsmaFumantesVivasComCovid << endl;
            break;
        case 5:
            cout << "Numero de pessoas com hipertensao e imunossupressao vivas com covid: " << pessoasComHipertensaoEImunossupressaoVivasComCovid << endl; }
            
    }   
