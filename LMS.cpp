#include <iostream>
#include <iomanip>
#include <cstring>

const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Node {
    std::string usn;
    std::string b, a, ph, br;
    int d1, d2, m1, m2, y1, y2;
    int days1, la;
    Node* link;
};

Node* start = nullptr;
Node* temp = nullptr;
Node* p = nullptr;

int isLeapYear(int year);
int calcdaysandprice();
Node* read();
void menu();
void entry();
void cse();
void ece();
void me();
void display();
void search();
void srusn();
void srphn();
void srdays();
void srdel();



Node* read() {
    std::string us, phn;
    std::cout << "Enter USN: ";
    std::cin >> us;
    std::cout << "Enter Phone number: ";
    std::cin >> phn;

    temp = new Node; // Using new to allocate memory in C++
    temp->usn = us;
    temp->ph = phn;
    temp->link = nullptr;

    p = temp;
    return p;
}

// The rest of the code remains unchanged.


void menu() {
    int ch;
    char tidi;
    do {
        std::cout << "\n\n\n\n\n";
        std::cout << "                      MM    MM     EEEEEEEE     NN     NN     UU    UU\n";
        std::cout << "                      MMM  MMM     EE           NN NN  NN     UU    UU\n";
        std::cout << "                      MM MM MM     EEEEE        NN  NN NN     UU    UU\n";
        std::cout << "                      MM    MM     EE           NN   NNNN     UU    UU\n";
        std::cout << "                      MM    MM     EEEEEEEE     NN     NN	UUUU \n\n\n";
        std::cout << "CHOOSE THE OPERATION YOU WANT TO PERFORM\n\n";
        std::cout << "1. MAKE AN ENTRY\n";
        std::cout << "2. LIST ALL ENTRIES\n";
        std::cout << "3. SEARCH FOR AN ENTRY\n";
        std::cout << "4. EXIT\n";
        std::cout << "ENTER YOUR CHOICE: ";
        std::cin >> ch;
        
        switch(ch) {
            case 1:
                entry();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                exit(0);
        }

        std::cout << "\n\nDO YOU WANT TO GO TO HOME PAGE AGAIN / EXIT? [Y/N]\n";
        std::cin >> tidi;

    } while (tidi == 'Y' || tidi == 'y');
}


void entry() {
    char tidi;
    do {
        char usn[11];
        int n;
        Node *temp;
        temp = read();

        std::cout << "\nEnter the branch from which it is picked\n";
        std::cout << "1. COMPUTER SCIENCE\n";
        std::cout << "2. ELECTRONICS AND COMMUNICATION\n";
        std::cout << "3. MECHANICAL\n";
        std::cout << "MAKE YOUR CHOICE: ";
        std::cin >> n;

        switch (n) {
            case 1:
                cse();
                break;
            case 2:
                ece();
                break;
            case 3:
                me();
                break;
        }

        std::cout << "\nDO YOU WANT TO MAKE ANOTHER ENTRY? [Y/N]\n";
        std::cin >> tidi;

    } while (tidi == 'Y' || tidi == 'y');
}



