#ifndef hfw308iohea

#define hfw308iohea

#include <iostream>

class Student
{
    public:
        int16_t num_of_exams = 0;
        int32_t id_number;
        std::string name;

        Student(std::string par_name, int32_t par_id, int16_t par_bank_account_number);
        
        void print() const;
        void update_bank_account(int16_t);

    private:
        int16_t bank_account_number;
};

#endif