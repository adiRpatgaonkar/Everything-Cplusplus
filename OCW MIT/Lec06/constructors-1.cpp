/***********
 
 DEMO: Constructors' types.
 
 ***********/

#include <iostream>
#include <string>

using namespace std;

class student
{
public:
    string name, college, course, branch;
    int regNo;
    
    student()
    {
        name = ""; college = ""; course = ""; branch = ""; regNo = 0;
    }
    student(student &o)
    {
        name = o.name; college = o.college; course = o.course; branch = o.branch; regNo = o.regNo;
    }
};

class AMS
{
public:
    student grads;
    
    void createProfile()
    {
        cout << "Let's create your profile\n\n";
        cout << "Name: ";
        getline(cin, grads.name); cout << grads.name.length() << endl;
        cout << "College: ";
        getline(cin, grads.college);  cout << grads.college.length() << endl;
        cout << "Course: ";
        getline(cin, grads.course); cout << grads.course.length() << endl;
        cout << "Branch: ";
        getline(cin, grads.branch); cout << grads.branch.length() << endl;
        
        if ( grads.name.length() > 60 || grads.college.length() > 50 || grads.course.length() > 10 || grads.branch.length() > 20 )
        {
            cout << "You've filled the form incorrectly. Please try again." << endl;
            createProfile();
        }
        return;
    }
    
    void printProfile()
    {
        cout << "------------" << endl;
        cout << "Profile\n\n";
        cout << "Name: " << grads.name << endl;
        cout << "College: " << grads.college << endl;
        cout << "Course: " << grads.course << endl;
        cout << "Branch: " << grads.branch << endl;
        return;
    }
    
};


int main(void)
{
    AMS year14_15_student1, year14_15_student2;
    
    year14_15_student1.createProfile();
    
    year14_15_student2 = year14_15_student1;
    
    year14_15_student1.printProfile();
    year14_15_student2.printProfile();
    
    return 0;
}
