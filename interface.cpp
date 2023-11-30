#include <iostream>

// Classe abstrata pura (interface)
class Interface {
public:
    virtual void metodo() = 0;  // Função puramente virtual
    virtual void outroMetodo() = 0;
    virtual ~Interface() {}  // Destrutor virtual, útil se você tiver alocação dinâmica
};

// Classe que implementa a interface
class Implementacao : public Interface {
public:
    void metodo() override {
        std::cout << "Implementação do método." << std::endl;
    }

    void outroMetodo() override {
        std::cout << "Implementação de outro método." << std::endl;
    }
};

int main() {
    // Pode-se criar um objeto da classe de implementação
    Implementacao objeto;
    objeto.metodo();
    objeto.outroMetodo();

    // Ou um ponteiro para a interface pode ser usado
    Interface* ponteiro = &objeto;
    ponteiro->metodo();
    ponteiro->outroMetodo();

    return 0;
}
