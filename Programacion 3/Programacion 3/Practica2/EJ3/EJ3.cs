using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practica2.EJ3
{
    public class EJ3
    {
        public void Ejecutar() 
        { 
            Persona carlos = new();
            carlos.Saludar();
            Estudiante estudiante1 = new();
            estudiante1.SetEdad(25);
            estudiante1.Saludar();
            Console.WriteLine(estudiante1.edadPersona);
            Profesor Alberto = new();
            Alberto.SetEdad(45);
            Alberto.Explicar();
        }

    }
}