void cse() {
    std::cout << "                    CCCCCC   OOOOO    MM    MM  PPPPPP        &&&&&          NN     NN   EEEEEEEE   TTTTTTTTT    \n";
    std::cout << "                   CC       OO   OO   MMM  MMM  PP   PP      &&   &&         NN NN  NN   EE            TT   \n";
    std::cout << "                   CC       OO   OO   MM MM MM  PPPPPP        &&&&&  &&      NN  NN NN   EEEEE         TT       \n";
    std::cout << "                   CC       OO   OO   MM    MM  PP          &&     &&&       NN   NNNN   EE            TT     \n";
    std::cout << "                    CCCCCC   OOOOO    MM    MM  PP          &&    &&&&       NN     NN   EEEEEEEE      TT      \n";
    std::cout << "                                                             &&&&&&  &&                      \n\n";

    int i, n;
    std::string books[22] = {"Discrete Mathematics and Its Applications", "Higher Engineering mathematics", "Advanced Engineering Mathematics", "The C Programming language", "Classic Data Structures", "Computer Architecture ñ A Quantitative Approach", "Computer Organization and Embedded systems", "An Introduction to Formal Languages and Automata", "NPTEL lectures", "Compilers: Principles, Techniques and Tools", "Compiler Design in C", "Introduction to Algorithms", "Data Structures & Algorithms", "Digital Design", "Digital Electronics", "Operating System Concepts", "Modern Operating System", "Operating Systems", "Database System Concepts", "Normalization and indexing", "Data Communications and Networking", "Computer Networks"};
    
    std::string auth[22] = {"Kenneth Rosen", "B.S. Grewal", "Erwin Kreyszig", "Dennis Richie", "Debasis Samanta", "Hennessy and Patterson", "Carl Hamacher", "Peter Linz", "Kamala Krithivasan", "Aho & Ullman", "Allen I Holub", "Cormen", "R.S. Salaria", "Morris Mano", "S. Salivahanan & S. Arivazhagan", "Galvin", "Andrew Tanenbaum", "Stallings", "Henry. F. Korth", "Shamkant B. Navathe", "Kurose & Ross and Behrouz A. Forouzan", "Peterson & Davie"};

    std::cout << "\n\n\n\n";
    for (i = 0; i < 22; i++)
        std::cout << i + 1 << ". " << books[i] << " by " << auth[i] << "\n";

    std::cout << "\n\nEnter the number of the book borrowed: ";
    std::cin >> n;

    temp->la = calcdaysandprice();
    temp->b = books[n - 1];
    temp->a = auth[n - 1];
    temp->br = "CSE";

    if (start == nullptr)
        start = temp;
    else {
        p = start;
        while (p->link != nullptr)
            p = p->link;
        p->link = temp;
    }

    std::cout << "Entry Successful";
}

void ece() {
    std::cout << "                   	EEEEEEEE          &&&&&            CCCCCC   \n";
    std::cout << "                  	EE	         &&   &&          CC    \n";
    std::cout << "                   	EEEEE	          &&&&&  &&       CC        \n";
    std::cout << "                  	EE	        &&     &&&        CC       \n";
    std::cout << "                  	EEEEEEEE        &&    &&&&         CCCCCC        \n";
    std::cout << "  				         &&&&&&  &&                      \n\n";

    int i, n;
    std::string books[27] = {"Higher Engineering Mathematics", "Advance Engineering Mathematics", "Signals & Systems", "Discrete Time Signal Processing", "Digital Signal Processing", "Control System Engg.", "Automatic Control Systems", "Modern Control System", "Design of feedback control system", "Network Analysis", "Networks & System", "Engineering Circuit analysis", "Electronics devices and circuits", "Integrated Electronics : Analog & Digital circuits and system", "Micro Electronics Circuit", "Digital Electronics", "Digital circuits", "Microprocessor", "Electromagnetics Waves and Radiating System", "Engg Electromagnetics", "Antenna And Wave Propagation", "Microwave devices & circuits", "Communication Systems", "Principals of communication systems", "An introduction to Analog and Digital Communications", "Modern & digital communication system", "Electronic Communication System"};
    
    std::string auth[27] = {"Dr. BS Grewal", "Erwin Kreyszig", "Oppenheim & Schafer", "Oppenheim & Schafer", "Proakis", "Nagrath & Gopal", "Benjamin C Kuo", "Katsuhiko Ogata", "Hostetter, Savant & Stefani", "Van Valkenburg", "D Roy & Choudhary", "Hayt & Kammerly", "Millman & Halkias", "Millman & Halkias", "Sedra & Smith", "Morris Mano", "Taub & Schilling", "Ramesh Gaonkar", "E.C. Jordan and K.G. Balsain", "William Hayt", "KD Prasad", "Lio", "Simon Hykin", "Taub & Schilling", "Simon Hykin", "BP Lathi", "Kennedy"};

    std::cout << "\n\n\n\n";
    for (i = 0; i < 27; i++)
        std::cout << i + 1 << ". " << books[i] << " by " << auth[i] << "\n";

    std::cout << "\n\nEnter the number of the book borrowed: ";
    std::cin >> n;

    temp->la = calcdaysandprice();
    temp->b = books[n - 1];
    temp->a = auth[n - 1];
    temp->br = "ECE";

    if (start == nullptr)
        start = temp;
    else {
        p = start;
        while (p->link != nullptr)
            p = p->link;
        p->link = temp;
    }

    std::cout << "Entry Successful\n\n";
}


