// C++ practice 1: Hello World

#include <iostream>
int print_info(){
    //std::cout << "Hello C++" << std::endl;
    //return 0;
    int age = 24;
    //double -float(8 bytes)
    double height = 184.5;
    char gender = 'M';
    bool isStudent = true;
    std::string name = "Jude";
    std::string description = "amazing studuent";

    std::cout << "Age: " << age << std::endl;
    std::cout << "heigth: " << height << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Is Student: "<< isStudent << std::endl;
    std::cout << "Name: "<< name << std::endl;
    std::cout << "Description: "<< description << std::endl;
    return 0;
}

int main(){
    return print_info();
}