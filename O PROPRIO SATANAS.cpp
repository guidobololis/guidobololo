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
    cout << "Digite o codigo da cidade: ";
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
    cout << "Digite o codigo do curso: ";
    cin >> curso.codigo;
    cin.ignore();
    cout << "Digite a descrição do curso: ";
    getline(cin, curso.descricao);
    cout << "Digite o valor por aula do curso: ";
    cin >> curso.valor_por_aula;
    return curso;
}

Instrutor lerInstrutor() {
    Instrutor instrutor;
    cout << "Digite o codigo do instrutor: ";
    cin >> instrutor.codigo;
    cin.ignore();
    cout << "Digite o nome do instrutor: ";
    getline(cin, instrutor.nome);
    cout << "Digite o endereco do instrutor: ";
    getline(cin, instrutor.endereco);
    cout << "Digite o codigo da cidade do instrutor: ";
    cin >> instrutor.codigo_cidade;
    return instrutor;
}

void lerCidades(vector<Cidade>& cidades);
void lerCursos(vector<Curso>& cursos);
void adicionarInstrutor(vector<Instrutor>& instrutores, const vector<Cidade>& cidades);
void adicionarAluno(vector<Aluno>& alunos, const vector<Cidade>& cidades);
void excluirAluno(vector<Aluno>& alunos);
void adicionarTurma(vector<Turma>& turmas, const vector<Curso>& cursos, const vector<Instrutor>& instrutores, const vector<Cidade>& cidades);
void adicionarMatricula(vector<Matricula>& matriculas, const vector<Aluno>& alunos, const vector<Turma>& turmas, const vector<Curso>& cursos, const vector<Instrutor>& instrutores);
void consultarTurma(const vector<Turma>& turmas, const vector<Curso>& cursos, const vector<Instrutor>& instrutores, const vector<Cidade>& cidades);
void exibirTurmasCompletas(const vector<Turma>& turmas, const vector<Curso>& cursos, const vector<Instrutor>& instrutores, const vector<Cidade>& cidades);
void exibirMatriculas(const vector<Matricula>& matriculas, const vector<Aluno>& alunos, const vector<Turma>& turmas, const vector<Curso>& cursos, const vector<Instrutor>& instrutores);


int main() {
    vector<Cidade> cidades;
    vector<Curso> cursos;
    vector<Instrutor> instrutores;
    vector<Aluno> alunos;
    vector<Turma> turmas;
    vector<Matricula> matriculas;

    int opcao;
    
    do {
        cout << "\nMenu de Opcoes\n";
        cout << "1. Ler Cidades\n";
        cout << "2. Ler Cursos\n";
        cout << "3. Adicionar Instrutor\n";
        cout << "4. Adicionar Aluno\n";
        cout << "5. Excluir Aluno\n";
        cout << "6. Adicionar Turma\n";
        cout << "7. Adicionar Matricula\n";
        cout << "8. Consultar Turma\n";
        cout << "9. Exibir Turmas Completas\n";s
        cout << "10. Exibir Matriculas\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        
 switch (opcao) {
            case 1:
                lerCidades(cidades);
                break;
            case 2:
                lerCursos(cursos);
                break;
            case 3:
                adicionarInstrutor(instrutores, cidades);
                break;
            case 4:
                adicionarAluno(alunos, cidades);
                break;
            case 5:
                excluirAluno(alunos);
                break;
            case 6:
                adicionarTurma(turmas, cursos, instrutores, cidades);
                break;
            case 7:
                adicionarMatricula(matriculas, alunos, turmas, cursos, instrutores);
                break;
            case 8:
                consultarTurma(turmas, cursos, instrutores, cidades);
                break;
            case 9:
                exibirTurmasCompletas(turmas, cursos, instrutores, cidades);
                break;
            case 10:
                exibirMatriculas(matriculas, alunos, turmas, cursos, instrutores);
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida! Tente novamente.\n";
                break;
}while (opcao != 0);

    return 0;
}


