using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Abstract_class
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
    abstract class sinifA
    {
        abstract public void AdGoster(string ad);
        abstract public void AdresGoster(string adres);
        abstract public decimal KdvBul(decimal Anapara, int oran);
    }
    class sinifB : sinifA
    {
        public override void AdGoster(string ad)
        {
            throw new NotImplementedException();
            MessageBox.Show(ad);
        }

        public override void AdresGoster(string adres)
        {
            throw new NotImplementedException();
            MessageBox.Show(adres);
        }

        public override decimal KdvBul(decimal Anapara, int oran)
        {
            throw new NotImplementedException();
            decimal sonuc;
            sonuc = Anapara * oran / 100;
            return sonuc;
        }
    }
}
