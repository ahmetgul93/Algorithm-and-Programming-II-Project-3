#ifndef TARIH_H
#define TARIH_H
#include "string.h"
using namespace std;

class Tarih
{
    friend ostream &operator<<(ostream &,const Tarih &);
    private:
    int gun;
    int ay;
    int yil;
    public:
        Tarih(int=0,int=0,int=0);
        void gun_ayarla(int);
        void ay_ayarla(int);
        void yil_ayarla(int);
        int gun_oku();
        int ay_oku();
        int yil_oku();
        bool operator<(Tarih &);

};
istream &operator>>(istream &,Tarih &);//friend olmadan tanimliyoruz bu asiri yuklemeyi
#endif // TARIH_H
