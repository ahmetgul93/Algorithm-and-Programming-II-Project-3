#include <iostream>
#include "ogrenci.h"
#include "string.h"
#include "bilgisayar.h"
#include "tarih.h"
#include <stdio.h>
#include "ogrenciler.h"
#include <iomanip>
using namespace std;

int main()
{
  int secim;
  Ogrenciler ogrenci_dizisi;
  String ad;
  String soyad;
  Tarih dogum_tarihi;
  Tarih kayit_tarihi;
  int ogrenci_no;
  int sinif;
  float not_ortalamasi;
  String seri_no;
  String marka;
  String model;
  int kayit_yili;

   do{
     cout<<"---------------------------->OGRENCI TAKIP SISTEMI<----------------------------"<<endl;
     cout<<"1. Yeni kazanan bir ogrencinin okula kaydedilmesi"<<endl;
     cout<<"2. Yatay gecisle gelen bir ogrencinin okula kaydedilmesi"<<endl;
     cout<<"3. Yil sonunda tum ogrencilerin siniflarinin ve not ortalamalarinin\n   guncellenmesi"<<endl;
     cout<<"4. Bir ogrencinin okuldan kaydinin silinmesi"<<endl;
     cout<<"5. Bir ogrencinin bilgilerinin goruntulenmesi"<<endl;
     cout<<"6. Okula kayitli tum ogrencilerin listelenmesi"<<endl;
     cout<<"7. Bir sinifta okuyan ogrencilerin listelenmesi"<<endl;
     cout<<"8. Belirli bir ada sahip ogrencilerin listelenmesi"<<endl;
     cout<<"9. Belirli bir tarihten once dogan ogrencilerin listelenmesi"<<endl;
     cout<<"10. Belirli bir yildan sonra bolume kaydedilmis ogrencilerin listelenmesi"<<endl;
     cout<<"11. Bir tasinabilir bilgisayarin verilmis oldugu ogrencinin bilgilerinin\n    goruntulenmesi"<<endl;
     cout<<"12. Belirli bir marka ve model bilgisayarin verilmis oldugu ogrencilerin\n    listelenmesi"<<endl;
     cout<<"13. Cikis"<<endl;

     cout<<"         Lutfen seciminizi giriniz: ";
     cin>>secim;
     cout<<endl;
     switch(secim) //ana menu icin secim alinmasi
     {
         case 1:cout<<"Lutfen eklemek istediginiz ogrencinin numarasini giriniz:"<<endl;
                cin>>ogrenci_no; //ogrenci bilgileri aliniyor
                if(ogrenci_dizisi.ogr_var_mi(ogrenci_no)==false)
                {
                cout<<"Lutfen adini giriniz:"<<endl;
                cin>>ad;
                cout<<"Lutfen soyadini giriniz:"<<endl;
                cin>>soyad;
                cout<<"Lutfen sinifini giriniz:"<<endl;
                cin>>sinif;
                cout<<"Lutfen dogum tarihini giriniz:"<<endl;
                cin>>dogum_tarihi;
                cout<<"Lutfen kayit tarihini giriniz:"<<endl;
                cin>>kayit_tarihi;
                cout<<"Lutfen bilgisayarin ";
                Bilgisayar bilgisayar(0,0,0);
                cin>>bilgisayar;

                 Ogrenci *eklenecek; //eklenecek yeni ogrenci icin ogrenci dugumu yaratiliyor
                 eklenecek=new Ogrenci(ogrenci_no,dogum_tarihi,kayit_tarihi,sinif,0,ad,soyad,bilgisayar);
                 ogrenci_dizisi.ogrenci_ekle(eklenecek);
                }
                else
                cout<<"Bu numarada zaten bir ogrenci mevcuttur!"<<endl;
                break;
         case 2:
                cout<<"Lutfen yatay gecis ile gelen eklemek istediginiz ogrencinin numarasini giriniz:"<<endl;
                cin>>ogrenci_no;
                if(ogrenci_dizisi.ogr_var_mi(ogrenci_no)==false)
                {
                cout<<"Lutfen adini giriniz:"<<endl;
                cin>>ad;
                cout<<"Lutfen soyadini giriniz:"<<endl;
                cin>>soyad;
                cout<<"Lutfen sinifini giriniz:"<<endl;
                cin>>sinif;
                cout<<"Lutfen dogum tarihini giriniz:"<<endl;
                cin>>dogum_tarihi;
                cout<<"Lutfen kayit tarihini giriniz:"<<endl;
                cin>>kayit_tarihi;
                cout<<"Lutfen not ortalamasini giriniz:"<<endl;
                cin>>not_ortalamasi;
                cout<<"Lutfen bilgisayarin ";
                Bilgisayar bilgisayar(0,0,0);
                cin>>bilgisayar;

                Ogrenci *eklenecek1;
                eklenecek1=new Ogrenci(ogrenci_no,dogum_tarihi,kayit_tarihi,sinif,not_ortalamasi,ad,soyad,bilgisayar);
                ogrenci_dizisi.ogrenci_ekle(eklenecek1);
                }
                else
                cout<<"Bu numarada zaten bir ogrenci mevcuttur!"<<endl;
                break;
         case 3:
               ogrenci_dizisi.notlari_gir(); //dizi uzerinden metod cagiriyoruz
               break;
         case 4:
               cout<<"Lutfen silmek istediginiz ogrencinin numarasini giriniz:"<<endl;
               cin>>ogrenci_no;
               if(ogrenci_dizisi.ogr_var_mi(ogrenci_no)==true)//ogrenci var mi
               {
               ogrenci_dizisi.ogrenci_sil(ogrenci_no);
               }
               else
               cout<<"Bu numarada bir ogrenci yoktur!"<<endl;
               break;
         case 5:
               cout<<"Lutfen bilgilerini goruntulemek istediginiz ogrencinin numarasini giriniz:"<<endl;
               cin>>ogrenci_no;
               if(ogrenci_dizisi.ogr_var_mi(ogrenci_no)==true)
               {
               ogrenci_dizisi.numaraya_gore_listele(ogrenci_no);
               }
               else
               cout<<"Bu numarada bir ogrenci yoktur!"<<endl;
               break;
         case 6:
               cout<<"Ogr No Ad              Soyad                Sinif Not Ort Dogum Tar  Kayit Tar"<<endl;
               cout<<"------ --------------- -------------------- ----- ------- ---------- ----------"<<endl;
               cout<<ogrenci_dizisi;//tum ogrenci dizisindeki ogrencilerin bilgileri listeleniyor
               cout<<endl;
               break;
         case 7:
               cout<<"Lutfen goruntulemek istediginiz sinifi giriniz:"<<endl;
               cin>>sinif;
               cout<<"Ogr No Ad              Soyad                Sinif Not Ort Dogum Tar  Kayit Tar"<<endl;
               cout<<"------ --------------- -------------------- ----- ------- ---------- ----------"<<endl;
               ogrenci_dizisi.sinifa_gore_listele(sinif);
               break;
         case 8:
               cout<<"Lutfen goruntulemek istediginiz ogrencinin adini giriniz:"<<endl;
               cin>>ad;
               cout<<"Ogr No Ad              Soyad                Sinif Not Ort Dogum Tar  Kayit Tar"<<endl;
               cout<<"------ --------------- -------------------- ----- ------- ---------- ----------"<<endl;
               ogrenci_dizisi.ada_gore_listele(ad);
               break;
         case 9:
               cout<<"Lutfen goruntulemek istediginiz tarihten once doganlar icin"<<endl;
               cin>>dogum_tarihi;
               cout<<"Ogr No Ad              Soyad                Sinif Not Ort Dogum Tar  Kayit Tar"<<endl;
               cout<<"------ --------------- -------------------- ----- ------- ---------- ----------"<<endl;
               ogrenci_dizisi.dogum_tarihine_gore(dogum_tarihi);
               cout<<endl;
               break;
         case 10:
               cout<<"Lutfen goruntulemek istediginiz yildan sonra bolume kaydedilmis ogrenciler icin"<<endl;
               cin>>kayit_yili;
               cout<<"Ogr No Ad              Soyad                Sinif Not Ort Dogum Tar  Kayit Tar"<<endl;
               cout<<"------ --------------- -------------------- ----- ------- ---------- ----------"<<endl;
               ogrenci_dizisi.kayit_tarihine_gore(kayit_yili);
               cout<<endl;
               break;
         case 11:
               cout<<"Lutfen verilmis bilgisayarlardan ogrenci bilgisini goruntulemek istediginizin\nseri numarasini giriniz:"<<endl;
               cin>>seri_no;
               cout<<"Ogr No Ad              Soyad                Sinif Not Ort Dogum Tar  Kayit Tar"<<endl;
               cout<<"------ --------------- -------------------- ----- ------- ---------- ----------"<<endl;
               ogrenci_dizisi.seri_noya_gore_listele(seri_no);
               cout<<endl;
               break;
         case 12:
              cout<<"Lutfen goruntulemek istediginiz bilgisayarin markasini giriniz:"<<endl;
              cin>>marka;
              cout<<"Lutfen goruntulemek istediginiz bilgisayarin modelini giriniz:"<<endl;
              cin>>model;
              cout<<"Ogr No Ad              Soyad                Sinif Not Ort Dogum Tar  Kayit Tar"<<endl;
              cout<<"------ --------------- -------------------- ----- ------- ---------- ----------"<<endl;
              ogrenci_dizisi.markaya_modele_gore_listele(marka,model);
              cout<<endl;
              break;
     }

    }while(secim!=13);
    return 0;
}
