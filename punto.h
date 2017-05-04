#ifndef PUNTO_H
#define PUNTO_H


class punto
{
    public:
        punto(),
        punto(float x, float y);
        punto (const punto & otroPunto); //constructor por copia
        float coordx () const;
        float coordy () const;
        float distancia (const punto & otroPunto) const;
        void trasladar (float dx, float dy);
        bool operator== (const punto & otroPunto) const;



    private:
        float x, y;
};

#endif // PUNTO_H
