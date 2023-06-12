#include <iostream>
#include <map> //Necessaria para criar a tabela de mercadorias
#include <iomanip> //Necessaria para formatar as saidas

using namespace std;


//Formato do tipo de dado que armazena as mercadorias
struct stProdutos {
    int iCodProduto;
    string sNomeProduto;
    float fValor;
    int iEstoque;
};

stProdutos Espaco[5];
int iContador;

void fAltMercadoria() {
    int iOpcao;
    void administrador();
    cout << "--------------------------------------------------" << endl;
    cout << setw(40) << "Alterar mercadoria" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << setw(10) << left << "Posicao" << setw(10) << left << "Codigo" << setw(15) << left << "Mercadoria" << setw(15) << left << "Preço" << setw(15) << left << "Quantidade" << endl;
    for (iContador = 0; iContador < 5 ; iContador++) {
        cout << setw(10) << left << iContador << setw(10) << left << Espaco[iContador].iCodProduto << setw(15) << left << Espaco[iContador].sNomeProduto << setw(15) << left << Espaco[iContador].fValor << setw(15) << left << Espaco[iContador].iEstoque << endl;   
    }
    do {
        cout << "Digite a posicao do item que deseja alterar ou 20 - para voltar: " << endl;
        cin >> iOpcao;
        if (iOpcao >= 0 && iOpcao <= 4) {
            cout << setw(10) << left << Espaco[iOpcao].iCodProduto << setw(15) << left << Espaco[iOpcao].sNomeProduto << setw(15) << left << Espaco[iOpcao].fValor << setw(15) << left << Espaco[iOpcao].iEstoque << endl;
            cout << "Digite o novo codigo do produto: " << endl;
            cin >> Espaco[iOpcao].iCodProduto;
            cout << "Digite o novo nome do produto: " << endl;
            cin >> Espaco[iOpcao].sNomeProduto;
            cout << "Digite o novo valor do produto: " << endl;
            cin >> Espaco[iOpcao].fValor;
            cout << "Digite a nova quantidade em estoque: " << endl;
            cin >> Espaco[iOpcao].iEstoque;
            cout << "--------------------------------------------------" << endl;
            cout << setw(40) << "Estoque Atualizado" << endl << setw(10) << left << "Posicao" << setw(10) << left << "Codigo" << setw(15) << left << "Mercadoria" << setw(15) << left << "Preço" << setw(15) << left << "Quantidade" << endl;
            for (iContador = 0; iContador < 5 ; iContador++) {
                cout << setw(10) << left << iContador << setw(10) << left << Espaco[iContador].iCodProduto << setw(15) << left << Espaco[iContador].sNomeProduto << setw(15) << left << Espaco[iContador].fValor << setw(15) << left << Espaco[iContador].iEstoque << endl;   
            }
        }else if (iOpcao == 20) {
            administrador();
        }
        else {
            cout << "Posicao invalida" << endl;
                fAltMercadoria();
        }
    } while (iOpcao >= 0 && iOpcao <= 4);
}

void fInventario() {
    int iOpcao;
    void administrador();
    cout << setw(10) << left << "Codigo" << setw(15) << left << "Mercadoria" << setw(15) << left << "Preço" << setw(15) << left << "Quantidade" << endl;
    for (iContador = 0; iContador < 5 ; iContador++) {
        cout << setw(10) << left << Espaco[iContador].iCodProduto << setw(15) << left << Espaco[iContador].sNomeProduto << setw(15) << left << Espaco[iContador].fValor << setw(15) << left << Espaco[iContador].iEstoque << endl;   
    }
    do {
        cout << "Digite:\n1 - Voltar\n2 - Sair" << endl;
        cin >> iOpcao;
        switch (iOpcao) {
            case 1:
                cout << "Voltar" << endl;
                administrador();
            break;
            case 2:
                cout << "Sair" << endl;
            break;
            default:
                cout << "Opcao invalida" << endl;
            break;
        }
    } while (iOpcao != 1 && iOpcao != 2);
}

void fFaturamento(){

}

void administrador() {
    void fInventario();
    cout << setw(40) << "Modulo Administrador" << endl;
    cout << "--------------------------------------------------" << endl;
    int iOpcao;
    cout << "1 - Alterar mercadoria" << endl;
    cout << "2 - Listar mercadorias" << endl;
    cout << "3 - Faturamento" << endl;
    cout << "4 - Sair" << endl;
    cout << "Digite a opcao desejada: ";
    cin >> iOpcao;
    switch (iOpcao) {
        case 1:
            cout << "Alterar mercadoria" << endl;
                fAltMercadoria();
            break;
        case 2:
            cout << "Listar mercadorias" << endl;
                fInventario();
            break;
        case 3:
            cout << "Faturamento" << endl;
                fFaturamento();
            break;
        case 4:
            cout << "Sair" << endl;
                main();
            break;
        default:
            cout << "Opcao invalida" << endl;
            break;
    }
}

void cliente() {

}

int main() {
    cout << setw(40) << "Maquina de Venda Automatica" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << setw(10) << left << "Codigo" << setw(15) << left << "Mercadoria" << setw(15) << left << "Preço" << setw(15) << left << "Quantidade" << endl;
    
    for (iContador = 0; iContador < 5 ; iContador++) {
        cout << setw(10) << left << Espaco[iContador].iCodProduto << setw(15) << left << Espaco[iContador].sNomeProduto << setw(15) << left << Espaco[iContador].fValor << setw(15) << left << Espaco[iContador].iEstoque << endl;   
    }
    if (Espaco[0].iEstoque + Espaco[1].iEstoque + Espaco[2].iEstoque + Espaco[3].iEstoque + Espaco[4].iEstoque == 0) {
        administrador();
    }
    
}