#include <iostream>
#include <string>
#include <ctime>

using namespace std;
// function for choosing book
void booksOption(int& book) {
    cout << "Which book do you need? (enter the number)\U0001F4D8  " << endl;
    cin >> book;
    while ( true)
    {
        if ( book == 1 || book == 2 || book == 3 || book == 4 || book == 5 || book == 6)
        {
            break;
        }
        else {
            cout<<"Please enter the book from the list:  "<< endl;
            cin>>book;
        }
    }
}
// function for presenting list of books
void booksList() {
    cout << "Here you can see the list of books: \n" << endl;
}
// this  sentence was used several times, so we decided to create a function:
void bookAv() {
    cout << "This book is available \U0001F604  " << endl;// here we used here emoji

}
// this  sentence was used several times, so we decided to create a function:
void bookNot()
{
    cout << "Sorry,this book is not available. Please, try again!\U0001F615." << endl;

}
// function for calculating date
void Date()
{
    int year1, month1, day1, year2, month2, day2, total;
    char c;
    time_t a, b;

    cout << "\nPlease enter today's date (dd.mm.yyyy): " << endl;

    cin >> day1 >> c >> month1 >> c >> year1;

    struct tm t1 = { 0,0,0, day1, month1 - 1 , year1 - 2000 };

    if (year1 < 2000 || year1 > 2025)
    {
        cout << "You must enter a year between 2021 and 2025" << endl;
        cin >> year1;

    }
    if
        (month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12)
    {
        if (day1 > 31)

        {
            cout << "this month doesn't have " << day1 << "days" << endl;
            cin >> day1;
        }

}

    if (month1 == 2 && year1 % 4 != 0)
    {
        if (day1 > 28)
        {
            cout << "isn't a leap year . This month doesn't have " << day1 << "days" << endl;
            cin >> day1;

        }
    }

    if (month1 == 2 && year1 % 4 == 0)
    {
        if (day1 > 29)
        {
            cout << "February doesn't have " << day1 << "days" << endl;
            cin >> day1;
        }
    }

    if (month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11)
    {
        if (day1 > 30)
        {
            cout << "this month doesn't have " << day1 << " days" << endl;
            cin >> day1;

        }
    }

    if (month1 > 12)
    {
        cout << "Year doesn't have " << month1 << "months" << endl;
        cin >> month1;
    }

    cout << "Please enter the date , when u will return your book " << endl;

    cin >> day2 >> c >> month2 >> c >> year2;

    struct tm t2 = { 0,0,0, day2, month2 - 1, year2 - 2000 };

    if (year2 < 2000 || year2 >2025)
    {
        cout << "You must enter a year between 2021 and 2025" << endl;
        cin >> year2;

    }
    if (month2 == 1 || month2 == 3 || month2 == 5 || month2 == 7 || month2 == 8 || month2 == 10 || month2 == 12)
    {
        if (day2 > 31)
        {
            cout << "this month doesn't have " << day2 << "days" << endl;
            cin >> day2;
        }

    }
    if (month2 == 2 && year2 % 4 != 0)
    {
        if (day2 > 28)
        {
            cout << year2 << "isn't a leap year.This month doesn;t have " << day2 << "days" << endl;
            cin >> day2;
        }
    }


    if (month2 == 2 && year2 % 4 == 0)
    {
        if (day2 > 29)
        {
            cout << "This month doesn't have " << day2 << "days" << endl;
            cin >> day2;
        }
    }

    if (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11)
    {
        if (day2 > 30)
        {
            cout << "This month doesn't have " << day2 << "days" << endl;
            cin >> day2;

        }
    }

    if (month2 > 12)
    {
        cout << "Year doesn't have " << month2 << "months" << endl;
        cin >> month2;
    }

    b = mktime(&t1);
    a = mktime(&t2);
    total = difftime(a, b) / (60 * 60 * 24);
    cout << "You have " << total << " days to return this book " << endl;
    cout << "You can pick up a book on the third floor ";
    }


