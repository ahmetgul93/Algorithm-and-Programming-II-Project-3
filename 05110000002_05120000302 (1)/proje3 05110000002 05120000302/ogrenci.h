#ifndef OGRENCI_H
#define OGRENCI_H
#include "string.h"
#include "tarih.h"
#include "bilgisayar.h"
class Ogrenci
{
    friend ostream &operator<<(ostream &,const Ogrenci &);//asiri yukleme

    private:
         const int ogr_no;
         String ogr_ad;
         String ogr_soyad;
         const Tarih dogum_tarihi;
         const Tarih kayit_tarihi;
         const Bilgisayar ogr_pc;
         int sinif;
         float not_ortalamasi;



    public:
        Ogrenci(int,Tarih,Tarih,int,float,String,String,Bilgisayar);
        void ogr_ad_ayarla(String);
        void ogr_soyad_ayarla(String);
        void not_ortalamasi_ayarla(float);
        void sinif_ayarla(int);
        String ogr_ad_oku() const;
        String ogr_soyad_oku() const;
        Tarih dogum_tarihi_oku() const;
        Tarih kayit_tarihi_oku() const;
        Bilgisayar bilgisayar_bilgileri_oku() const;
        int ogr_no_oku() const;
        int ogr_sinif_oku() const;
        float ogr_not_ortalamasi_oku() const;

};
#endif // OGRENCI_H
