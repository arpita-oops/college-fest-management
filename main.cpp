//**********
// HEADER FILE USED IN PROJECT
//**********
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream>
#include<string>
#include<iostream>
#include<cstring>
#include <cstdlib>
void AdminList();
void password();
void UserList();
//*********
// INTRODUCTION FUNCTION
//*********
void MainMenu()
{
    int ch;char ans;
    do
    {
        system("cls");
        std::cout << "\n\n\t\tMAIN MENU\n";
        std::cout << "\n\t\t01.ENTER AS AN USER";
        std::cout << "\n\t\t02.ENTER AS AN ADMINISTRATOR";
        std::cout << "\n\t\t03.EXIT";
        std::cout << "\n\t\tPlease Select Your Option(1-3): ";
        std::cin>>ch;
        switch (ch)
        {
            case 1:	system("cls");
                UserList();  //Fest List
                getch();
            break;

            case 2:system("cls");
                password();
                AdminList();   //Fest list
            break;

            case 3: exit(0);
            break;
        }
        std::cout<<"\n\n\t\t\tDo you wish to continue?(y/n)\t";
        std::cin>>ans;
    } while (ans=='y');

}

//******
//USER FUNCTION
//******
void UserList()
{
    //List of fests
    int choice;char ans;
    do
    {
        system("cls");
        char ch;
        std::cout<<"\n\t1.MOOD INDIGO";
        std::cout<<"\n\t2.RENDEZVOUS";
        std::cout<<"\n\t3.WAVES";
        std::cout<<"\n\t4.MILAN";
        std::cout<<"\n\t5.OASIS";
        std::cout<<"\n\t6.Go to main menu";
        std::cout<<"\n\tEnter your choice :\t";
        std::cin>>choice;
        switch(choice)
        {
            case 1:system("cls");
                std::cout<<"MOOD INDIGO\nVenue: IIT Bombay\nDate:10th july 2022";
                std::cout<<"\nComprises of competition on :Dance,Music,Drama,Literary arts and design\n\n";
                std::cout<<"Music & Dance at Mood Indigo:\n\n";
                std::cout<<"1. Beat the Street: Group Hip-hop dance Competition.\n2. Nrityaamjali: Classical Dance Competition.";
                std::cout<<"\n3. MI Idol: Hindi solo signing Competition.\n4. Sanskriti: Group folk dance Competition.";
                std::cout<<"\n\nDramatics, Lifestyle & Fine Arts at Mood Indigo:\n1. Aagaaz: Street Play Competition.\n";
                std::cout<<"2. Trashion: Best of Waste Competition.\n3. Rangeela: Watercolour Painting Competition\n";
                std::cout<<"\n\n\nDo you want to register for this fest?(y/n)\t";
                std::cin>>ch;
                if(ch=='y')
                {
                    system("cls");
                    char name[30],branch[10],email[30],regno[15];int number;
                    std::cout<<"\n\tRegisterration Form:\n";
                    std::cout<<"\n\tEnter your name:\t";             std::cin>>name;
                    std::cout<<"\n\tEnter your official email id:\t"; std::cin>>email;
                    std::cout<<"\n\tEnter your branch:\t";           std::cin>>branch;
                    std::cout<<"\n\tEnter your Registertion number:\t";std::cin>>regno;
                    std::cout<<"\n\tEnter your phone number:\t";     std::cin>>number;


                    std::ofstream fout("MD.txt");
                    fout<<"Name:\t"<<name<<"\tPhone number:\t"<<number;
                    fout<<"\tEmail id:\t"<<email<<"\tBranch:\t"<<branch;
                    fout<<"\tRegistertion number:\t"<<regno;
                    fout.close();
                }
                else
                    UserList();

            break;

            case 2:system("cls");
                std::cout<<"RENDEZVOUS\nVenue: IIT Delhi\nDate: 22 july 2022\n";
                std::cout<<"comprises of competitionson : music, drama,photography,films, fine arts, sports etc";
                std::cout<<"\nDance in Rendezvous IIT Delhi:\n1. Solo Dance Competition\n2. Duo Dance Competition\n";
                std::cout<<"3. Street Dance Competition\n4.Western group dance Competition\n\n";
                std::cout<<"Dramatics in Rendezvous IIT Delhi:\n1. Natika Vatika: Stage Play Competition\n2. Swaang:Mono Act Competition\n";
                std::cout<<"3. Mimansa: Street Play Competition Photography & Flims in Rendezvous IIT Delhi:\n\n";
                std::cout<<"1. Through the Lens: Photography Competition\n2. Theatrical Trailers: Trailer making Competition\n";
                std::cout<<"3. Show Reel: Cinematic Showreel Competition\n\nFine Arts & Crafts in Rendezvous IIT Delhi:\n";
                std::cout<<"1. Brush Off Brush: Brushless Painting Competition\n2. Paint A Spot: On Spot Painting Competition\n";
                std::cout<<"3. DeeWar: Wall Painting Competition\nMusic in Rendezvous IIT Delhi:\n\n1. Swar: Indian Classical Vocals Solo Competition\n";
                std::cout<<"2. Instrumental Impromptu: Instrumental music Competition\n3. Anahad: Fusion Bands competition\n";
                std::cout<<"\n\n\nDo you want to register for this fest?(y/n)\t";
                std::cin>>ch;
                if(ch=='y')
                {
                    system("cls");
                    char name[20],branch[10],email[30],regno[15];int number;
                   std::cout<<"\n\tRegisterration Form:\n";
                    std::cout<<"\n\tEnter your name:\t";             std::cin>>name;
                    std::cout<<"\n\tEnter your official email id:\t";std::cin>>email;
                    std::cout<<"\n\tEnter your branch:\t";           std::cin>>branch;
                    std::cout<<"\n\tEnter your Registertion number:\t";std::cin>>regno;
                    std::cout<<"\n\tEnter your phone number:\t";     std::cin>>number;

                    std::ofstream fout("REN.txt");
                    fout<<"Name:\t"<<name<<"\tPhone number:\t"<<number;
                    fout<<"\tEmail id:\t"<<email<<"\tBranch:\t"<<branch;
                    fout<<"\tRegistertion number:\t"<<regno;
                    fout.close();
                }
                else
                    UserList();
            break;

            case 3 :system("cls");
                std::cout<<"WAVES\nVenue: BITS Goa\nDate: 25 july 2022\ncomprises of competitions on : music, dance,acting,films, fashion,fine arts etc\n\n";
                std::cout<<"1. Natyanjal: It is a group dance competition showcasing a blend of Classical and western dance forms.\n";
                std::cout<<"2. Mr. And Ms. Waves: This event is the Talent Hunt event. Participants showcase their varied talents like music,dance, acting etc.\n";
                std::cout<<"3. FashP: FashP or Fashion Parade is the prestigious Fashion event. Thematic ramp walks, new concepts and trends of fashion are showcased in this event.\n\n";
                std::cout<<"\n\n\nDo you want to register for this fest?(y/n)\t";
                std::cin>>ch;
                if(ch=='y')
                {
                    system("cls");
                    char name[20],branch[10],email[30],regno[15];int number;
                    std::cout<<"\n\tRegisterration Form:\n";
                    std::cout<<"\n\tEnter your name:\t";             std::cin>>name;
                    std::cout<<"\n\tEnter your official email id:\t";std::cin>>email;
                    std::cout<<"\n\tEnter your branch:\t";           std::cin>>branch;
                    std::cout<<"\n\tEnter your Registertion number:\t";std::cin>>regno;
                    std::cout<<"\n\tEnter your phone number:\t";     std::cin>>number;

                    std::ofstream fout("WAVES.txt");
                    fout<<"Name:\t"<<name<<"\tPhone number:\t"<<number;
                    fout<<"\tEmail id:\t"<<email<<"\tBranch:\t"<<branch;
                    fout<<"\tRegistertion number:\t"<<regno;
                    fout.close();
                }
                else
                    UserList();
            break;

            case 4:system("cls");
                std::cout<<"MILAN\nVenue: SRM Institute of Science and Technology\nDate: 8th july 2022\nComprises of competition on: arts,dance ,music,drama etc\n\n";
                std::cout<<"1. Literary events: Each year in Milan, a number of literary events like debates, ";
                std::cout<<"extempore and essaywriting that take place provide a platform to young orators and writers to exhibit their literary skills. Topics range from politics, ethics to environment and technology\n";
                std::cout<<"2. Funzone: previously known as Informals, is one of the major attractions for participants of the festival. It involves a variety of events, the major highlights beingthe legendary treasure-hunt, Mythos D' Aghor and Milan Roadies which come with grand cash prizes.\n";
                std::cout<<"3. Creativity and Fine Arts: This is a domain in which artists can let loose their creative genius with events like road graffiti, wall-painting, collage-making and poster-making.\n";
                std::cout<<"4.Music: Music at Milan has been an ever-evolving domain with some classic events like solo singing and instrumentals with a fusion of a new batch of events like Rap Battles,Beat-boxing, Acapella, Battle of the Bands, Jugalbandi and so on.\n";
                std::cout<<"\n\n\nDo you want to register for this fest?(y/n)\t";
                std::cin>>ch;
                if(ch=='y')
                {
                    system("cls");
                    char name[20],branch[10],email[30],regno[15];int number;
                   std::cout<<"\n\tRegisterration Form:\n";
                    std::cout<<"\n\tEnter your name:\t";             std::cin>>name;
                    std::cout<<"\n\tEnter your official email id:\t";std::cin>>email;
                    std::cout<<"\n\tEnter your branch:\t";           std::cin>>branch;
                    std::cout<<"\n\tEnter your Registertion number:\t";std::cin>>regno;
                    std::cout<<"\n\tEnter your phone number:\t";     std::cin>>number;

                    std::ofstream fout("MILAN.txt");
                    fout<<"Name:\t"<<name<<"\tPhone number:\t"<<number;
                    fout<<"\tEmail id:\t"<<email<<"\tBranch:\t"<<branch;
                    fout<<"\tRegistertion number:\t"<<regno;
                    fout.close();
                }
                else
                    UserList();
            break;

            case 5 :system("cls");
                std::cout<<"OASIS\nVenue: BITS Pilani\nDate:23 july 2022\nComprises of competition on: fine arts,dramatics,quizzing,music,dance\n";
                std::cout<<"1.Oasis film festival\nAll of Oasis’ film making–related events like Metamorphosis (the short film–making competition)\n";
                std::cout<<"2.The vlog making competition, movie screenings\n3.The fest also provides ample opportunities for aspiring musiciansthrough events like Pitch Perfect, Axetacy, Andholika\n\n";
                std::cout<<"\n\n\nDo you want to register for this fest?(y/n)\t";
                std::cin>>ch;
                if(ch=='y')
                {
                    system("cls");
                    char name[20],branch[10],email[30],regno[15];int number;
                    std::cout<<"\n\tRegisterration Form:\n";
                    std::cout<<"\n\tEnter your name:\t";             std::cin>>name;
                    std::cout<<"\n\tEnter your official email id:\t";std::cin>>email;
                    std::cout<<"\n\tEnter your branch:\t";           std::cin>>branch;
                    std::cout<<"\n\tEnter your Registertion number:\t";std::cin>>regno;
                    std::cout<<"\n\tEnter your phone number:\t";     std::cin>>number;

                    std::ofstream fout("OASIS.txt");
                    fout<<"Name:\t"<<name<<"\tPhone number:\t"<<number;
                    fout<<"\tEmail id:\t"<<email<<"\tBranch:\t"<<branch;
                    fout<<"\tRegistertion number:\t"<<regno;
                    fout.close();
                }
                else
                    UserList();
            break;

            case 6: MainMenu();
            break;

        }
        std::cout<<"\n\n\t\t\tDo you wish to continue?(y/n)\t";
	    std::cin>>ans;
	    if(ans=='n')
            MainMenu();
    } while (ans=='y');
}