int main()
{
    while(true){
        cout << "\n       Welcome to IUT e-library \U0001F3EB" << endl << endl;
        cout << "---------------------------------------------------" << endl << endl;

        cout << "For starting registeration, please enter your full name: "<<endl;
        string name;
        cout<<"Enter Your Name (max 20 characters including spaces)"<<endl;
        while(true){
            cin>>name;
            if(name.length()<=20){
                break;
            }else{
                cout<<"Please enter Name with length limit in 20 characters"<<endl;
            }
        }
        cout << name << ", please enter your major(SOCIE OR SBL) "<<endl;

        string major;

        while (true) // loop for
        {
            cin >> major;
            //condition for entering major
            if (major == "SBL" || major == "SOCIE" || major ==
                "sbl" || major == "socie")
            {
                break;
            }
            if (major == "exit")
            {
                return 0;
            }
            else {
                cout << "Please enter the correct major or exit to stop the program" << endl;
            }
        }

        cout << "FINAL MAJOR: " << major << endl;

        cout << "---------------------------------------------------" << endl;
        //condition for entering course
        if (major == "SOCIE" || major == "socie")
        {
            cout << "\nEnter your course (from 1 to 4) : ";

            int choice;
            string option;
            while (true) // loop for 
            {
                cin >> option;

                if (option == "1" || option == "one" || option == "2" || option == "two" || option == "3" || option == "three" || option == "4" || option == " four")
                {
                    break;
                }
                if (option == "exit")
                {
                    return 0;
                }
                else {
                    cout << "Please try again" << endl;
                }
            }

            int book;
            //arrays of books
            string course1[] = { "\t1.Calculus", "\t2.Physics", "\t3.OOP", "\t4.Academic English", "\t5.Academic English Reading", "\t6.Intro to IT\n" };

            string course2[] = { "\t1.Basic Korean", "\t2.Linear Algebra", "\t3.Discrete mathematics", "\t4.Java", "\t5.Data Structure", "\t6.Digital logic circuit\n" };

            string course3[] = { "\t1.Introduction to Economics", "\t2.Computer Algorithm","\t3.Operating System", "\t4.Database", "\t5,Signals and Systems", "\t6.System Analysis\n" };

            string course4[] = { "\t1.Artificial Intelligence", "\t2.Business Administration",
            "\t3.Comtemporary Topics and Trends", "\t4.Multimedia Application", "\t5.Big Data Analytics", "\t6.Data Communication\n" };

            
            x: //label for goto
            
            if (option == "1")
            {
                booksList();
                for (int i = 0; i < 6; i++)//loop for printing list of books
            
                {
                    cout << course1[i] << endl;
                }
        //label for goto
                booksOption(book);
                string name;
                switch (book) // individual case for each book
                {
                case 1:
                    cout << "Calculus" << endl;
                    bookNot();// calling function
                    goto x;// transfers control to the identified label (x), so user can get an access to the list of books and choose another one.
                    break;
                case 2:
                    cout << "Physics" << endl;
                    bookAv();
                    Date();// calling function
                    break;
                case 3:
                    cout << "OOP" << endl;
                    bookAv();
                    Date();
                    break;

                case 4:
                    cout << "Academic English" << endl;
                    bookNot();
                    goto x;
                    break;

                case 5:
                    cout << "Academic English Reading" << endl;
                    bookAv();
                    Date();
                    break;
                case 6:
                    cout << "Intro to IT" << endl;
                    bookAv();
                    Date();
                    break;
                default:
                    cout << "Wrong input " << endl;
                }
            }
            else if (option == "2")
            {
                booksList();
                for (int i = 0; i < 6; i++) {
                    cout << course2[i] << endl;
                }
                booksOption(book);

                switch (book)
                {
                case 1:
                    cout << "Basic Korean" << endl;
                    bookNot();
                    goto x;
                    break;
                case 2:
                    cout << "Linear Algebra" << endl;
                    bookAv();
                    Date();
                    break;
                case 3:
                    cout << "Discrete mathematics" << endl;
                    bookAv();
                    Date();
                    break;
                case 4:
                    cout << "Java" << endl;
                    bookNot();
                    goto x;
                    break;

                case 5:
                    cout << "Data Structure" << endl;
                    bookAv();
                    Date();
                    break;
                case 6:
                    cout << "Digital logic circuit" << endl;
                    bookNot();
                    goto x;
                    break;
                default:
                    cout << "Wrong input " << endl;

                }
            }
            else if (option == "3")
            {
                booksList();
                for (int i = 0; i < 6; i++) {
                    cout << course3[i] << endl;
                }
                booksOption(book);

                switch (book)
                {
                case 1:
                    cout << "Introduction to Economics" << endl;
                    bookAv();
                    Date();
                    break;
                case 2:
                    cout << "Computer Algorithm" << endl;
                    bookNot();
                    goto x;
                    break;
                case 3:
                    cout << "Operating System" << endl;
                    bookAv();
                    Date();
                    break;

                case 4:
                    cout << "Database" << endl;
                    bookNot();
                    goto x;
                    break;

                case 5:
                    cout << "Signals and Systems" << endl;
                    bookAv();
                    Date();
                    break;
                case 6:
                    cout << "System Analysis" << endl;
                    bookAv();
                    Date();
                    break;
                default:
                    cout << "Wrong input " << endl;
                }
            }

            else if (option == "4")
            {
                booksList();
                for (int i = 0; i < 6; i++) {
                    cout << course4[i] << endl;
                }
                booksOption(book);

                switch (book)
                {
                case 1:
                    cout << "Artificial Intelligence" << endl;
                    bookAv();
                    Date();
                    break;
                case 2:
                    cout << "Business Administration" << endl;
                    bookAv();
                    Date();
                    break;
                case 3:
                    cout << "Comtemporary Topics and Trends" << endl;
                    bookNot();
                    goto x;
                    break;

                case 4:
                    cout << "Multimedia Application" << endl;
                    bookAv();
                    Date();
                    break;

                case 5:
                    cout << "Big Data Analytics" << endl;
                    bookAv();
                    Date();
                    break;
                case 6:
                    cout << "Data Communication" << endl;
                    bookNot();
                    goto x;
                    break;
                default:
                    cout << "Wrong input " << endl;


                }
            }
        }

        else if (major == "SBL" || major == "sbl") {

            cout << "Enter your course (from 1 to 3): ";

            int choice1;
            string option1;
            while (true)
            {
                cin >> option1;

                if (option1 == "1" || option1 == "one" || option1 == "2" || option1 == "two" || option1 == "3" || option1 == "three")
                {
                    break;
                }
                if (option1 == "exit")
                {
                    return 0;
                }
                else {
                    cout << "Please try again" << endl;
                }
            }

            int book;

            string course1[] = { "\t1.Business English ", "\t2.Statistics", "\t3.Business Mathematics", "\t4.Computer Programming", "\t5.Principle of Management", "\t6.Introduction to Economics\n" };

            string course2[] = { "\t1.Business English ", "\t2.Basic Korean ", "\t3.Supply Chain Management", "\t4.Marketing Management", "\t5.Operations Research", "\t6.Principle of Accounting\n" };

            string course3[] = { "\t1.Air Transportation ", "\t2.Railway Transportation ", "\t3.Financial Institutions Management", "\t4.Marketing Management", "\t5.Project Management", "\t6.Business English Readings \n" };

            y: //label for goto
            if (option1 == "1")
            {
                booksList();
                for (int i = 0; i < 6; i++)
                {
                    cout << course1[i] << endl;
                }
                booksOption(book);

                switch (book) // individual case for each book
                {
                case 1:
                    cout << "Business English" << endl;
                    bookAv();
                    Date();
                    break;
                case 2:
                    cout << "Statistics" << endl;
                    bookNot();
                    goto y; // transfers control to the identified label (y), so user can get an access to the list of books and choose another one.
                    break;
                case 3:
                    cout << "Business Mathematics" << endl;
                    bookAv();
                    Date();
                    break;

                case 4:
                    cout << "Computer Programming" << endl;
                    bookAv();
                    Date();
                    break;

                case 5:
                    cout << "Principle of Management" << endl;
                    bookNot();
                    goto y;
                    break;
                case 6:
                    cout << "Introduction to Economics" << endl;
                    bookAv();
                    Date();
                    break;
                default:
                    cout << "Wrong input " << endl;
                    return 0;
                }
            }

            else if (option1 == "2")
            {
                booksList();
                for (int i = 0; i < 6; i++) {
                    cout << course2[i] << endl;
                }
                booksOption(book);

                switch (book)
                {
                case 1:
                    cout << "Business English" << endl;
                    bookAv();
                    Date();
                    break;
                case 2:
                    cout << "Basic Korean " << endl;
                    bookNot();
                    goto y;
                    break;
                case 3:
                    cout << "Supply Chain Management" << endl;
                    bookAv();
                    Date();
                    break;

                case 4:
                    cout << "Marketing Management" << endl;
                    bookAv();
                    Date();
                    break;

                case 5:
                    cout << "Operations Research" << endl;
                    bookNot();
                    goto y;
                    break;
                case 6:
                    cout << "Principle of Accounting" << endl;
                    bookAv();
                    Date();

                    break;
                default:
                    cout << "Wrong input " << endl;
                }
            }

            if (option1 == "3")
            {
                booksList();
                for (int i = 0; i < 6; i++) {
                    cout << course3[i] << endl;
                }
                booksOption(book);

                switch (book)
                {
                case 1:
                    cout << "Air Transportation" << endl;
                    bookNot();
                    goto y;
                    break;
                case 2:
                    cout << "Railway Transportation" << endl;
                    bookAv();
                    Date();

                    break;
                case 3:
                    cout << "Financial Institutions Management" << endl;
                    bookAv();
                    Date();
                    break;

                case 4:
                    cout << "Marketing Management" << endl;
                    bookNot();
                    goto y;
                    break;

                case 5:
                    cout << "Project Management" << endl;
                    bookAv();
                    Date();

                    break;
                case 6:
                    cout << "Business English Readings " << endl;
                    bookNot();
                    goto y;
                    break;
                default:
                    cout << "Wrong input " << endl;
                }
            }
        }
    }
    return 0;
}