void me() {
    std::cout << "                      MM    MM     EEEEEEEE  \n";
    std::cout << "                      MMM  MMM     EE         \n";
    std::cout << "                      MM MM MM     EEEEE      \n";
    std::cout << "                      MM    MM     EE          \n";
    std::cout << "                      MM    MM     EEEEEEEE  \n\n";

    int i, n;
    std::string books[32] = {"Fundamentals of Classed Thermodynamics", "Heat Transfer", "Heat and Mass Transfer", "Energy Conversion", "Environmental Pollution Central Engineering", "Surveying and Levelling", "Heat Conversion", "Manufacturing Science", "Thermodynamics", "Theory of Mechanics", "Theory of Mechanism and Mechanics", "Mechanic of Solids", "Manufacturing Science", "Manufacturing Technology", "Production Manangement", "Principles of Manufacturing Material & Process", "Engineering Thermodynamics", "IC Engine", "Gas Turbine and Propulsive Systems", "Fluid Mechanics", "Compressible Flow", "Heat and Mass Transfer", "Refrigeration and Air Conditioning", "Fluid Machinery", "Theory of Machines", "Mechanical Vibration", "Machine Design", "Material Science", "Production Engineering", "Industrial Engineering", "Operations Research", "Strength of Materials"};

    std::string auth[32] = {"Van Wylen", "Gupta Prakash", "R. Yadav", "Sukhalmoy", "C S Rao", "T P Kanetkar", "Arora & Kundwar", "R K Jain", "R Yadav", "S S Rattan", "Jagdish Lal", "Popru", "Ghosh and Malik", "P N Rao", "R K Jain", "Campbeu", "PK Nag", "ML Mathur and RP Sharma", "PR Khajuria & SP Dubey", "Modi & Seth RK Bansal", "SM Yahya", "JP Hollman and RC Sachdeva", "CP Arora and Domkundwar", "Jagdish Lal and RK Bansal", "Malik & Ghosh", "Grover", "VB Bhandari", "WD Callister", "Kalpakjian Schmid", "O P Khanna", "Kanti Swarup", "Gere & Timoshenko"};

    std::cout << "\n\n\n\n";
    for (i = 0; i < 32; i++)
        std::cout << i + 1 << ". " << books[i] << " by " << auth[i] << "\n";

    std::cout << "\n\nEnter the number of the book borrowed: ";
    std::cin >> n;

    temp->la = calcdaysandprice();
    temp->b = books[n - 1];
    temp->a = auth[n - 1];
    temp->br = "ME";

    if (start == nullptr)
        start = temp;
    else {
        p = start;
        while (p->link != nullptr)
            p = p->link;
        p->link = temp;
    }

    std::cout << "Entry Successful\n\n";
}



void display() {
    struct Node *disp;
    disp = start;
    int i = 0;

    std::cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    std::cout << std::setw(5) << "Sl.No" << std::setw(13) << "USN" << std::setw(12) << "Phone" << std::setw(75) << "Name of Book" << std::setw(10) << "Branch"
              << std::setw(16) << "Borrow_Date" << std::setw(16) << "Return_Date" << std::setw(14) << "Total Days" << std::setw(17) << "Late fee(INR)\n";
    std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

    if (disp == NULL)
        std::cout << "\n\t\t\t\tThere are no entries!";
    else {
        while (disp != NULL) {
            std::cout << std::setw(5) << ++i << std::setw(13) << disp->usn << std::setw(12) << disp->ph << std::setw(75) << disp->b << std::setw(10) << disp->br
                      << std::setw(4) << std::setfill('0') << disp->d1 << '/' << std::setw(2) << disp->m1 << '/' << std::setw(4) << disp->y1 << std::setfill(' ')
                      << std::setw(4) << std::setfill('0') << disp->d2 << '/' << std::setw(2) << disp->m2 << '/' << std::setw(4) << disp->y2 << std::setfill(' ')
                      << std::setw(14) << disp->days1 << std::setw(17) << disp->la;
            std::cout << "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
            disp = disp->link;
        }
    }
}

