#include<stdio.h>

int main()
{
    printf("                  FLY SAFE AIRLINE             \n");
    char ch,t,p;
    printf("PRESS 'A' FOR TICKET BOOKING\n");
    printf("PRESS 'B' TO ABOUT THE FLIGHT TIMINGS\n");
    printf("PRESS 'C' TO KNOW ABOUT OUR SERVICES\n");
    printf("PRESS 'D' TO GET ALL UPDATES ON OUR SERVICES\n");
    printf("PRESS 'E' TO TELL US ABOUT YOUR EXPERIENCE\n");

    ch=getchar();

    switch(ch)
    {
    case 'A':
        printf("What kind of ticket you want to book sir?\n");
        printf("CHOOSE A FOR INTERNATIONAL\n");
        printf("CHOOSE B FOR LOCAL\n");

        scanf("\n%c",&t);

        switch(t)
        {
        case 'A':
            printf("YOU HAVE CHOOSEN INTERNATIONAL TICKETS>HOPE YOU ENJOY YOUR TRIP ,SIR!!!\n");
            break;
        case 'B':
            printf("YOU HAVE CHOOSEN LOCAL TICKETS > HOPE THAT YOU ENJOY YOUR TRIP ,SIR!!!\n");
            break;
        }
         break;
    case 'B':
       printf("KNOW ABOUT OUR FLIGHT TIMINGS BY PRESSING A & B.A FOR INTERNATIONAL TIMINGS & B FOR LOCAL FLIGHT TIMINGS\n");
       scanf("\n%c",&p);
       switch(p)
       {
       case 'A':
        printf("NEW YORK:GMT 8:00\n");
        printf("SWITZERLAND:GMT 12:00\n");
        break;
       case 'B':
        printf("ALL LOCAL FLIGHTS : GMT 5:00\n");
        break;
       }
       break;
    case 'C':
        printf("FLY SAFE IS THE FIRST HIGHLY EQUIPPED AND TECHNOLOGICALY ADVANCED AIRPLANE SERVICE.WEOFFER FAST AND SECURE FLIGHTS ALL OVER THE WORLD>EVEN IN THE LOCAL GROUNDS AND INTERNATIONAL FIELDS FLY SAFE IS DOING EXRTRAORDINARILY GREAT WITH GREAT HONOUR AND A GREAT CUSTOMERS LOVES.\n");
        break;
    case 'D':
        printf("UPDATES ARE DONE ON THE ONLINE TICKET BOOKING >NOW ITS EVEN MORE FASTER THEN THE PREVIOUS VERSIONS\n");
        break;
    case 'E':
        printf("WRITE US ABOUT YOUR EXPERIENCE ON WWW.FLYSAFE.ORG\n");
        break;
    }
}
