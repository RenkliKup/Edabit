using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Interface
{
    static class Program
    {
        /// <summary>
        /// Uygulamanın ana girdi noktası.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Form1());
        }
    }
    interface SinifOnizleme
    {
        void MesajVer(string Ad);
        void Goster(string Sehir);
        double Faktoriyel(int Deger);
    }
    class İnterfaceSinif : SinifOnizleme
    {
        public double Faktoriyel(int Deger)
        {
            double sonuc = 1;
            for (int i = 2; i <=Deger ; i++)
            {
                sonuc *= i;
            }
            return sonuc;
        }

        public void Goster(string Sehir)
        {
            MessageBox.Show(Sehir);
        }

        public void MesajVer(string Ad)
        {
            MessageBox.Show(Ad);
        }
    }
}