//*****
//ADMIN FUNCTION
//*****
void AdminList()
{
    //List of fests
    int ch;char ans;
    do
    {
        system("cls");
        std::__cxx11::string line;
        std::ifstream fin;
        std::cout<<"\n\t1.MOOD INDIGO (IIT Bombay)";
        std::cout<<"\n\t2.RENDEZVOUS (IIT Delhi)";
        std::cout<<"\n\t3.WAVES (BITS Goa)";
        std::cout<<"\n\t4.MILAN (SRM Institute of Science and Technology)";
        std::cout<<"\n\t5.OASIS (BITS Pilani)";
        std::cout<<"\n\t6.Go to main menu";
        std::cout<<"\n\tEnter your choice :\t";
        std::cin>>ch;
        switch(ch)
        {
            case 1:fin.open("MI.txt");
                    while(fin)
                    {
                        std::getline(fin, line,' ');
                        std::cout<<line<<std::endl;
                    }
                    fin.close();
            break;

            case 2://std::ifstream fin;
                    fin.open("REN.txt");
                    while(fin)
                    {
                        getline(fin, line,' ');
                        std::cout<<line<<std::endl;
                    }
                    fin.close();
            break;

            case 3://std::ifstream fin;
                    fin.open("WAVES.txt");
                    while(fin)
                    {
                        getline(fin, line,' ');
                        std::cout<<line<<std::endl;
                    }
                    fin.close();
            break;

            case 4://std::ifstream fin;
                    fin.open("MILAN.txt");
                    while(fin)
                    {
                        getline(fin, line,' ');
                        std::cout<<line<<std::endl;
                    }
                    fin.close();
            break;

            case 5://std::ifstream fin;
                    fin.open("OASIS.txt");
                    while(fin)
                    {
                        getline(fin, line,' ');
                        std::cout<<line<<std::endl;
                    }
                    fin.close();
            break;

            case 6:MainMenu();
            break;
        }

        std::cout<<"\n\n\t\t\tDo you wish to continue?(y/n)\t";
	    std::cin>>ans;
    } while (ans=='y');
}

//****
//PASSWORD
//****
void password()
{
    char pwd[9];
    std::cout<<"\n\tEnter admin password\n\t";
    char ch;
    int i=0;
    while(1)
    {
        ch=getch();
        if(ch==13)
        break;
        pwd[i++]=ch;
        std::cout<<'*';
    }
    pwd[i]='\0';
    if(strcmp(pwd,"admin")==0)
    {
        std::cout<<"\n\n\t\t\t  *Access enabled for ADMIN.*\n";
        std::cout<<"\n\t\t\tPress any key to continue.";
        getch();
    }
    else
    {
        std::cout<<"\n\n\t\tIncorrect password. Press any key to exit.";
        getch();
        exit(0);
    }
}

//*********
// INTRODUCTION FUNCTION
//*********
void intro()
{
    system("cls");
    std::cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tCOLLEGE FEST";
    getch();

}

//************
// THE MAIN FUNCTION OF PROGRAM
//************
int main()
{
    intro();

    MainMenu();
    getch();
}

//*******
// END OF PROJECT
//******
