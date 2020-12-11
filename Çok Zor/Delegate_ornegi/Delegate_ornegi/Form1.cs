using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Delegate_ornegi
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
        DelegeC YeniDelegem = new DelegeC();
        private void button1_Click(object sender, EventArgs e)
        {
            YeniDelegem.Delegem += new DelegeC.ProsedurIslet(YeniDelegem.IsimGoster);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            YeniDelegem.Delegem += new DelegeC.ProsedurIslet(YeniDelegem.AdresGoster);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            YeniDelegem.Delegem += new DelegeC.ProsedurIslet(YeniDelegem.MeslekGoster);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            YeniDelegem.Delegem -= new DelegeC.ProsedurIslet(YeniDelegem.IsimGoster);
        }

        private void button5_Click(object sender, EventArgs e)
        {
            YeniDelegem.Delegem -= new DelegeC.ProsedurIslet(YeniDelegem.AdresGoster);
        }

        private void button6_Click(object sender, EventArgs e)
        {
            YeniDelegem.Delegem -= new DelegeC.ProsedurIslet(YeniDelegem.MeslekGoster);
        }

        private void button7_Click(object sender, EventArgs e)
        {
            YeniDelegem.Delegem();//Çalıştır.
        }
    }
    class DelegeC
    {
        public string Ad = "Barış Karakulak";
        public string Adres = "Sancaktepe";
        public string Meslek = "student";
        public void IsimGoster()
        {
            MessageBox.Show(Ad);
        }
        public void AdresGoster()
        {
            MessageBox.Show(Adres);
        }
        public void MeslekGoster()
        {
            MessageBox.Show(Meslek);
        }
        public delegate void ProsedurIslet();
        public ProsedurIslet Delegem;
    }
}
