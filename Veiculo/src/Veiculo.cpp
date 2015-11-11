#include "Veiculo.h"

Veiculo::Veiculo(int numerodeRodas, bool status)

{
    if( numerodeRodas >= 0 )
       this->numerodeRodas = numerodeRodas;
    else
        this->numerodeRodas = 0;
    this->status = status;
}

Veiculo::~Veiculo()
{

}
