#ifndef OGRENCILER_H
#define OGRENCILER_H
#include "ogrenci.h"


class Ogrenciler
{
    friend ostream &operator<<(ostream &,const Ogrenciler &);
    private:
    Ogrenci *ogrenciler_dizisi[1000];
    public:
        Ogrenciler();
        bool ogr_var_mi(int);
        void ogrenci_ekle(Ogrenci *);
        void ogrenci_sil(int);
        void numaraya_gore_listele(int);
        void tum_ogrenciler_listele(Ogrenciler *);
        void sinifa_gore_listele(int);
        void ada_gore_listele(String);
        void dogum_tarihine_gore(Tarih);
        void kayit_tarihine_gore(int);
        void seri_noya_gore_listele(String);
        void markaya_modele_gore_listele(String,String);
        void notlari_gir();

};

#endif // OGRENCILER_H
