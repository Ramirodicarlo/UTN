using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practica2.EJ4
{
    abstract class Personaje : IMoverse
    {
        public string Nombre;
        public int Fuerza;
        public int Agilidad;
        public int Magia;
        public int CalcularDanio() { };
        public void Atacar() 
        {
            Console.WriteLine($"{Nombre} hizo {CalcularDanio}");
        }
        public int MoverseEjeX() { }
        public int MoverseEjeY() { }

    }
}
