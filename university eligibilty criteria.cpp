#include <iostream>
#include <string>
using namespace std;
bool checkAge(int age)
{
    return (age >= 18 && age <= 25);
}

                //  suggest universities based on subject and marks
void suggestUniversities(string subject, float marks) 
{
    if (subject == "Software Engineering" || subject == "Computer Science") 
    {
        if (marks >= 85)
        {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1. COMSATS\n2. NUST\n3. FAST-NU\n4. UET Taxila\n5.QUAID AZAM UNIVERSTIY\n";
        }
        else if (marks >= 50)
        {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1.BIIT\n2.BIMS\n3.ibadat university\n3.punjab women university\n";
        }
        else {
            cout << "OOPS You are not eligible for Software Engineering or Computer Science.\n";
        }
    }
                                      // Business
    else if (subject == "Business") 
    {
        if (marks >= 70) 
        {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1. CUST University\n2. COMSATS\n3. punjab university\n4. LUMS\n";
        }
        else if (marks >= 50)
        {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1.islamic university\n2.fatima university\n3.ibadat university\n";
        }
        else {
            cout << "OOPS You are not eligible for Business.\n";
        }
    }
                                   // English
    else if (subject == "English") 
    {
        if (marks >= 60) {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1. Punjab University\n2. COMSATS\n3. LUMS\n4.NUML university\n";
        }
        else if (marks >= 50)
        {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1.Islamic university\n2.punjab women university\n3.Fatima university\n";
        }
        else {
            cout << "OOPS You are not eligible for English.\n";
        }
    }
                        // Accounting, Finance, IT, Project Management
    else if (subject == "Accounting Finance" || subject == "Project Manager" || subject == "IT") {
        if (marks >= 75) {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1. COMSATS\n2. NUST\n3. FAST-NU\n4. piece University \n";
        }
        else if (marks >= 50)
        {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1.Islamic university\n2.FATIMA University\n3.Ibadat university\n";
        }
        else 
        {
            cout << "OOPS You are not eligible for " << subject << ".\n";
        }
    }
                                   // Data Science
    else if (subject == "Data Science") 
    {
        if (marks >= 80)
        {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1. COMSATS\n2. NUST\n3. FAST-NU\n4.UET taxila university\n5.piece universty\n";
        }
        else if (marks >= 65)
        {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1.cust univeersity\n";

        }
        else {
            cout << "OOPS You are not eligible for Data Science.\n";
        }
    }
                                        // Urdu, Islamiat
    else if (subject == "Urdu" || subject == "Islamiat") {
        if (marks >= 65) {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1. Punjab University\n2. numl university\n3. comsts univerity\n4.CUST university\n";
        
        }
        else if (marks >= 50)
        {	
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1.fatima univerity\n2.ibadat university\n3.punjab women university\n";
        }
        else {
            cout << "OOPS You are not eligible for " << subject << ".\n";
        }
    }
                                        // Mathematics
    else if (subject == "Mathematics")
    {
        if (marks >= 75) 
        {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1. NUST\n2. COMSATS\n3. FAST-NU\n4. Quaid-i-Azam University\n";
        }
        else if (marks >= 50)
        {
            cout << "\t\t\tYou can apply to the following universities:\n";
            cout << "1.punjab women university\n2.ARID university\n3.fatima university\n";
        }	
        else {	
            cout << "OOPS You are not eligible for Mathematics.\n";
        }
    }
    else {
        cout << "\t\t\tInvalid subject.\n";
    }
}
int main()
{
    string name, subject, fatherName, fatherOccupation;
    int age;
    float marks;
    cout << "Enter your name: "<<endl;
    getline(cin, name);
    cout << "Enter your age: "<<endl;
    cin >> age;
    cout << "Enter your marks in previous degree (%): " << endl;
    cin >> marks;

    cin.ignore();
    cout << "\n\n\t\t\tEnter your desired subject \n\n1- Software Engineering\n"
        <<"2- Computer Science\n3- Business\n4- English\n5- Accounting Finance\n6- Project Manager\n7- IT\n8- Data Science\n9- Urdu\n10-   Islamiat\n11- Mathematics\n: ";
    getline(cin, subject);

    cout << "Enter your father's name: " << endl;
    getline(cin, fatherName);
    cout << "Enter your father's occupation: "<<endl;
    getline(cin, fatherOccupation);
                                //check age eligibilty
    if (!checkAge(age)) {
        cout <<name << "" << "You are not eligible due to age.\n";
    }

                    // Eligibility check based on subject and marks
    if (subject == "Software Engineering" || subject == "Computer Science") {
        if (marks >= 85)
        {
            string studiedMathsComputer;
            cout << "Did you study Mathematics and Computer Science in your last degree? (yes/no): ";
            getline(cin, studiedMathsComputer);	
            if (studiedMathsComputer != "yes")
            {
                cout << "You are not eligible bcz you are not studed Math and computer it's mandatory in our university for this degree.\n";
            }
        }
            else if (marks >= 50)
            {
                string studiedMathsComputer;
                cout << "Did you study Mathematics and Computer Science in your last degree? (yes/no): ";
                getline(cin, studiedMathsComputer);
                if (studiedMathsComputer != "yes")
                {
                    cout << "You are not eligible bcz you are not studed Math and computer it's mandatory in our university for this degree.\n";
                }
            }
        
        else
        {	
            cout << "You are not eligible bcz of your less marks .\n";
        }
    }
    else if (subject == "Business")
    {
        if (marks >= 70)
        {
            string studiedMaths;
            cout << "Did you study Mathematics in your last degree? (yes/no): ";
            getline(cin, studiedMaths);
            if (studiedMaths != "yes") {
                cout << "You are not eligible bcz you are not studed math .\n";
            }
        }
            else if (marks >= 50)
            {
                string studiedMaths;
                cout << "Did you study Mathematics in your last degree? (yes/no): ";
                getline(cin, studiedMaths);
                if (studiedMaths != "yes") 
                {
                    cout << "You are not eligible bcz you are not studed math .\n";
                }
            }
        
        else 
        {
            cout << "You are not eligible bcz of less marks.\n";
        }
    }
    else if (subject == "English")
    {
        if (marks >= 60) {
            string studiedEnglish;
            cout << "Did you study English in your last degree? (yes/no): ";
            getline(cin, studiedEnglish);
            if (studiedEnglish != "yes") {
                cout << "You are  eligible  for this subject.\n";
            }
        }
            else if (marks >= 50)
            {
                string studiedEnglish;
                cout << "Did you study English in your last degree? (yes/no): ";
                getline(cin, studiedEnglish);
                if (studiedEnglish != "yes") {
                    cout << "You are  eligible  for this subject.\n";
                }
            }
        
        else 
        {
            cout << "You are not eligible bcz your marks is less.\n";
        }
    }
    else if (subject == "Data Science") 
    {
        if (marks >= 70)
        {
            string studiedMathsOrCS;
            cout << "Did you study Mathematics or Computer Science in your last degree? (yes/no): ";
            getline(cin, studiedMathsOrCS);
            if (studiedMathsOrCS != "yes")
            {
                cout << "You are not eligible bcz you are not studed math and computer this is is importan for this subject.\n";
            }
        }
            else if (marks >= 50)
            {
                string studiedMathsOrCS;
                cout << "Did you study Mathematics or Computer Science in your last degree? (yes/no): ";
                getline(cin, studiedMathsOrCS);
                if (studiedMathsOrCS != "yes")
                {
                    cout << "You are not eligible bcz you are not studed math and computer this is is importan for this subject.\n";
                }
            }
        
        else 
        {
            cout << "You are not eligible for Data Science bcz your marks are less.\n";
        }
    }
    else if (subject == "Mathematics") 
    {
        if (marks >= 75)
        {
            string studiedMaths;
            cout << "Did you study Mathematics in your last degree? (yes/no): ";
            getline(cin, studiedMaths);
            if (studiedMaths != "yes") {
                cout << "You are not eligible bcz you are not  studed maths.\n";
            }
        }
            else if (marks >= 50)
            {
                string studiedMaths;
                cout << "Did you study Mathematics in your last degree? (yes/no): ";
                getline(cin, studiedMaths);
                if (studiedMaths != "yes") {
                    cout << "You are not eligible bcz you are not  studed maths.\n";
                }	
            }
        
        else 
        {
            cout << "You are not eligible for Mathematics bcz of less marks.\n";
        }
    }
                  //accounting fianance,it,project manger,urdu isl

    else if (subject == "Accounting Finance" || subject == "Project Manager" || subject == "IT" || subject == "Urdu" || subject == "Islamiat")
    {
        if (marks >= 75) 
        {
            cout << "you are eligible for this subject\n";
        }
        else if (marks >= 50)
        {
            cout << "you are eligible\n";
        }
        else 
        {
            cout << "You are not eligible for " << subject << "bcz of less marks." << "\n";
          
        }
    }
    else {
        cout << "Invalid subject. Please choose from Software Engineering, Computer Science, Business, English, Accounting, Finance, Project Manager, IT, Data Science, Urdu, Islamiat, Mathematics.\n";
    }

    suggestUniversities(subject, marks);

    system("pause");
}
