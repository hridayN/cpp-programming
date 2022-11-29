namespace practice
{
    public class StudentManagement
    {
        // Linq using Lambda expression
        // IEnumerable<Student> maleStudents = Student.GetAllStudents().Where(s => s.Gender == "M");

        // Linq using SQL like query
        IEnumerable<Student> maleStudents = from student in Student.GetAllStudents()
                                            where student.Gender == "M"
                                            select student;

    }
}
