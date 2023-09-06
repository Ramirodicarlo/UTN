using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practica2.EJ4
{
    internal class PersonajeDeFuerza : Personaje
    {
        public PersonajeDeFuerza(string nombre, int agilidad, int magia)
        {
            Fuerza = 100;
            Nombre = nombre;
            Agilidad = agilidad;
            Magia = magia;
        }
        public override int CalcularDanio()
        {
            return (Fuerza / 2) * Agilidad * (Magia / 2);
        }

    }
}
