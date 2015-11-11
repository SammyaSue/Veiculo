#ifndef FERRARI_H
#define FERRARI_H

#include"Carro.h"


class Ferrari :public Carro
{
    public:
        Ferrari(float = 60, float = 40, bool = 0, float = 40, int = 0, bool = 0);
        virtual ~Ferrari();

        virtual void mover();
        virtual void re()
    protected:
    private:
};

#endif // FERRARI_H
