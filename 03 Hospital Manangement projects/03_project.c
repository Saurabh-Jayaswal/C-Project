#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void hospital_name();
void user_pass();
void information();
void A();
void list();
void doctor();
void appointment();
void app_call();
struct information
{
    char first_name[20];
    char last_name[20];
    char g[20];

    int age;
    char address[30];

    char contact_no[11];
    char email[20];
};

struct information p;

int main()
{
    hospital_name();
    user_pass();
    information();
    return 0;
}

void hospital_name()
{
    printf("\n\n\n\n\n\t\t\t\t\t\t#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*##\n\t\t\t\t\t\t#\t\t\t\t#\n\t\t\t\t\t\t#\t\t\t\t#\n");
    printf("\t\t\t\t\t\t#\t WELCOME TO\t\t# \n\t\t\t\t\t\t#\t\t\t\t#\n\t\t\t\t\t\t#\t\t\t\t#\n ");
    printf("\t\t\t\t\t\t#\tJAYASWAL HOSPITAL\t# \n\t\t\t\t\t\t#\t\t\t\t#\n\t\t\t\t\t\t#\t\t\t\t#\n");
    printf("\t\t\t\t\t\t#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*##\n\n\n");
    printf("\t\tpress any key to continue.........");
    getch();
    system("cls");
}
void user_pass()
{
    printf("\t\t*****************************************************\n");
    printf("\t\t\t\tJAYASWAL HOSPITAL\n");
    printf("\t\t*********************************************************\n\n\n\n");
    char user_name[20];
    char password[20];
    int i = 0;
    char orginal_username[20] = "Saurabh";
    char orginal_password[20] = "SJ15";

    do
    {
        printf("Enter the Username and Password\n\n\n");
        printf("enter the username :");
        scanf("%s", user_name);
        printf("\n");
        printf("enter the password :");
        scanf("%s", password);
        printf("\n");

        if (strcmp(orginal_username, user_name) == 0 && strcmp(orginal_password, password) == 0)
        {
            printf("\t\t\t\t**********LOGIN SUCCESSFUL *************\n\n\n");
            printf("\t\tpress any key to continue.........");
            getch();
            system("cls");
            break;
        }
        else
        {
            printf("username and password is wrong: (Try again)  :) \n ");
            i++;
            getch();
            system("cls");
        }
    } while (i < 2);
    if (i >= 2)
    {
        printf("You cannot login , You have written wrong password multiple times :: \n");
        getch();
        exit(1);
    }
}

void A()
{
    printf("\n\n\t\t#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*\n");
    printf("\t\t\tADD NEW PATIENT INFORMATION\n");
    printf("\t\t#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n\n");
    int n;

    printf("First Name :");
    scanf("%s", p.first_name);
    printf("\n");
    printf("Last Name :");
    scanf("%s", p.last_name);
    printf("\n");
    printf("Gender:");
    scanf("%s", p.g);
    printf("\n");
    printf("Age :");
    scanf("%d", &p.age);
    printf("\n");
    printf("Address :");
    scanf("%s", p.address);
    printf("\n");
    printf("Contanct No.:");
    scanf("%s", p.contact_no);
    printf("\n");
    printf("E-mail :");
    scanf("%s", p.email);
    printf("\n\n\n");

    printf("\t\tPress any key to go to Main Menu .........");
    getch();
    system("cls");
}
void list()
{
    int n;

    printf("\tFull Name \t\tGender \tAge\tAddress\t\t\t\tContact no.\t\t\t\tE-mail \n");
    printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n\n\n");

    printf("\t%s %s \t%s \t%d\t%s\t\t\t%s\t\t%s \n", p.first_name, p.last_name, p.g, p.age, p.address, p.contact_no, p.email);

    printf("\n\n\t\tPress any key to go to Main Menu .........");
    getch();
    system("cls");
}
void search()
{
    printf("\t\t*****************************************************\n");
    printf("\t\t\t\tJAYASWAL HOSPITAL\n");
    printf("\t\t*********************************************************\n\n\n");
    char name[20];
    int n;
    printf("Enter the patient name to be viewed :");
    scanf("%s", name);

    if (strcmp(p.first_name, name)==0)
    {
        printf("\n\n");
        
        list();
    }
    else
        printf("This name is not our record\n");
    //printf("\n\n\n\t\tPress any key to go to Main Menu .........");
    getch();
    system("cls");
}

void appointment()
{
    int ab;
    printf("DOCTOR's AVAILABLITY  :-  \n\n");
    printf("1:) Monday :- 5pm to 8pm\n");
    printf("2:) Tuesday :- 9am to 11am\n");
    printf("3:) Wednesday :- 1pm to 3pm\n");
    printf("4:) Thursday :- 6pm to 8pm\n");
    printf("5:) friday :- 5pm to 8pm\n");
    printf("6:) Sauturday :- 2pm to 5pm\n");
    printf("7:) Sunday :- 9am to 12am\n\n");

    printf("Choose the timing from (1-6):");

    scanf("%d", &ab);
    switch (ab)
    {
    case 1:
        printf("Your appointment is schedule on Monday at  6.15pm \n");
        break;
    case 2:
        printf("Your appointment is schedule on Tuesday at  9.30am\n");
        break;
    case 3:
        printf("Your appointment is schedule on Wednesday at 1.45pm\n");
        break;
    case 4:
        printf("Your appointment is schedule on Thursday at 7.30\n");

        break;
    case 5:
        printf("Your appointment is schedule on friday at   5.30pm\n");
        break;
    case 6:
        printf("Your appointment is schedule on Sauturday  at 4.30pm\n");
        break;
    case 7:
        printf("Your appointment is schedule on Sunday  at 11.30am \n");
        break;
    default:
        break;
    }
    printf("\t\tPress any key to go to Main Menu .........");
    getch();
    system("cls");
}

