namespace Practica_tpi.Services
{
    public class StudentService : IStudentService
    {
   
            private readonly IStudentRepository _userRepository;
            private readonly IMapper _mapper;

            public StudentService(IStudentRepository studentRepository, IMapper mapper)
            {
                _userRepository = studentRepository;
                _mapper = mapper;
            }
            public ICollection<SubjectDto> GetSubjectsByStudent(int studentId)
            {
                var subjects = _userRepository.GetStudentSubjects(studentId);

                return _mapper.Map<ICollection<SubjectDto>>(subjects);
            }
     }
}
