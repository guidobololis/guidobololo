#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Cidade {
    int codigo;
    string nome;
    string uf;
};

struct Curso {
    int codigo;
    string descricao;
    float valor_por_aula;
};

struct Instrutor {
    int codigo;
    string nome;
    string endereco;
    int codigo_cidade;
};

struct Aluno {
    int codigo;
    string nome;
    string endereco;
    int codigo_cidade;
};

struct Turma {
    int codigo;
    int codigo_curso;
    int codigo_instrutor;
    int total_participantes;
    int quant_max_participantes;
};

struct Matricula {
    int codigo;
    int codigo_aluno;
    int codigo_turma;
    int quantidade_aulas;
    float valor_total;
};

Cidade lerCidade() {
    Cidade cidade;
    cout << "Digite o c�digo da cidade: ";
    cin >> cidade.codigo;
    cin.ignore();
    cout << "Digite o nome da cidade: ";
    getline(cin, cidade.nome);
    cout << "Digite a UF da cidade: ";
    getline(cin, cidade.uf);
    return cidade;
}

Curso lerCurso() {
    Curso curso;
    cout << "Digite o c�digo do curso: ";
    cin >> curso.codigo;
    cin.ignore();
    cout << "Digite a descri��o do curso: ";
    getline(cin, curso.descricao);
    cout << "Digite o valor por aula do curso: ";
    cin >> curso.valor_por_aula;
    return curso;
}

Instrutor lerInstrutor() {
    Instrutor instrutor;
    cout << "Digite o c�digo do instrutor: ";
    cin >> instrutor.codigo;
    cin.ignore();
    cout << "Digite o nome do instrutor: ";
    getline(cin, instrutor.nome);
    cout << "Digite o endere�o do instrutor: ";
    getline(cin, instrutor.endereco);
    cout << "Digite o c�digo da cidade do instrutor: ";
    cin >> instrutor.codigo_cidade;
    return instrutor;
}

bool codInstrutorExiste (int intrutor.codigo, int codigo) {
        if (instrutor.codigo == codigo) {
            return true; 
        }
    }
    return false; 
}
int main(){
	lerCidade();
	lerCurso();
}

