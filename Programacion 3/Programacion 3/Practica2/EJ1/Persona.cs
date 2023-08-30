using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace Practica2.EJ1
{
    public class Persona
    {
        internal string? Nombre { get; set; }
        public Persona(string nombre) 
        { 
            Nombre = nombre;
        }

        internal void ReturnName()
        {
            Console.WriteLine($"Hola! Mi nombre es {Nombre}");
        }
    }
}
