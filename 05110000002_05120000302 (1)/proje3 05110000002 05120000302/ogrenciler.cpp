#include "ogrenciler.h"
#include "ogrenci.h"
#include "string.h"
using namespace std;
Ogrenciler::Ogrenciler()
{
    for(int i=0;i<1000;i++)//ilkledik
    {
        ogrenciler_dizisi[i]=NULL;
    }
}
bool Ogrenciler::ogr_var_mi(int ogr_no)
{
    if(ogrenciler_dizisi[ogr_no-1]!=NULL)//Ogrencinin olup olmadigi araniyor
    return true;
    return false;
}
void Ogrenciler::ogrenci_ekle(Ogrenci *yeni_ogrenci)
{
        ogrenciler_dizisi[yeni_ogrenci->ogr_no_oku()-1]=yeni_ogrenci;
}
void Ogrenciler::ogrenci_sil(int silinecek_ogrenci_no)
{
        delete ogrenciler_dizisi[silinecek_ogrenci_no-1];//siliniyor
        ogrenciler_dizisi[silinecek_ogrenci_no-1]=NULL;

}
void Ogrenciler::numaraya_gore_listele(int goruntulenecek_ogr)
{
       cout<<"Ogr No Ad              Soyad                Sinif Not Ort Dogum Tar  Kayit Tar"<<endl;
       cout<<"------ --------------- -------------------- ----- ------- ---------- ----------"<<endl;
       cout<<*(ogrenciler_dizisi[goruntulenecek_ogr-1]);
       cout<<endl;
       cout<<"Tasinabilir Bilgisayar:"<<endl;
       cout<<"Seri Numarasi Marka       Model"<<endl;
       cout<<"------------- ----------- -----------"<<endl;
       cout<<(ogrenciler_dizisi[goruntulenecek_ogr-1]->bilgisayar_bilgileri_oku());//method cagriliyor
       cout<<endl;

}
void Ogrenciler::sinifa_gore_listele(int sinif)
{
    int ogr_say=0;
    for(int i=0;i<1000;i++)
    {
        if(ogrenciler_dizisi[i]!=NULL){
            if(ogrenciler_dizisi[i]->ogr_sinif_oku()==sinif){
           cout<<(*ogrenciler_dizisi[i]);
         ogr_say++;//ogrenci sayiliyor
        }
        }
    }
    cout<<"Bu sinifta okuyan ogrenci sayisi: "<<ogr_say<<endl;
}
void Ogrenciler::ada_gore_listele(String isim)
{
    for(int i=0;i<1000;i++)
    {
        if(ogrenciler_dizisi[i]!=NULL)
        {
           if(ogrenciler_dizisi[i]->ogr_ad_oku()==isim)
           cout<<(*ogrenciler_dizisi[i]);
        }
    }
}
void Ogrenciler::dogum_tarihine_gore(Tarih dogum_tarihi)
{
    for(int i=0;i<1000;i++)
    {
        if(ogrenciler_dizisi[i]!=NULL)
        {
            if((ogrenciler_dizisi[i]->dogum_tarihi_oku()<dogum_tarihi)==false)//tarih karsilastiriliyor
            cout<<(*ogrenciler_dizisi[i]);
        }
    }
}
ostream &operator<<(ostream &cikti,const Ogrenciler &ogr_dizi)
{//toplu yazdirma islemi icin ogrenciler classýnda << operatoru asiri yukleniyor
    for(int i=0;i<1000;i++){
        if(ogr_dizi.ogrenciler_dizisi[i]!=NULL)
           cikti<<*(ogr_dizi.ogrenciler_dizisi[i]);}
    return cikti;
}
void Ogrenciler::kayit_tarihine_gore(int kayit_yili)
{//ogrenciler kayit tarihine gore listeleniyor
    for(int i=0;i<1000;i++)
    {
        if(ogrenciler_dizisi[i]!=NULL)
        {
            if(ogrenciler_dizisi[i]->kayit_tarihi_oku().yil_oku()>kayit_yili)
            cout<<(*ogrenciler_dizisi[i])<<endl;
        }
    }
}
void Ogrenciler::seri_noya_gore_listele(String seri_no)
{
    int bulundu=0;
    for(int i=0;i<1000;i++)
    {
        if(ogrenciler_dizisi[i]!=NULL)
        {
            if((ogrenciler_dizisi[i]->bilgisayar_bilgileri_oku().seri_no_oku()==seri_no)==true){
            cout<<(*ogrenciler_dizisi[i]);
            bulundu=1;
            }
        }
    }
    if(bulundu==0)
    cout<<"Boyle bir seri numarasina sahip bir bilgisayar yoktur!"<<endl;
}
void Ogrenciler::markaya_modele_gore_listele(String marka,String model)
{
    for(int i=0;i<1000;i++)
    {
        if(ogrenciler_dizisi[i]!=NULL)
        {
            if((ogrenciler_dizisi[i]->bilgisayar_bilgileri_oku()).marka_oku()==marka)
            {
                if((ogrenciler_dizisi[i]->bilgisayar_bilgileri_oku()).model_oku()==model)
                cout<<(*ogrenciler_dizisi[i]);
            }
        }
    }
}
void Ogrenciler::notlari_gir()
{
    int sinif;
    float not_ortalamasi;
    for(int i=0;i<1000;i++)
    {
        if(ogrenciler_dizisi[i]!=NULL)
        {
            cout<<"Lutfen "<<i+1<<" numarali ogrencinin ";
            cout<<"sinifini giriniz:"<<endl;
            cin>>sinif;
            ogrenciler_dizisi[i]->sinif_ayarla(sinif);
            cout<<"not ortalamasini giriniz:"<<endl;
            cin>>not_ortalamasi;
            ogrenciler_dizisi[i]->not_ortalamasi_ayarla(not_ortalamasi);
        }
    }
}
