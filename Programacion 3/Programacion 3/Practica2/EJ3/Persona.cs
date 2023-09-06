using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practica2.EJ3
{
    public class Persona
    {
        protected int edadPersona;
        public void Saludar()
        {
            Console.WriteLine("Saludo");
        }
        public int SetEdad(int edad) 
        { 
            return edadPersona = edad;
        }
    }
}
