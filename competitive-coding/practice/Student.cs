namespace practice
{
    public class Student
    {
        public int Id { get; set; }
        public String Name { get; set; }
        public String Gender { get; set; }

        public static List<Student> GetAllStudents()
        {
            List<Student> studentsList = new List<Student>();
            studentsList.Add(
                new Student
                {
                    Id = 1,
                    Name = "S1",
                    Gender = "M"
                });
            studentsList.Add(
                new Student
                {
                    Id = 1,
                    Name = "S1",
                    Gender = "M"
                });
            studentsList.Add(
                new Student
                {
                    Id = 2,
                    Name = "S2",
                    Gender = "M"
                });
            studentsList.Add(
                new Student
                {
                    Id = 3,
                    Name = "S3",
                    Gender = "F"
                });

            return studentsList;
        }
    }
}
