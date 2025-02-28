#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    // Конструктор
    Student(const std::string& name, int age) : name(name), age(age) {}

    // Функция для получения имени студента
    std::string getName() const {
        return name;
    }

    // Функция для получения возраста студента
    int getAge() const {
        return age;
    }

    // Функция для установки имени студента
    void setName(const std::string& newName) {
        name = newName;
    }

    // Функция для установки возраста студента
    void setAge(int newAge) {
        age = newAge;
    }
};

// Интерфейс для работы со студентами
class IStudentInterface {
public:
    virtual void displayStudentInfo(const Student& student) const = 0;
};

class StudentInfo : public IStudentInterface {
public:
    void displayStudentInfo(const Student& student) const override {
        std::cout << "Name: " << student.getName() << ", Age: " << student.getAge() << std::endl;
    }
};

int main() {
    Student student("Alice", 20);
    StudentInfo studentInfo;

    studentInfo.displayStudentInfo(student);

    return 0;
}