int isLeapYear(int year) {
    int flag = 0;
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            flag = 1;
        } else {
            flag = 0;
        }
    } else if (year % 4 == 0) {
        flag = 1;
    }
    return flag;
}

int calcdaysandprice() {
    int year, month, date, i, days;
    int cyear, cmonth, cdate, tmpMon, tmpYear;
    temp->days1 = 0;
    std::cout << "\nENTER THE DATE THE BOOK WAS BORROWED(DD/MM/YYYY):";
    std::cin >> date >> month >> year;
    std::cout << "\nENTER THE DATE THE BOOK WAS RETURNED(DD/MM/YYYY):";
    std::cin >> cdate >> cmonth >> cyear;
    tmpMon = month;
    tmpYear = year;
    temp->d1 = date;
    temp->m1 = month;
    temp->y1 = year;
    temp->d2 = cdate;
    temp->m2 = cmonth;
    temp->y2 = cyear;

    if (cyear == year && cmonth == month) {
        temp->days1 = cdate - date + 1;
        return 0;
    }

    if (month == 2) {
        temp->days1 = daysInMonth[month - 1] - date + 1 + isLeapYear(year);
    } else {
        temp->days1 = daysInMonth[month - 1] - date + 1;
    }

    if (month == 12) {
        month = 0;
        year++;
    }

    while (year <= cyear) {
        for (i = month; i < 12; i++) {
            if ((year == cyear) && (i == cmonth - 1)) {
                temp->days1 = temp->days1 + cdate;
                break;
            }

            if (i == 1) {
                temp->days1 = temp->days1 + daysInMonth[i] + isLeapYear(year);
            } else {
                temp->days1 = temp->days1 + daysInMonth[i];
            }
        }

        month = 0;
        year++;
    }

    int late = 0;
    days = temp->days1;

    if (days > 15) {
        days = days - 15;
        late = days * 2;
    }

    return late;
}
void search() {
    char tidi;
    do {
        std::cout << "               @@@@@@@\n";
        std::cout << "             @@      @@\n";
        std::cout << "           @@        @@          $$$$$$$$$   $$$$$$$$      $$$       $$$$$$$   $$$$$$$$   $$    $$\n";
        std::cout << "           @@       @@           $$          $$           $$ $$      $$   $$   $$         $$    $$\n";
        std::cout << "            @@@@@@@              $$$$$$$$$   $$$$$$      $$$$$$$     $$$$$$$   $$         $$$$$$$$\n";
        std::cout << "             @ @                        $$   $$         $$     $$    $$ $$     $$         $$    $$\n";
        std::cout << "            @ @                  $$$$$$$$$   $$$$$$$$  $$       $$   $$   $$   $$$$$$$$   $$    $$\n";
        std::cout << "           @ @\n";
        std::cout << "          @@@                                                                 \n\n";

        int ch;
        std::cout << "\nWhat do you like to search by ?";
        std::cout << "\n1.Customer USN";
        std::cout << "\n2.Customer phone number";
        std::cout << "\n3.No. of days for which the book was Borrowed";
        std::cout << "\n4.Customers with delayed returns";
        std::cout << "\nEnter your choice: ";
        std::cin >> ch;

        switch (ch) {
            case 1:
                srusn();
                break;
            case 2:
                srphn();
                break;
            case 3:
                srdays();
                break;
            case 4:
                srdel();
                break;
        }

        std::cout << "\nDO YOU WANT TO MAKE ANOTHER SEARCH[Y/N]:";
        std::cin >> tidi;
    } while (tidi == 'Y' || tidi == 'y');
}



void srusn() {
    std::cout << "\n\n\nEnter the USN you want to search by:";
    char sus[12];
    int lol = 1, i = 0;
    std::cin >> sus;

    struct Node *srch;
    srch = start;

    std::cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "%5s%13s%12s%75s%10s    Borrow_Date    Return_Date%14s%17s\n";
    std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

    if (start == NULL)
        std::cout << "There are no Entries";
    else
        srch = start;

    while (srch != NULL) {
        if (srch->usn== sus) {
            std::cout << "%5d%13s%12s%75s%10s       %02d/%02d/%d       %02d/%02d/%d%14d%17d";
            std::cout << ++i << srch->usn << srch->ph << srch->b << srch->br << srch->d1 << srch->m1 << srch->y1 << srch->d2 << srch->m2 << srch->y2 << srch->days1 << srch->la;
            std::cout << "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
            lol++;
        }
        srch = srch->link;
    }

    if (lol == 1)
        std::cout << "\n There are no entries matching entered data\n\n";
}