void app_call()
{
    int press;
    printf("\n\n");
    printf("if you have to take appointment -Press 1\n ");
    scanf("%d", &press);
    if (press == 1)
    {
        printf("\t\tPress any key  .........");
        getch();
        system("cls");
        appointment();
    }
}

void doctor()
{

    printf("\n\n\t\t#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*\n");
    printf("\t\t\tDOCTOR RECOMMENDED\n");
    printf("\t\t#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n\n");
    int w;
    printf("=>what type of problem you have ?\n");
    printf("\t1.\tHeart Problem  \n");
    printf("\t2.\tLiver problem/digestive system\t\n");
    printf("\t3.\tPain in body/COLD /COUGH/fever   \n");
    printf("\t4.\t Migraine/Head injury.\n");
    printf("\t5.\tEXIT\n");
    printf("Choose the number from 1 to 6 \n");
    scanf("%d", &w);
    switch (w)
    {
    case 1:
    {
        printf(":) DR K R BALAKRISHNAN \n Dr K R Balakrishnan, Chairman - Institute of Cardiac Sciences | Director - Institute of Heart and Lung Transplant & Mechanical Circulatory Support, MGM Healthcare, \nis one of India s leading cardiothoracic surgeons and heart-lung transplant specialists with over 30 years of experience in his expert hands. \nDr Balakrishnan has been bestowed the honour of the prestigious Hiralal Gold Medal to acknowledge his excellence in the field of surgery.\nA graduate from KEM Hospital, University of Bombay, Dr K R Balakrishnan has mastered an evidence-based approach to \nhealthcare practices and refined clinical expertise in surgery. His areas of expertise include end-stage heart failure \nmanagement (heart transplant & VAD implant), paediatric cardiac surgery, lung transplant, and heart and lung transplant. \n");
        app_call();
        break;
    }

    case 2:
    {
        printf(":) Dr. Ramesh Roop Rai \n Dr. Ramesh Roop Rai is a well experienced and senior consultant Gastroenterologist associated with Fortis Hospitals, Jaipur. He is the first DM Gastroenterologist in Rajasthan, he worked in various projects and has published over 98 research papers in National & International Journals. He has been instrumental in designing and manufacturing for various procedures of Gastroenterology. Dr. Ramesh was elected as the president of Indian Society of Gastroenterology 2007-2008,\n\n ");
        app_call();
        break;
    }
    case 3:
    {
        printf(":) Dr. Manish Mehta \n Dr. Manish Mehta (Sudha Heart & Multispeciality Hospital) in Kota-rajasthan is one of the leading businesses in the ENT Doctors. Also known for ENT Doctors, Head & Neck Surgeons and much more.  The doctor is known for employing a gentle approach to patients making them feel at ease almost immediately during the consultation process. Be it a minor ailment or a serious injury, the ENT specialist ensures that the patient understands the causes and the course of treatment. The medical centre can be visited in Talwandi, a region that can be reached without any hassles. It stands located at Jhalawar Main Road and is easy to find.\n\n");
        app_call();
        break;
    }
    case 4:
    {
        printf(":) Dr. Anuj Khandelwal \n Dr. Anuj Khandelwal says 'I Believe it's important to give a significant amount of time to your client, to listen to them patiently. talking reveals a lot of things and also build confidence of patient in a doctor. i go with this strategy of keeping less number of patients and giving sufficient amount of time to each of my patient. I have been working for last couple of years in areas of de-addiction and general psychiatry. I have good experience of dealing with different kinds of psycho-stimulant users, have been attached to a Oral Substitution Center for opioid deaddiction. I have gained some good experience in giving therapy of patients who suffer from OCD\n\n");
        app_call();
        break;
    }
    default:
        break;
    }
}

void information()
{
label:
    printf("\t\t*****************************************************\n");
    printf("\t\t\t\tJAYASWAL HOSPITAL\n");
    printf("\t\t*********************************************************\n\n");
    int num;
    printf("\t1.\tADD NEW PATIENT \n");
    printf("\t2.\tLIST PATIENT RECORD \n");
    printf("\t3.\tSEARCH PATIENT\t\n");
    printf("\t4.\tDOCTOR RECOMENDATION\n");
    printf("\t5.\tEXIT\n\n\n");
    printf("choose the number 1 to 6 \n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("\t\tpress any key to continue.........");
        getch();
        system("cls");
        A();
        system("cls");
        goto label;
        break;
    case 2:
        printf("\t\tpress any key to continue.........");
        getch();
        system("cls");
        list();
        system("cls");
        goto label;
        break;
    case 3:
        printf("\t\tpress any key to continue.........");
        getch();
        system("cls");
        search();
        // system("cls");
        goto label;
        break;
    case 4:
        printf("\t\tpress any key to continue.........");
        getch();
        system("cls");
        doctor();
        system("cls");
        goto label;
        break;
    case 5:
        printf("\n");
        printf("Thank You for choosing  us \n\n");
        printf("*****************************************************************************");
        break;
    default:
        printf("you enter incorrect  number");
        break;
    }
}