#include <iostream>
class Student
{
    public:
        int16_t num_of_exams = 0;
        int32_t id_number;
        std::string name;

        Student(std::string par_name, int32_t par_id, int64_t par_bank_account_number);
        
        void print() const;
        void update_bank_account(int64_t);

    private:
        int64_t bank_account_number;
};

Student::Student(std::string par_name, int32_t par_id, int64_t par_bank_account_number)
: name{par_name}, id_number{par_id}, bank_account_number{par_bank_account_number}{}

void Student::print() const
{
    std::cout << "number of exams:     " << Student::num_of_exams << std::endl
              << "student id:          " << Student::id_number << std::endl
              << "student name:        " << Student::name << std::endl
              << "bank_account_number: " << Student::bank_account_number << std::endl;
}

void Student::update_bank_account(int64_t par_bank_account_number)
{
    bank_account_number = par_bank_account_number;
} 

auto main() -> int
{
    Student student1("Luka", 214312, 77233);
    student1.print();
    student1.update_bank_account(66545);
    student1.print();
}


