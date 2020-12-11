using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace İnterface_ornegi
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            //nesnemi oluşturuyorum
            BesetBeser nesne = new BesetBeser();
            //beser beser artarak 0 dan 10 defa artımla yazacak sonuc 5-50 arası.
            for (int i = 0; i < 10; i++)
            {
                nesne.SonrakiSayi();
            }
            //sıfırlıyorum tekrar yazdırıyorum bu sefer 20 defa 5 er 5 er artacak sonuc 5-100 arası.
            nesne.Sifirla();
            for (int i = 0; i < 20; i++)
            {
                nesne.SonrakiSayi();
            }
            //baslangıcımı 200 yapıyorum 5 artımşa 5 er 5er artacak. sonuc 205-225 arası
            nesne.Ayarla(200);
            for (int i = 0; i < 5; i++)
            {
                nesne.SonrakiSayi();
            }
        }
    }
    //arayüzüm sadece tanımlamalar.
    interface ISiralama
    {
        int SonrakiSayi();
        void Sifirla();
        void Ayarla(int a);
    }
    //classım tanımlamalarımı burada region alanında doldurdum
    class BesetBeser : ISiralama
    {
        //degiskenlerim
        int deger;
        int baslangic;
        //baslangıc degerlerim
        public BesetBeser()
        {
            baslangic = 0;
            deger = 0;
        }
        #region ISiralama Members
        //beser beser artacak bir sonrak, sayıyı bulma metotum
        public int SonrakiSayi()
        {
            deger += 5;
            return deger;
        }
        //sayiyi sıfırlama metotum;
        public void Sifirla()
        {
            deger = baslangic;
        }
        //sayiyi isteen degerden baslayarak samak için ayar metodum
        public void Ayarla(int a)
        {
            baslangic = a;
            deger = baslangic;
        }
        #endregion
    }
 
}
