class StudentDatabase:
    __student_list = []

    @classmethod
    def add_student(cls, stu):
        cls.__student_list.append(stu)

    @classmethod
    def get_all_students(cls):
        return cls.__student_list


class Student:
    def __init__(self, student_id, name, department, is_enrolled):
        self.__student_id = student_id
        self.__name = name
        self.__department = department
        self.__is_enrolled = is_enrolled

        StudentDatabase.add_student(self)

    def enroll_student(self):
        if self.__is_enrolled:
            raise ValueError("Student is already enrolled.")

        self.__is_enrolled = True

        print(f"{self.__name} has been enrolled successfully.")

    def drop_student(self):
        if not self.__is_enrolled:
            raise ValueError("Student is not currently enrolled.")

        self.__is_enrolled = False

        print(f"{self.__name} has been dropped successfully")

    def view_student_info(self):
        enrollment_status = "Enrolled"

        if not self.__is_enrolled:
            enrollment_status = "Not Enrolled"

        print(f"Student ID  : {self.__student_id}")
        print(f"Name        : {self.__name}")
        print(f"Department  : {self.__department}")
        print(f"Status      : {enrollment_status}\n")

    def get_student_id(self):
        return self.__student_id


s1 = Student(1, "Kawsar Miah", "Computer Science & Engineering", True)
s2 = Student(2, "Ananda Shaha", "Electrical & Electronics Engineering", False)
s3 = Student(3, "Ravi Shahriar", "Bachelor of Business Administration", False)
s4 = Student(4, "Mir Hussain", "Computer Science & Engineering", False)
s5 = Student(5, "Mehedi Aimun", "Electrical & Electronics Engineering", True)


def find_student(id):
    students_data = StudentDatabase.get_all_students()

    for student in students_data:
        if student.get_student_id() == id:
            return student

    return None


def main():

    while True:

        print("\n--- STUDENT DATABASE SYSTEM ---\n")
        print("1. Show students list")
        print("2. Enroll a student")
        print("3. Drop a student")
        print("4. Exit")

        choosen_number = int(input("Enter the number you want to see: "))

        if choosen_number == 1:
            students_data = StudentDatabase.get_all_students()

            print("--- Student List ---")

            if not students_data:
                print("No students found.")
                continue

            for student in students_data:
                student.view_student_info()

        elif choosen_number == 2:
            try:
                id = int(input("Enter student id: "))

                current_student = find_student(id)

                if current_student is None:
                    raise ValueError("Invalid id.")

                current_student.enroll_student()

            except ValueError as error:
                print(f"Error: {error}")

        elif choosen_number == 3:
            try:
                id = int(input("Enter student id: "))

                current_student = find_student(id)

                if current_student is None:
                    raise ValueError("Invalid id.")

                current_student.drop_student()

            except ValueError as error:
                print(f"Error: {error}")

        elif choosen_number == 4:
            break

        else:
            print("Something went wrong! Please select a number from 1 to 4.")


main()
