#include "ogrenci.h"
#include "stdio.h"
#include <iostream>
#include <iomanip>
using namespace std;

Ogrenci::Ogrenci(int arg_no,Tarih tarihdogum, Tarih tarihkayit, int s,float o,String ad,String soyad,Bilgisayar bilgisayar):ogr_no(arg_no),dogum_tarihi(tarihdogum),kayit_tarihi(tarihkayit),ogr_pc(bilgisayar)
{//ogrenci sinifi icin constructor tanimlanisi
    sinif=s;
    not_ortalamasi=o;
    ogr_ad_ayarla(ad);
    ogr_soyad_ayarla(soyad);
}
void Ogrenci::not_ortalamasi_ayarla(float o)
{
    not_ortalamasi=o;
}
void Ogrenci::sinif_ayarla(int s)
{
    sinif=s;
}
void Ogrenci::ogr_ad_ayarla(String a){
    ogr_ad=a;
}

void Ogrenci::ogr_soyad_ayarla(String s){
    ogr_soyad=s;
}

String Ogrenci::ogr_ad_oku() const{
    return ogr_ad;
}
String Ogrenci::ogr_soyad_oku() const{
    return ogr_soyad;
}
Tarih Ogrenci::dogum_tarihi_oku() const
{
    return dogum_tarihi;
}
Tarih Ogrenci::kayit_tarihi_oku() const
{
    return kayit_tarihi;
}
int Ogrenci::ogr_no_oku() const
{
    return ogr_no;
}
int Ogrenci::ogr_sinif_oku() const
{
    return sinif;
}
float Ogrenci::ogr_not_ortalamasi_oku() const
{
    return not_ortalamasi;
}
Bilgisayar Ogrenci::bilgisayar_bilgileri_oku() const
{
    return ogr_pc;
}
ostream &operator<<(ostream & cikti,const Ogrenci &ogrenci)
{//ogrenci class i icin << operatorunun asiri yuklenmesi
    cikti<<setw(6)<<left<<ogrenci.ogr_no<<" ";
    cikti<<setw(15)<<left<<ogrenci.ogr_ad<<" ";
    cikti<<setw(20)<<left<<ogrenci.ogr_soyad<<" ";
    cikti<<setw(5)<<left<<ogrenci.sinif<<" ";
    cikti<<setw(7)<<left<<ogrenci.not_ortalamasi<<" ";
    cikti<<setw(10)<<left<<ogrenci.dogum_tarihi<<" ";
    cikti<<setw(10)<<left<<ogrenci.kayit_tarihi<<" ";
    cikti<<endl;

    return cikti;
}
