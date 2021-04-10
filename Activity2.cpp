#include <iostream>
using namespace std;


class Student {

    protected:
 
    char name[25];
    int rollNo;


    public:

    virtual int get_det() {
        cout << "Student name: ";
        cin >> name;
        cout << "Student Roll no: ";
        cin >> rollNo;
        return 0;
    }

    virtual int stu_disp() {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollNo << endl;
        return 0;
    }
};


class Theory: public virtual Student {
 
    protected:
 
    double theoryMarks[5];

 
    public:
 
    int get_tmark() {
        cout << "Theory Marks:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": ";
            cin >> theoryMarks[i];
        }
        cout << endl;
        return 0;
    }

    int tdisp() {
        cout << "Theory Marks:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": " << theoryMarks[i] << endl;;
        }
        cout << endl;
        return 0;
    }
};


class Practical: public virtual Student {
     
    protected:
 
    double practicalMarks[5];

 
    public:
 
    int get_pmark() {
        cout << "Practical Marks:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": ";
            cin >> practicalMarks[i];
        }
        cout << endl;
        return 0;
    }

    int pdisp() {
        cout << "Theory Marks:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": " << practicalMarks[i] << endl;;
        }
        cout << endl;
        return 0;
    }
};


class Result: public Theory, public Practical {
    private:
    double totalMarks[5], total = 0, average;

    public:
    int tot() {
        for (int i = 0; i < 5; i++) {
            totalMarks[i] = theoryMarks[i] + practicalMarks[i];
        }
        for (int i = 0; i < 5; i++) {
            total += totalMarks[i];
        }
        average = total / 5;
        return 0;
    }

    int rdisp() {
        cout << "Total marks achieved in individual subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": " << totalMarks[i] << endl;
        }
        cout << endl;
        cout << "Total: " << total << endl;
        cout << "Average marks in each subject: " << average << endl;
        cout << endl;
        return 0;
    }

    int get_res() {
        bool passed = pass();
        cout << "Student has ";
        if (passed) {
            cout << "passed\n\n";
        }
        else {
            cout << "failed\n\n";
        }
        return 0;
    }

    private:
    bool pass () {
        for (int i = 0; i < 5; i++) {
            if (totalMarks[i] <= 50) {
                return false;
            }
        }
        return true;
    }
};


int main() {
    Result student;
    student.get_det();
    student.stu_disp();
    student.get_tmark();
    student.tdisp();
    student.get_pmark();
    student.pdisp();
    student.tot();
    student.rdisp();
    student.get_res();
    

}