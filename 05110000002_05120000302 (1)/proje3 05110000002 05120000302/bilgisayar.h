#ifndef BILGISAYAR_H
#define BILGISAYAR_H
#include "string.h"
#include <stdio.h>
using std::ostream;
using namespace std;
class Bilgisayar
{
    friend istream &operator>>(istream &, Bilgisayar &);
    friend ostream &operator<<(ostream &,const Bilgisayar &);
    private:
     String seri_no;
     String markasi;
     String model;
    public:
        Bilgisayar(String=NULL,String=NULL,String=NULL); //constructor uzerinde default deger atanmasi
        void seri_no_ayarla(String) ;
        void marka_ayarla(String) ;
        void model_ayarla(String) ;
        String seri_no_oku() const;
        String marka_oku() const;
        String model_oku() const;


};

#endif // BILGISAYAR_H
