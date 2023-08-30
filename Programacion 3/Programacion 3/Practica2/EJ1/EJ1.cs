using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practica2.EJ1
{
    internal class EJ1
    {
        const int _cantInteraciones = 3;

        public void Ejecutar()
        {
              
            List<Persona> lista = new();
            string nombre;
            for (int i = 1; i < _cantInteraciones; i++)
            {
                Console.WriteLine($"Ingrese el numero de la persona numero {i}: ");
                nombre = Console.ReadLine() ?? "";
                Persona persona = new (nombre);
                lista.Add(persona);
            }
            foreach (Persona persona in lista)
            {
                persona.ReturnName();
            }
        }
    }
}
