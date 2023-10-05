using Practica_tpi.Interfaces;

namespace Practica_tpi.Entities
{
    public class Student : IStudent
    {
        public ICollection<Subject> SubjectsAttended { get; set; } = new List<Subject>();
        public ICollection<Question> Questions { get; set; } = new List<Question>();
    }
}
