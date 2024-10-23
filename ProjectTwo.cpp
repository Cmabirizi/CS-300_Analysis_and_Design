#include <iostream>
#include <vector>
#include <algorithm>

// Structure to represent a course
struct Course {
    std::string courseCode;
    std::string courseName;

    // Constructor for Course
    Course(const std::string& code, const std::string& name) 
        : courseCode(code), courseName(name) {}
};

// Function to print the list of courses
void printCourses(const std::vector<Course>& courses) {
    for (const auto& course : courses) {
        std::cout << course.courseCode << " - " << course.courseName << std::endl;
    }
}

int main() {
    // List of courses
    std::vector<Course> courses = {
        {"CS101", "Introduction to Computer Science"},
        {"CS102", "Data Structures"},
        {"CS103", "Algorithms"},
        {"CS201", "Operating Systems"},
        {"CS202", "Database Management"},
        {"CS203", "Software Engineering"},
        {"CS301", "Computer Networks"},
        {"CS302", "Artificial Intelligence"},
        {"CS303", "Machine Learning"},
        {"CS401", "Capstone Project"},
    };

    // Sorting courses in alphanumeric order based on course code
    std::sort(courses.begin(), courses.end(), [](const Course& a, const Course& b) {
        return a.courseCode < b.courseCode;
    });

    // Print sorted list of courses
    std::cout << "Courses in the Computer Science program (sorted alphanumerically):" << std::endl;
    printCourses(courses);

    return 0;
}

