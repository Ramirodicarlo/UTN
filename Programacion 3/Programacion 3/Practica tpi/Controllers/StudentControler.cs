using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using Practica_tpi.Services;

namespace Practica_tpi.Controllers
{
    [Route("api/student")]
    [ApiController]
    [Authorize]
    public class StudentController : ControllerBase
    {
        private readonly IStudentService _studentService;

        public StudentController(IStudentService studentService)
        {
            this._studentService = studentService;
        }
        [HttpGet("subjects")]
        public ActionResult<ICollection<SubjectDto>> GetMaterias()
        {
            var user = User.Claims.FirstOrDefault(c => c.Type == ClaimTypes.NameIdentifier)?.Value;
            var userRole = User.Claims.FirstOrDefault(c => c.Type == ClaimTypes.Role)?.Value;
            if (userRole != "alumno")
                return Forbid();

            return _studentService.GetSubjectsByStudent(int.Parse(user)).ToList();
        }
    }
}
