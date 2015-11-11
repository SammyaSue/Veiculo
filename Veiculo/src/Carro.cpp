#include "Carro.h"

Carro::Carro( bool marcha, float velocidade, int numerodeRodas, bool status)
:Veiculo( numerodeRodas, status )
{
    this->marcha = marcha;
    if( velocidade >= 0 )
        this->velocidade = velocidade;
    else
        velocidade = 0;
}

Carro::~Carro()
{
    //dtor
}