void srphn() {
    std::cout << "\n\n\nEnter the phone number you want to search by:";
    char sph[11];
    int lol = 1, i = 0;
    std::cin >> sph;

    struct Node *srch1;
    srch1 = start;

    std::cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "%5s%13s%12s%75s%10s    Borrow_Date    Return_Date%14s%17s\n";
    std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

    if (start == NULL)
        std::cout << "There are no Entries";
    else
        srch1 = start;

    while (srch1 != NULL) {
        if (srch1->ph== sph)  {
            std::cout << "%5d%13s%12s%75s%10s       %02d/%02d/%d       %02d/%02d/%d%14d%17d";
            std::cout << ++i << srch1->usn << srch1->ph << srch1->b << srch1->br << srch1->d1 << srch1->m1 << srch1->y1 << srch1->d2 << srch1->m2 << srch1->y2 << srch1->days1 << srch1->la;
            std::cout << "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
            lol++;
        }
        srch1= srch1->link;
    }

    if (lol == 1)
        std::cout << "\n There are no entries matching entered data\n\n";
}


void srdays() {
    std::cout << "\n\n\nEnter the number of days for which the book was borrowed:";
    int dis;
    int lol = 1, i = 0;
    std::cin >> dis;

    struct Node *srchh;
    srchh = start;

    std::cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "%5s%13s%12s%75s%10s    Borrow_Date    Return_Date%14s%17s\n";
    std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

    if (start == NULL)
        std::cout << "There are no Entries!";
    else
        srchh = start;

    while (srchh!= NULL) {
        if (srchh->days1 == dis) {
            std::cout << "%5d%13s%12s%75s%10s       %02d/%02d/%d       %02d/%02d/%d%14d%17d";
            std::cout << ++i << srchh->usn << srchh->ph << srchh->b << srchh->br << srchh->d1 << srchh->m1 << srchh->y1 << srchh->d2 << srchh->m2 << srchh->y2 << srchh->days1 << srchh->la;
            std::cout << "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
            lol++;
        }
        srchh = srchh->link;
    }

    if (lol == 1)
        std::cout << "\n There are no entries matching entered data\n\n";
}


void srdel() {
    int lol = 1, i = 0;
    struct Node *srcch;
    srcch = start;

    std::cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "%5s%13s%12s%75s%10s    Borrow_Date    Return_Date%14s%17s\n";
    std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

    if (start == NULL)
        std::cout << "There are no Entries";
    else
        srcch = start;

    while (srcch != NULL) {
        if (srcch->days1 > 15) {
            std::cout << "%5d%13s%12s%75s%10s       %02d/%02d/%d       %02d/%02d/%d%14d%17d";
            std::cout << ++i << srcch->usn << srcch->ph << srcch->b << srcch->br << srcch->d1 << srcch->m1 << srcch->y1 << srcch->d2 << srcch->m2 << srcch->y2 << srcch->days1 << srcch->la;
            std::cout << "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
            lol++;
        }
        srcch = srcch->link;
    }

    if (lol == 1)
    {
        std::cout << "\n There are no entries matching entered data\n\n";
}
}
int main() {
    char username[15];
    char password[12];

    std::cout << "\n\t\t\t\t                          WELCOME TO THE:\n\n\n";
    std::cout << "\n\t\t\t\t LIBRARY!\n\n";
    std::cout << "Sign In To Create Your Library Record:-\n";
    std::cout << "\t\t\t\t\t\t\t\tEnter your username:";
    std::cin >> username;
    std::cout << "\t\t\t\t\t\t\t\tEnter your password:";
    std::cin >> password;

    if (strcmp(username, "library1") == 0) {
        if (strcmp(password, "**") == 0) {
            std::cout << "\n\t\t\t\t\t\tWelcome. Login Success!";
            menu();
        } else {
            std::cout << "\nWrong password";
        }
    } else {
        std::cout << "\nUser doesn't exist";
    }

    return 0;
}