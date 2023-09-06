using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practica2.EJ4
{
    internal class Enemigo : Personaje
    {
        public int Vida;
        public int Nivel;

        public Enemigo(string nombre,int vida, int nivel)
        {
            Nombre = nombre;
            Fuerza = 50;
            Magia = 60;
            Agilidad = 50;
            Vida = vida;
            Nivel = nivel;
        }
    }
}
