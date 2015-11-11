#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"


class Carro : public Veiculo
{
    public:
        Carro( bool = 0, float = 40, int = 0, bool = 0);
        virtual ~Carro();

        virtual void mover() = 0;
        void verificarStatus();
        virtual void re() = 0;

    protected:
        bool marcha;
        float velocidade;

};

#endif // CARRO_H
