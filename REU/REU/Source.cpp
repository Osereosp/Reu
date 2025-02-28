#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    // �����������
    Student(const std::string& name, int age) : name(name), age(age) {}

    // ������� ��� ��������� ����� ��������
    std::string getName() const {
        return name;
    }

    // ������� ��� ��������� �������� ��������
    int getAge() const {
        return age;
    }

    // ������� ��� ��������� ����� ��������
    void setName(const std::string& newName) {
        name = newName;
    }

    // ������� ��� ��������� �������� ��������
    void setAge(int newAge) {
        age = newAge;
    }
};

// ��������� ��� ������ �� ����������
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