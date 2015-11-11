#ifndef VEICULO_H
#define VEICULO_H


class Veiculo
{
    public:
        Veiculo(int = 0, bool = 0);
        virtual ~Veiculo();

        virtual void mover() = 0;
        void verificarStatus();

    protected:
        int numerodeRodas;
        bool status;

};

#endif // VEICULO_H
