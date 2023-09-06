using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practica2.EJ4
{
    internal class PersonajeDeMagia: Personaje
    {
        public PersonajeDeMagia(string nombre,int fuerza,int agilidad, int magia)
        {
            Nombre = nombre;
            Magia = magia;
            Fuerza = fuerza;
            Agilidad = agilidad;
        }
        public PersonajeDeMagia( string nombre,int fuerza,int agilidad) 
        { 
            Nombre = nombre;
            Magia = 60;
            Fuerza = fuerza;
            Agilidad = agilidad;
        }
        public override int CalcularDanio()
        {
            return Fuerza + Agilidad + Magia * 4;
        }
        public override void Atacar()
        {
            Console.WriteLine($"{Nombre} hizo {CalcularDanio} gracais a su magia");
        }

    }
}
