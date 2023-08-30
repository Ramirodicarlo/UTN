using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practica2.EJ2
{
    public class EJ2
    {
        public void Ejecutar() 
        {
            PhotoBook book = new();
            Console.WriteLine($"Album 1 {book.GetNumberPages}");
            book = new PhotoBook(24);
            Console.WriteLine($"Album 2 {book.GetNumberPages}");
            book = new BigPhotoBook();
            Console.WriteLine($"Album 3{book.GetNumberPages}");

        }
    }
}
