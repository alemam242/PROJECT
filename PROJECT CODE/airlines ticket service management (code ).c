#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX 100
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32

FILE*fileMC;
FILE*tv;
FILE*tp;
FILE*fileM;
FILE*fileMd;
FILE*PP;
FILE*MM;
FILE*tc;
FILE*payment;
FILE*f;
FILE*adf;
FILE*Pf;
FILE*fr;
FILE*frc;
FILE*Pc;
FILE*frca;
FILE*Pca;
FILE*fpp;
int tt;
struct roos
{
    int rd;
    int rt;
    int rc;
    int rp;
    int rpr;
    int rf;
    int rfc;
    int rpp;
} rrt[MAX];
struct cha
{
    int cnn;
    int cfc;
    int cpr;
    int ccom;

} chaet[MAX];
struct rcoro
{
    int ncar;
    int ndc;
    int npr;

} camg[MAX];
struct a
{
    int a;
    int b;
    int c;

} ss[MAX];
struct ttr
{
    char fn1[10];
    char ln1[10];
    char pass1[13];
    char gen1[10];
    int a;

    char fn2[10];
    char ln2[10];
    char pass2[13];
    char gen2[10];
    int b;

    char fn3[10];
    char ln3[10];
    char pass3[13];
    char gen3[10];
    int c;

    char mail[30];
    int rr;
    int HMT;

    char fnc[10];
    char lnc[10];
    char passc[13];
    char genc[10];
    char mailc[30];
    int ccc;

    int st;
    int hmh;
    char piac[15];

    char ffn[30];
    char fln[30];
    char fgen[30];
    char fmail[30];
    char rfn[30];
    char rln[30];
    char rgen[30];
    char rmail[30];
    char ty[30];
    int carcs;
    int dist;
    int wtt;
    char fro[10];
    char oto[10];

} tx[MAX];
struct passenger
{
    char fn[10];
    char ln[10];
    char pass[13];
    char gen[10];
} a[MAX];
struct loginsystem
{
    char urfn[20];
    char urln[20];
    char urgender[20];
    int urday;
    int urmonth;
    int uryear;
    char urmail[30];
    char userr[50];
    char passr[20];
    char cor[20];

} sr[MAX];
struct admloginsystem
{
    char adfn[20];
    char adln[20];
    char adgender[20];
    int adday;
    int admonth;
    int adyear;
    char admail[30];
    char aduser[50];
    char adpass[20];
} v;
struct default1
{
    int company;
    int patime;
    int pafood;
    int pafaci;
    int padestin;
    int paroot;
    int pplane;
    int chpna;
    int chfaci;
    int crcmc;
    int ccde;
} def;
struct add
{
    char plane[45];
    char comn[30];
    char time[10];
    char food[100];
    char faci[100];
    char destin[40];
    char cname[30];
    char cfaci[50];
    char crcm[30];
    char crde[15];
} b[MAX];
struct root
{
    int planep;
    char pname[30];
    char comnp[30];
    char timep[10];
    int pricep;
    char foodp[100];
    char facip[100];
    char destinp[40];
} c[MAX];
struct charter
{
    char chname[30];
    char chfaci[50];
    int chprice;
    char ccp[40];

} d[MAX];
struct paymentbnr
{
    char num[20];
    char pass[10];
    int tk;
} z;
struct cargooo
{
    char ccrcm[30];
    char crdec[20];
    int ccrcprice;
} e[MAX];

void login();
void registr();
void forgot();
void user();

void adlogin();
void adregistr();
void adforgot();
void ad_pro_info();
void adsetting();
void adgeneral();
void adchng_user();
void adchng_pass();

void animation_rocket();

int pay(int t);
int bkash(int t);
int nagad(int t);
int rocket(int t);

savingfile(char TI[],char DT[],char com[],char PA[],int A[],int j,int tk,int k,char FD[],char FC[]);
savingcharter(char NM[],char FC[],char CM[],int P,int H,char DI[],int FT);
savecargo(char CC[],int p,int DE,char F[],char TO[]);
savetic();

viewfile();
viweing();
viewfilech();
viewfilecc();
viewfilerr();
viewfilecrrg();
viewfilecrr();
viewfile22();
viewfile2();
viewtic();
vtc();

B737_8(char TI[],char DT[],char com[],char FD[],char FC[],int tk);
B777_3(char TI[],char DT[],char com[],char FD[],char FC[],int tk);
B787_8(char TI[],char DT[],char com[],char FD[],char FC[],int tk);
B787_9(char TI[],char DT[],char com[],char FD[],char FC[],int tk);
BD8Q_4(char TI[],char DT[],char com[],char FD[],char FC[],int tk);

home();
intro();
aboutus();

adminp();
admin();

vplane();
cplane(char TI[],char DT[],char com[],char FD[],char FC[],int n,int tk);

basic();
roots();
charterf();
cargof();

passenger();
charter();
cargo();

rrot();
chatt();
charr();
ori();
pro();
mro();
mac();
ddd();

adding();
addcom();
addtime();
addfood();
addroot();
addfaci();
addcc();
adddis();
addCF();
addfCTF();

editing();
editcompany();
edittime();
editfood();
editfaci();
editcfaci();
editcargocompany();
editroots();
editcf();
editDES();

tupgr();
tdel();
deleteaccount();

reade();
writ(int A[]);

singview();
singpass();
singchar();
singcar();

singpass1();
singchar1();
singcar1();

adpro();
uspro();
srcpro();
pb_pro_info();
format();

int main ()
{
    int i,j;
    system("COLOR A");
    intro();
    printf("\n\n\n\n\n\n\n\n\n\n\t                     LOADING...                           \n\t\t\t\t");
    for(i=0; i<10; i++)
    {
        if(i==3||i==5||i==9)
        {
            printf("%c",178);
            usleep(900000);
        }
        else
        {
            printf("%c",178);
        usleep(40000);
        }

    }
    sleep(1);
    for(j=0; j<42; j++)
    {
        printf("%c",178);
        usleep(45000);
    }
    viewfile22();
    roots();
    charterf();
    cargof();
    animation_rocket();
    home();
}


void animation_rocket()
{
    system("CLS");
    char rocket[] =
        "\t\t\t\t\t\t      ^\n\t\t\t\t\t\t\
     /^\\\n\t\t\t\t\t\t\
     |-|\n\t\t\t\t\t\t\
     | |\n\t\t\t\t\t\t\
     |A|\n\t\t\t\t\t\t\
    /|A|\\\n\t\t\t\t\t\t\
   / |F| \\\n\t\t\t\t\t\t\
 /|  | |  |\\\n\t\t\t\t\t\t\
  /  | |  \\\n\t\t\t\t\t\t\
    /| |\\\n\t\t\t\t\t\t\
   -_\"\"\"_-\n\t\t\t\t\t\t\
   AIRLINES\n\
  ";

    int start=0;
    int animation=0;

    for(start=0; start<40; start++)
    {
        printf("\n");
    }
    printf("%s", rocket);
    for(animation=0; animation<60; animation++)
    {
        usleep(40000);
        printf("\n");
    }
}
void registr()
{
    system("COLOR A");
    system("CLS");
    char cp[20];
    int day,month,year;
    f=fopen("info.txt","a");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        PUBLIC SIGNUP                                  \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    for(int i=0; i<1; i++)
    {
        printf("\n\n\t\t\t\t\tFIRST NAME       : ");
        scanf("%s",&sr[i].urfn);
        printf("\n\t\t\t\t\tLAST NAME        : ");
        scanf("%s",&sr[i].urln);
        printf("\n\t\t\t\t\tGENDER           : ");
        scanf("%s",&sr[i].urgender);
        printf("\n\t\t\t\t\tBirth DD-MM-YYYY : ");
        scanf("%d%d%d",&sr[i].urday,&sr[i].urmonth,&sr[i].uryear);
        if(sr[i].urday<=31 && sr[i].urmonth <= 12 && 1900<= sr[i].uryear && sr[i].uryear < 2021 )
        {
            printf("\n\t\t\t\t\tEMAIL:");
            scanf("%s",&sr[i].urmail);
            printf("\n\t\t\t\t\tSET USERNAME     : ");
            scanf("%s",&sr[i].userr);
            printf("\n\t\t\t\t\tSET PASSWORD     : ");
            scanf("%s",&sr[i].passr);
            printf("\n\t\t\t\t\tRE-TYPE PASSWORD : ");
            scanf("%s",&cp);
            printf("\n\t\t\t\t\tSET SECRET CODE  : ");
            scanf("%s",&sr[i].cor);

            if(strcmp(sr[i].passr,cp)==0)
            {
                printf("\n\t\t\t\t\tREGISTRATION SUCCESSFUL...\n");
                fwrite(&sr[i],sizeof(sr[i]),1,f);
                fclose(f);
                getch();
                login();
            }

            else
            {
                printf("\n\t\t\t\t\tPASSWORD DOESN'T MATCH ..\n\n\t\t\t\t\t TRY AGAIN ......\n");
                getch();
                registr();
            }
        }
        else
        {
            printf("\n\t\t\t\tINVALID D.O.B INFORMATION \n\n\t\t\t\t\tTRY AGAIN...");
            getch();
            registr();
        }
    }
}
void login()
{
    system("CLS");
    system("COLOR E");
    char ch;
    char username[50];
    char passward[20];
    char code[20];
    int k=0;
    f=fopen("info.txt","r");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        PUBLIC LOGIN                                  \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tUSERNAME : ");
    scanf("%s",&username);
    printf("\n\t\t\t\t\tPASSWORD : ");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            passward[k]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(k>0)
            {
                k--;
                printf("\b \b");
            }
        }
        else if(ch==TAB||ch==SPACE)
        {
            continue;
        }
        else
        {
            passward[k]=ch;
            k++;
            printf("*");
        }
    }
    printf("\n\n\t\t\t\t\tCODE : ");
    scanf("%s",&code);
    for(int i=0; i<100; i++)
    {
        fread(&sr[i],sizeof(sr[i]),1,f);
        sr[i].urfn;
        sr[i].urln;
        sr[i].urgender;
        sr[i].urday;
        sr[i].urmonth;
        sr[i].uryear;
        sr[i].urmail;
        sr[i].userr;
        sr[i].passr;
        sr[i].cor;
    }
    for(int i=0; i<100; i++)
    {
        while(strcmp(sr[i].cor,code)==0)
        {
            while((strcmp(passward,sr[i].passr)==0)&&(strcmp(username,sr[i].userr)==0))
            {
                system("CLS");
                printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
                for(int i=0; i<40; i++)
                {
                    printf("_");
                    usleep(40);
                }
                tt=i;
                user();
            }
            printf("\n\t\t\t\t\tINVALID INFORMATION!!\n\n\t\t\t\t\tPLEASE SIGNUP FIRST\n");
            getch();
            system("CLS");
            home();
        }
    }
    printf("\n\t\t\t\t\tINVALID INFORMATION!!\n\n\t\t\t\t\tPLEASE SIGNUP FIRST\n");
    getch();
    system("CLS");
    home();
    fclose(f);
}
void forgot()
{

    system("CLS");
    system("COLOR C");
    int ch;
    char name[50];
    char pas[20];
    char code[20];
    f=fopen("info.txt","r");

    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                         RESET PANEL                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\t 1.SEARCH ACCOUNT BY USERNAME\n");
    printf("\n\t\t\t\t\t 2.SEARCH ACCOUNT BY PASSWORD\n");
    printf("\n\t\t\t\t\t 3.MAIN MENU\n\n");
    printf("\t\t\t\t\t ENTER YOUR CHOICE:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");


        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                         RESET PANEL                                 \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\tENTER YOUR USERNAME:");
        scanf("%s",&name);
        printf("\n\n\t\t\t\tENTER YOUR SECRET CODE:");
        scanf("%s",&code);
        int ii,jj,ll,mm;

        for(ii=0; ii<jj; ii++)
        {
            ll=rand()%1000;
            printf("\n\n\t\t\t\tPROVE THAT YOU NOT A ROBOT ....\n\n\t\t\t\tENTER THE VIEWING CODE\n");
            sleep(1);
            printf("\t\t\t\t\t Code is: %d \n\n\t\t\t\t\t >>",ll);
            sleep(1);
            scanf("%d",&mm);
            if(ll==mm)
            {
                printf("\n\t\t\t\t WAIT A MOMENT........\n\n");
                sleep(1);

                for(int i=1; i<100; i++)
                {
                    fread(&sr[i],sizeof(sr[i]),2,f);
                    sr[i].userr;
                    sr[i].passr;
                    sr[i].cor;

                }

                for(int i=1; i<100; i++)
                {
                    while(strcmp(sr[i].cor,code)==0)
                    {
                        while(strcmp(name,sr[i].userr)==0)
                        {
                            printf("\t\t\t\tFOUND YOUR ACCOUNT\n\n");
                            sleep(1);
                            printf("\t\t\t\tYOUR PASSWORD IS: %s", sr[i].passr);
                            getch();
                            login();
                        }
                        printf("\n\t\t\t\t\tINVALID INFORMATION!!\n\n\t\t\t\t\tPLEASE SIGNUP FIRST\n");
                        getch();
                        system("CLS");
                        forgot();
                    }

                }
                printf("\n\t\t\t\t\tINVALID INFORMATION!!\n\n\t\t\t\t\tPLEASE SIGNUP FIRST\n");
                getch();
                system("CLS");
                forgot();
                fclose(f);
            }
            else
            {
                printf("\n\t\t\t\tINVALID CODE , TRY AGAIN\n ");
                jj++;
            }

        }

        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(20);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                         RESET PANEL                                 \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\t ENTER YOUR PASSWORD:");
        scanf("%s",&pas);
        printf("\n\n\t\t\t\tENTER YOUR SECRET CODE:");
        scanf("%s",&code);
        int iii,jjj,lll,mmm;

        for(iii=0; iii<jjj; iii++)
        {
            lll=rand()%1000;
            printf("\n\n\t\t\t\tPROVE THAT YOU NOT A ROBOT ....\n\n\t\t\t\tENTER THE VIEWING CODE\n");
            sleep(1);
            printf("\t\t\t\t\t Code is: %d \n\n\t\t\t\t\t >>",lll);
            scanf("%d",&mmm);
            if(lll==mmm)
            {
                printf("\n\t\t\t\t WAIT A MOMENT.......\n\n");
                sleep(1);
                for(int i=1; i<100; i++)
                {
                    fread(&sr[i],sizeof(sr[i]),2,f);
                    sr[i].userr;
                    sr[i].passr;
                    sr[i].cor;
                }
                for(int i=1; i<100; i++)
                {
                    while(strcmp(sr[i].cor,code)==0)
                    {
                        while(strcmp(pas,sr[i].passr)==0)
                        {
                            printf("\t\t\t\tFOUND YOUR ACCOUNT\n\n");
                            sleep(1);
                            printf("\t\t\t\tYOUR USERNAME IS:%s", sr[i].userr);
                            getch();
                            login();
                        }
                        printf("\n\t\t\t\t\tINVALID INFORMATION!!\n\n\t\t\t\t\tPLEASE SIGNUP FIRST\n");
                        getch();
                        system("CLS");
                        forgot();
                    }

                }
                printf("\n\t\t\t\t\tINVALID INFORMATION!!\n\n\t\t\t\t\tPLEASE SIGNUP FIRST\n");
                getch();
                system("CLS");
                forgot();
                fclose(f);
            }
            else
            {
                printf("\n\t\t\t\tINVALID CODE , TRY AGAIN\n ");
                jjj++;
            }
        }
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        home();
        break;
    default:
        printf("\n\n\t\t\t\t\t WRONG CHOICE !!!");
        getch();
        system("CLS");
        forgot();
        break;
    }
}
void user()
{
    roots();
    system("CLS");
    int d,DD;
    printf("                                        '''''''''''''''''''''''''''''''                       \n");
    printf("                                                 AAF AIRLINES                                 \n");
    printf("                                        '''''''''''''''''''''''''''''''                       \n\n\n");
    printf("\t\t\t\t\t 1.PURCHASE TICKET\n");
    printf("\t\t\t\t\t 2.VIEW TICKET\n");
    printf("\t\t\t\t\t 3.UPGRADE TICKET\n");
    printf("\t\t\t\t\t 4.DELETE TICKET\n");
    printf("\t\t\t\t\t 5.USER PROFILE\n");
    printf("\t\t\t\t\t 6.USER PROFILE SETTINGS\n");
    printf("\t\t\t\t\t 7.ABOUT US\n");
    printf("\t\t\t\t\t 8.LOGOUT\n");
    printf("\t\t\t\t\t 9.EXIT\n");
    printf("\n\t\t\t\t\t ENTER YOUR CHOICE: ");
    scanf("%d",&d);
    switch(d)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        vplane();
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        singview();
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        tupgr();
        break;
    case 4:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        tdel();
        break;
    case 5:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        uspro();
        break;
    case 6:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        char anu[20];
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\tENTER SECRET CODE : ");
        scanf("%s",&anu);
        if(strcmp(sr[tt].cor,anu)==0)
        {
            pb_pro_info();
        }
        getch();
        user();
        break;
    case 7:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        aboutus();
        getch();
        user();
        break;
    case 8:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        home();
        break;
    case 9:
        system("CLS");
        printf("\n\n\n\t\t\t\t\tTHANKS FOR USING OUR SERVICE....");
        getch();
        exit(0);
        break;
    default:
        printf("\n\n\t\t\t\t\tWRONG CHOICE!!\n\n\t\t\t\t\tENTER CORRECT OPTION..\n");
        getch();
        user();
        break;
    }
}


void adregistr()
{
    system("COLOR A");
    system("CLS");
    char rp[20];
    int day,month,year,i,j=1,m,l;
    adf=fopen("adinfo.txt","w");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        ADMIN SIGNUP                                  \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tFIRST NAME     : ");
    scanf("%s",&v.adfn);
    printf("\n\t\t\t\t\tLAST NAME        : ");
    scanf("%s",&v.adln);
    printf("\n\t\t\t\t\tGENDER           : ");
    scanf("%s",&v.adgender);
    printf("\n\t\t\t\t\tBIRTH DD-MM-YYYY :");
    scanf("%d%d%d",&v.adday,&v.admonth,&v.adyear);
    if(v.adday<=31 && v.admonth <= 12 && v.adyear >= 1900 && v.adyear < 2021)
    {
        printf("\n\t\t\t\t\tEMAIL             : ");
        scanf("%s",&v.admail);
        printf("\n\t\t\t\t\tSET USERNAME      : ");
        scanf("%s",&v.aduser);
        printf("\n\t\t\t\t\tSET PASSWORD      : ");
        scanf("%s",&v.adpass);
        printf("\n\t\t\t\t\tRE-TYPE PASSWORD  : ");
        scanf("%s",&rp);
        fwrite(&v,sizeof(v),1,adf);
        fclose(adf);
        if(strcmp(rp,v.adpass)==0)
        {

            system("CLS");
            printf("                                        '''''''''''''''''''''''''''''                       \n");
            printf("                                              HUMAN VERIFICATION                               \n");
            printf("                                        '''''''''''''''''''''''''''''                       \n\n");
            l=rand()%100;
            printf("\n\t\t\t\tPROVE THAT YOU ARE NOT A ROBOT\n\n\t\t\t\t ENTER THE VIEWING CODE ....\n\n");
            sleep(1);
            printf("\t\t\t\t\t CODE IS : %d",l);
            printf("\n\n\t\t\t\tENTER THE VIEWING  CODE : ");
            scanf("%d",&m);
            if(l==m)
            {
                printf("\n\n\t\t\t\t\tREGISTRATION SUCCESSFUL...\n");
                j=1;
                getch();
                adlogin();
            }
            else
            {
                printf("\n\t\t\t\tINVALID CODE , TRY AGAIN\n ");
                adregistr();
            }

        }
        else
        {
            printf("\n\t\t\t\tPASSWORD DOES'T MATCH .\n\n\t\t\t\t\tTRY AGAIN...");
            getch();
            adregistr();

        }
    }
    else
    {
        printf("\n\t\t\t\tINVALID D.O.B INFORMATION \n\n\t\t\t\t\tTRY AGAIN...");
        getch();
        adregistr();

    }
}
void adlogin()
{
    system("CLS");
    system("COLOR E");
    char ch;
    int i,j,l,m,k=0;
    char username[50];
    char passward[20];
    adf=fopen("adinfo.txt","r");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                 ADMIN LOGIN                                \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tUSERNAME : ");
    scanf("%s", username);
    printf("\n\t\t\t\t\tPASSWORD : ");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            passward[k]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(k>0)
            {
                k--;
                printf("\b \b");
            }
        }
        else if(ch==TAB||ch==SPACE)
        {
            continue;
        }
        else
        {
            passward[k]=ch;
            k++;
            printf("*");
        }
    }
    fread(&v,sizeof(v),1,adf);
    if((strcmp(username,v.aduser)==0)&&(strcmp(passward,v.adpass)==0))
    {
        for(i=0; i<j; i++)
        {
            system("CLS");
            printf("                                        '''''''''''''''''''''''''''''                       \n");
            printf("                                             HUMAN VERIFICATION                               \n");
            printf("                                        '''''''''''''''''''''''''''''                       \n\n");
            l=rand()%1000;
            printf("\n\t\t\t\tPROVE THAT YOU ARE NOT A ROBOT\n\n\t\t\t\t ENTER THE VIEWING CODE....\n\n");
            sleep(1);
            printf("\t\t\t\t\t Code is: %d",l);
            printf("\n\n\t\t\t\tENTER CODE: ");
            scanf("%d",&m);
            if(l==m)
            {
                system("CLS");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("                                        '''''''''''''''''''''''''''''''                       \n");
                printf("                                            WELCOME TO ADMIN PANEL                                \n");
                printf("                                        '''''''''''''''''''''''''''''''                       \n\n");
                j=1;
                getch();
                adminp();
            }
            else
            {
                printf("\n\t\t\t\tINVALID CODE , TRY AGAIN\n ");
                j++;
            }
        }
        getch();
        system("CLS");
        adminp();
    }
    else if((strcmp(username,v.aduser)!=0)&&(strcmp(passward,v.adpass)==0))
    {
        printf("\n\t\t\t\t\tINVALID USERNAME!!!");
        getch();
        system("CLS");
        admin();
    }
    else if((strcmp(username,v.aduser)==0)&&(strcmp(passward,v.adpass)!=0))
    {
        printf("\n\t\t\t\t\tINVALID PASSWORD!!!");
        getch();
        system("CLS");
        admin();
    }
    else
    {
        printf("\n\n\t\t\t\t\tINVALID USERNAME AND PASSWORD!!\n\n\t\t\t\t\tPLEASE SIGNUP\n");
        getch();
        system("CLS");
        admin();
    }
    fclose(adf);
}
void adforgot()
{
    system("COLOR C");
    system("CLS");
    int ch;
    char name[50];
    char pas[20];
    adf=fopen("adinfo.txt","r");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                      ADMIN RESET PANEL                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\t 1.SEARCH ACCOUNT BY USERNAME\n");
    printf("\n\t\t\t\t\t 2.SEARCH ACCOUNT BY PASSWORD\n");
    printf("\n\t\t\t\t\t 3.PREVIOUS PAGE \n\n");
    printf("\t\t\t\t\t ENTER YOUR CHOICE : ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                      ADMIN RESET PANEL                                 \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\tENTER YOUR USERNAME :");
        scanf("%s",&name);
        printf("\n\t\t\t\t WAIT A MOMENT........\n\n");
        sleep(1);
        fread(&v,sizeof(v),1,adf);
        if((strcmp(name,v.aduser)==0))
        {
            printf("\t\t\t\tFOUND YOUR ACCOUNT \n\n");
            sleep(1);
            printf("\t\t\t\tYOUR PASSWORD IS:%s",v.adpass);
            getch();
            adlogin();
        }
        else
        {
            printf("\t\t\t\tINVALID USERNAME..\n\t\t\t\tTRY AGAIN");
            getch();
            adforgot();
        }
        fclose(adf);
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                      ADMIN RESET PANEL                                 \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\t ENTER YOUR PASSWORD :");
        scanf("%s",&pas);
        printf("\n\t\t\t\t WAIT A MOMENT.......\n\n");
        sleep(1);
        fread(&v,sizeof(v),1,adf);
        if((strcmp(pas,v.adpass)==0))
        {
            printf("\t\t\t\tFOUND YOUR ACCOUNT\n\n");
            sleep(1);
            printf("\t\t\t\tYOUR USERNAME IS :%s",v.aduser);
            getch();
            adlogin();
        }
        else
        {
            printf("\t\t\t\tINVALID PASSWORD ..\n\t\t\t\tTRY AGAIN");
            getch();
            adforgot();
        }
        fclose(adf);
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        admin();
        break;
    default:
        printf("\n\n\t\t\t\t\t WRONG CHOICE !!!");
        getch();
        system("CLS");
        adforgot();
        break;
    }
}


void adgeneral()
{
    system("CLS");
    int c;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                       GENERAL SETTING                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\t\t\t\t 1. CHANGE USERNAME\n");
    printf("\t\t\t\t 2. CHANGE PASSWORD\n");
    printf("\t\t\t\t 3. DELETE ACCOUNT\n");
    printf("\t\t\t\t 4. PREVIOUS PAGE\n");
    printf("\t\t\t\t 5. MAIN MENU\n");
    printf("\t\t\t\t 6. EXIT\n\n");
    printf("\t\t\t\t ENTER CHOICE : ");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        adchng_user();
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int l=0; l<40; l++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        adchng_pass();
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        deleteaccount();
        break;
    case 4:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        adpro();
        break;
    case 5:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int k=0; k<40; k++)
        {
            printf("_");
            usleep(35);
        }
        system("CLS");
        adminp();
        break;
    case 6:
        exit(0);
        break;
    default:
        printf("\n\t\t\t\t Wrong Choice!! Try Again...");
        getch();
        system("CLS");
        adgeneral();
        break;
    }
}
void ad_pro_info()
{
    system("CLS");
    int c;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                             CHANGE PROFILE INFO                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\t\t\t\t 1. CHANGE NAME\n");
    printf("\t\t\t\t 2. CHANGE GENDER\n");
    printf("\t\t\t\t 3. CHANGE BIRTH INFO\n");
    printf("\t\t\t\t 4. CHANGE MAIL\n");
    printf("\t\t\t\t 5. PREVIOUS PAGE\n");
    printf("\t\t\t\t 6. EXIT\n");
    printf("\n\t\t\t\t ENTER CHOICE: ");
    scanf("%d", &c);
    if(c==1)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        adf=fopen("adinfo.txt","w");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       CHANGE NAME                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\t\tSET FIRST NAME:");
        scanf("%s",&v.adfn);
        printf("\n\t\t\t\t\tSET LAST NAME:");
        scanf("%s",&v.adln);
        fwrite(&v, sizeof(v),1,adf);
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   . ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". \b\b\b\b");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t____ NAME CHANGED SUCCESSFULLY ____");
        fclose(adf);
        getch();
        system("CLS");
        ad_pro_info();
    }
    else if(c==2)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        adf=fopen("adinfo.txt","w");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       CHANGE GENDER                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\t\tSET GENDER:");
        scanf("%s",&v.adgender);
        fwrite(&v, sizeof(v),1,adf);
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   . ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". \b\b\b\b");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t____ GENDER CHANGED SUCCESSFULLY ____");
        fclose(adf);
        getch();
        system("CLS");
        ad_pro_info();
    }
    else if(c==3)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        adf=fopen("adinfo.txt","w");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                      CHANGE BIRTH INFO                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\tSET BIRTH DAY-MONTH-YEAR:");
        scanf(" %d%d%d",&v.adday,&v.admonth,&v.adyear);
        fwrite(&v, sizeof(v),1,adf);
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   . ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". \b\b\b\b");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t____ BIRTH DATE CHANGED SUCCESSFULLY ____");
        fclose(adf);
        getch();
        system("CLS");
        ad_pro_info();
    }
    else if(c==4)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        adf=fopen("adinfo.txt","w");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       CHANGE MAIL                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\t\tSET NEW MAIL:");
        scanf("%s",&v.admail);
        fwrite(&v, sizeof(v),1,adf);
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   . ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". \b\b\b\b");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t____ MAIL CHANGED SUCCESSFULLY ____");
        fclose(adf);
        getch();
        system("CLS");
        ad_pro_info();
    }
    else if(c==5)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        adpro();
    }
    else if(c==6)
    {
        exit(0);
    }
    else
    {
        printf("\n\n\t\t\t\t\tWRONG CHOICE!!\n\n\t\t\t\t\tTRY AGAIN");
        getch();
        ad_pro_info();
    }
}
void adchng_user()
{
    system("CLS");
    char u[20], p[10], ch;
    int i=0;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                       VERIFICATION                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tOLD USERNAME : ");
    scanf("%s",&u);
    printf("\n\t\t\t\t\tOLD PASSWORD : ");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            p[i]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if(ch==TAB||ch==SPACE)
        {
            continue;
        }
        else
        {
            p[i]=ch;
            i++;
            printf("*");
        }
    }
    adf=fopen("adinfo.txt","r");
    fread(&v, sizeof(v), 1, adf);
    if(strcmp(u,v.aduser)==0 && strcmp(p,v.adpass)==0)
    {
        system("CLS");
        fclose(adf);
        adf=fopen("adinfo.txt","w");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       CHANGE USERNAME                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\t\tSET NEW USER NAME:");
        scanf("%s",&v.aduser);
        fwrite(&v, sizeof(v),1,adf);
        system("CLS");
            system("COLOR B");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ");
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
            system("CLS");
            system("COLOR E");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
            for(int i=0; i<15; i++)
            {
                printf(". \b\b\b\b");
                usleep(40000);
            }
            system("CLS");
            system("COLOR C");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ");
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t____ USERNAME CHANGE SUCCESSFULLY ____");
        fclose(adf);
        getch();
        system("CLS");
        adgeneral();
    }
    else
    {
        printf("\n\n\t\t\t\tINVALID USERNAME OR PASSWARD");
        getch();
        system("CLS");
        printf("\t                               ''''''''''''''''''''''''''''                       \n");
        printf("\t                                        ATTENTION                               \n");
        printf("\t                               ''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\tWould you like to go to Forgot Panel...?");
        printf("\n\n\t\t\t\tPress 'ENTER' to go to Forgot Panel\n\n\t\t\t\tPress 'BACKSPACE' for try again");
        char e;
        e=getch();
        if(e==ENTER)
        {
            adforgot();
        }
        else if(e==BKSP)
        {
            adchng_user();
        }
        else
        {
            printf("\n\n\n\t\t\t\t\t Wrong choice!!!\n\n\t\t\t\tTry Again");
            getch();
            adchng_user();
        }
    }
}
void adchng_pass()
{
    system("CLS");
    char u[20], p[10], ch;
    int i=0;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                       VERIFICATION                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tOLD USERNAME : ");
    scanf("%s", u);
    printf("\n\t\t\t\t\tOLD PASSWORD : ");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            p[i]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if(ch==TAB||ch==SPACE)
        {
            continue;
        }
        else
        {
            p[i]=ch;
            i++;
            printf("*");
        }
    }
    adf=fopen("adinfo.txt","r");
    fread(&v, sizeof(v), 1, adf);
    if(strcmp(u,v.aduser)==0 && strcmp(p,v.adpass)==0)
    {
        system("CLS");
        fclose(adf);
        adf=fopen("adinfo.txt","w");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       CHANGE PASSWORD                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\t\tNEW PASSWORD : ");
        scanf("%s",&v.adpass);
        fwrite(&v, sizeof(v),1,adf);
        system("CLS");
            system("COLOR B");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ");
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
            system("CLS");
            system("COLOR E");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
            for(int i=0; i<15; i++)
            {
                printf(". \b\b\b\b");
                usleep(40000);
            }
            system("CLS");
            system("COLOR C");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ");
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t____ PASSWORD CHANGE SUCCESSFULLY ____");
        fclose(adf);
        getch();
        system("CLS");
        adgeneral();
    }
    else
    {
        printf("\n\n\t\t\t\tINVALID USERNAME OR PASSWARD");
        getch();
        system("CLS");
        printf("\t                               ''''''''''''''''''''''''''''                       \n");
        printf("\t                                        ATTENTION                               \n");
        printf("\t                               ''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\tWould you like to go to Forgot Panel...?");
        printf("\n\n\t\t\t\tPress 'ENTER' to go to Forgot Panel\n\n\t\t\t\tPress 'BACKSPACE' for try again");
        char e;
        e=getch();
        if(e==ENTER)
        {
            adforgot();
        }
        else if(e==BKSP)
        {
            adchng_pass();
        }
        else
        {
            printf("\n\n\n\t\t\t\t\t Wrong choice!!!\n\n\t\t\t\tTry Again");
            getch();
            adchng_pass();
        }
    }
}


int pay(int t)
{
    system("CLS");
    int v;
    system("COLOR B");
    int chose;
    printf("                                      ***************************                                   \n");
    printf("                                               PAYMENT                                                 \n");
    printf("                                      ***************************                                   \n\n");
    printf("\n\n\t\t\t\t\t1. BKASH\n\n");
    printf("\t\t\t\t\t2. NAGAD\n\n");
    printf("\t\t\t\t\t3. ROCKET\n\n");
    printf("\t\t\t\t\tENTER YOUR CHOICE : ");
    scanf("%d", &chose);
    switch(chose)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        v=bkash(t);
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        v=nagad(t);
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        v=rocket(t);
        break;
    default:
        printf("\t\t\t\t\tWRONG CHOICE!!!!\n\n");
        pay(t);
        break;
    }
}
int bkash(int t)
{
    int v;
    system("COLOR E");
    system("CLS");
    char p[10],ch;
    int i=0,k=0;
    payment=fopen("payment.txt","w");
    printf("                                 ********************************                                   \n");
    printf("                                         WELCOME TO BKASH                                                \n");
    printf("                                 ********************************                                   \n\n\n");
    printf("\n\n\t\t\t\t\tENTER YOUR BKASH NUMBER : ");
    scanf("%s",&z.num);
    printf("\n\t\t\t\t\tENTER YOUR BKASH PIN      : ");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            z.pass[k]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(k>0)
            {
                k--;
                printf("\b \b");
            }
        }
        else if(ch==TAB||ch==SPACE)
        {
            continue;
        }
        else
        {
            z.pass[k]=ch;
            k++;
            printf("*");
        }
    }
    fwrite(&z,sizeof(z),1,payment);
    fclose(payment);
    system("CLS");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
    for(int i=0; i<40; i++)
    {
        printf("_");
        usleep(40);
    }
    system("CLS");
    printf("                                 *******************************                                   \n");
    printf("                                          BKASH PAYBILL                                                \n");
    printf("                                 *******************************                                   \n\n");
    printf("\t\t\t\t\t\n\n");
    printf("\t\t\t\t\tYOUR BILL    : %d TK\n\n\t\t\t\t\tENTER AMOUNT :",t);
    scanf("%d",&z.tk);
    if(z.tk == t)
    {
        printf("\n\t\t\t\t\tENTER BKASH PIN FOR CONFORM :");
        while(1)
        {
            ch=getch();
            if(ch==ENTER)
            {
                p[i]='\0';
                break;
            }
            else if(ch==BKSP)
            {
                if(i>0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            else if(ch==TAB||ch==SPACE)
            {
                continue;
            }
            else
            {
                p[i]=ch;
                i++;
                printf("*");
            }
        }
        fread(&z,sizeof(z),1,payment);
        if(strcmp(p,z.pass)==0)
        {
            system("CLS");
            system("COLOR B");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ");
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
            system("CLS");
            system("COLOR E");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
            for(int i=0; i<15; i++)
            {
                printf(". \b\b\b\b");
                usleep(40000);
            }
            system("CLS");
            system("COLOR C");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ");
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
            system("CLS");
            printf("\n\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            printf("\n\t\t\t\t\t  YOUR  %d TK SENT SUCCESSFUL    ", z.tk);
            printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            getch();
            v=1;
        }
        else
        {
            printf("\n\t\t\t\t\tWRONG PASSWORD!!\n");
            getch();
            v=bkash(t);
        }
    }
    else
    {
        printf("\n\t\t\t\t\tINVALID AMMOUNT!!\n");
        getch();
        v=bkash(t);
    }
    return v;
    fclose(payment);
}
int nagad(int t)
{
    int v;
    system("COLOR C");
    system("CLS");
    char ps[10],ch;
    int i=0,k=0;
    payment=fopen("payment.txt","w");
    printf("                                 *************************************                                   \n");
    printf("                                           WELCOME TO NAGAD                                               \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\tENTER YOUR NAGAD NUMBER : ");
    scanf("%s", z.num);
    printf("\n\t\t\t\t\tENTER YOUR NAGAD PIN    : ");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            z.pass[k]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(k>0)
            {
                k--;
                printf("\b \b");
            }
        }
        else if(ch==TAB||ch==SPACE)
        {
            continue;
        }
        else
        {
            z.pass[k]=ch;
            k++;
            printf("*");
        }
    }
    fwrite(&z,sizeof(z),1,payment);
    fclose(payment);
    system("CLS");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
    for(int i=0; i<40; i++)
    {
        printf("_");
        usleep(40);
    }
    system("CLS");
    printf("                                 *************************************                                   \n");
    printf("                                            NAGAD PAYBILL                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\t\n\n");
    printf("\t\t\t\t\tYOUR BILL    : %d TK\n\n\t\t\t\t\tENTER AMOUNT :",t);
    scanf("%d",&z.tk);
    if(z.tk == t)
    {
        printf("\n\t\t\t\t\tENTER NAGAD PIN FOR CONFORM :");
        while(1)
        {
            ch=getch();
            if(ch==ENTER)
            {
                ps[i]='\0';
                break;
            }
            else if(ch==BKSP)
            {
                if(i>0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            else if(ch==TAB||ch==SPACE)
            {
                continue;
            }
            else
            {
                ps[i]=ch;
                i++;
                printf("*");
            }
        }
        fread(&z,sizeof(z),1,payment);
        if(strcmp(ps,z.pass)==0)
        {
            system("CLS");
            system("COLOR B");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ");
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
            system("CLS");
            system("COLOR E");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
            for(int i=0; i<15; i++)
            {
                printf(". \b\b\b\b");
                usleep(40000);
            }
            system("CLS");
            system("COLOR C");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ");
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
            system("CLS");
            printf("\n\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            printf("\n\t\t\t\t\t  YOUR  %d TK SENT SUCCESSFUL   ", z.tk);
            printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            getch();
            v=1;
        }
        else
        {
            printf("\n\t\t\t\t\tWRONG PASSWORD!!\n");
            getch();
            v=nagad(t);
        }
    }
    else
    {
        printf("\n\t\t\t\t\tINVALID AMOUNT!!\n");
        getch();
        v=nagad(t);
    }
    return v;
    fclose(payment);
}
int rocket(int t)
{
    int v;
    system("COLOR D");
    system("CLS");
    char ps[10],ch;
    int i=0,k=0;
    payment=fopen("payment.txt","w");
    printf("                                 *************************************                                   \n");
    printf("                                          WELCOME TO ROKET                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\tENTER YOUR ROKET NUMBER : ");
    scanf("%s",&z.num);
    printf("\n\t\t\t\t\tENTER YOUR ROKET PIN    : ");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            z.pass[k]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(k>0)
            {
                k--;
                printf("\b \b");
            }
        }
        else if(ch==TAB||ch==SPACE)
        {
            continue;
        }
        else
        {
            z.pass[k]=ch;
            k++;
            printf("*");
        }
    }
    fwrite(&z,sizeof(z),1,payment);
    fclose(payment);
    system("CLS");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
    for(int i=0; i<40; i++)
    {
        printf("_");
        usleep(40);
    }
    system("CLS");
    printf("                                 *************************************                                   \n");
    printf("                                            ROCKET PAYBILL                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\t\n\n");
    printf("\t\t\t\t\tYOUR BILL    : %d TK\n\n\t\t\t\t\tENTER AMOUNT :",t);
    scanf("%d",&z.tk);
    if(z.tk == t)
    {
        printf("\n\t\t\t\t\tENTER ROKET PIN FOR CONFORM : ");
        while(1)
        {
            ch=getch();
            if(ch==ENTER)
            {
                ps[i]='\0';
                break;
            }
            else if(ch==BKSP)
            {
                if(i>0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            else if(ch==TAB||ch==SPACE)
            {
                continue;
            }
            else
            {
                ps[i]=ch;
                i++;
                printf("*");
            }
        }
        fread(&z,sizeof(z),1,payment);
        if(strcmp(ps,z.pass)==0)
        {
            system("CLS");
            system("COLOR B");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ");
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
            system("CLS");
            system("COLOR E");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
            for(int i=0; i<15; i++)
            {
                printf(". \b\b\b\b");
                usleep(40000);
            }
            system("CLS");
            system("COLOR C");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ");
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
            system("CLS");
            printf("\n\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            printf("\n\t\t\t\t\t  YOUR  %d TK SENT SUCCESSFUL    ", z.tk);
            printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            getch();
            v=1;
        }
        else
        {
            printf("\n\t\t\t\t\tWRONG PASSWORD!!\n");
            getch();
            v=rocket(t);
        }
    }
    else
    {
        printf("\n\t\t\t\t\tINVALID AMMOUNT!!\n");
        getch();
        v=rocket(t);
    }
    return v;
    fclose(payment);
}


savingfile(char TI[],char DT[],char com[],char PA[],int A[],int j,int tk,int k,char FD[],char FC[])
{
    system("CLS");
    char ep[10]="EMPTY";
    char mail[30];
    int v;
    int t;
    int ia;
    int b[5]= {0};
    ia=tx[tt].HMT;
    FILE*file;
    file=fopen("PASSENGER TICKET HISTORY.txt","a");
    writ(A);
    if(file==NULL)
    {
        printf("\t\t\t\tFILE DOES NOT EXIST.");
    }
    else
    {
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                     INPUT PASSENGER INFO                              \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        switch(ia)
        {
        case 1:
            printf("\n\t\t\t\tPASSENGER : 1\n");
            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&tx[tt].fn1);
            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&tx[tt].ln1);
            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&tx[tt].pass1);
            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&tx[tt].gen1);

            strcpy(tx[tt].fn2,ep);
            strcpy(tx[tt].ln2,ep);
            strcpy(tx[tt].pass2,ep);
            strcpy(tx[tt].gen2,ep);

            strcpy(tx[tt].fn3,ep);
            strcpy(tx[tt].ln3,ep);
            strcpy(tx[tt].pass3,ep);
            strcpy(tx[tt].gen3,ep);

            break;
        case 2:
            printf("\n\t\t\t\tPASSENGER : 1\n");
            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&tx[tt].fn1);
            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&tx[tt].ln1);
            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&tx[tt].pass1);
            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&tx[tt].gen1);

            printf("\n\t\t\t\tPASSENGER : 2\n");
            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&tx[tt].fn2);
            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&tx[tt].ln2);
            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&tx[tt].pass2);
            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&tx[tt].gen2);

            strcpy(tx[tt].fn3,ep);
            strcpy(tx[tt].ln3,ep);
            strcpy(tx[tt].pass3,ep);
            strcpy(tx[tt].gen3,ep);

            break;
        case 3:
            printf("\n\t\t\t\tPASSENGER : 1\n");
            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&tx[tt].fn1);
            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&tx[tt].ln1);
            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&tx[tt].pass1);
            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&tx[tt].gen1);

            printf("\n\t\t\t\tPASSENGER : 2\n");
            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&tx[tt].fn2);
            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&tx[tt].ln2);
            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&tx[tt].pass2);
            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&tx[tt].gen2);

            printf("\n\t\t\t\tPASSENGER : 3\n");
            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&tx[tt].fn3);
            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&tx[tt].ln3);
            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&tx[tt].pass3);
            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&tx[tt].gen3);
            break;
        }
        printf("\n\t\t\t\tENTER MAIL ADDRESS :");
        scanf("%s",&tx[tt].mail);
    }
    tx[tt].a=ss[tt].a;
    tx[tt].b=ss[tt].b;
    tx[tt].c=ss[tt].c;

    fprintf(file,"\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    switch(ia)
    {
    case 1:
        fprintf(file,"\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
        fprintf(file,"\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
        fprintf(file,"\t\t\t\tGENDER            : %s \n",tx[tt].gen1);
        break;
    case 2:
        fprintf(file,"\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
        fprintf(file,"\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
        fprintf(file,"\t\t\t\tGENDER            : %s \n",tx[tt].gen1);

        fprintf(file,"\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn2,tx[tt].ln2);
        fprintf(file,"\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass2);
        fprintf(file,"\t\t\t\tGENDER            : %s \n",tx[tt].gen2);
        break;
    case 3:
        fprintf(file,"\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
        fprintf(file,"\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
        fprintf(file,"\t\t\t\tGENDER            : %s \n",tx[tt].gen1);

        fprintf(file,"\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn2,tx[tt].ln2);
        fprintf(file,"\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass2);
        fprintf(file,"\t\t\t\tGENDER            : %s \n",tx[tt].gen2);

        fprintf(file,"\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn3,tx[tt].ln3);
        fprintf(file,"\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass3);
        fprintf(file,"\t\t\t\tGENDER            : %s \n",tx[tt].gen3);
        break;
    }
    fprintf(file,"\n\t\t\t\tMAIL ADDRESS   : %s\n",tx[tt].mail);
    t=tk*j;
    fprintf(file,"\t\t\t\tPRICE          : %d TK\n",t);
    v=pay(t);
    if(v==1)
    {
        fprintf(file,"\t\t\t\tPAYMENT STATUS  : PAID\n\n");
    }
    else
    {
        fprintf(file,"\t\t\t\tPAYMENT STATUS  : UNPAID\n\n");
    }
    fprintf(file,"\t\t\t\tFLIGHT TIME     : %s \n\t\t\t\tDESTINATION     : %s \n\t\t\t\tCOMPANY         : %s \n",TI,DT,com);
    fprintf(file,"\t\t\t\tFLIGHT NAME     : %s\n",PA);
    fprintf(file,"\t\t\t\tNO OF PASSENGER : %d\n",ia);
    fprintf(file,"\t\t\t\tSIT NO          : ");
    for(int i=0; i<ia; i++)
    {
        if(A[i]!=0)
        {
            fprintf(file,"|%d|",A[i]);
        }
    }
    fprintf(file,"\n\n\t\t\t\tTICKET CODE    : %d\n\n",tt);
    printf("\n\t\t\t\t\t\t  DATA SAVED ..    ");
    fclose(file);
    getch();
    system("CLS");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        PASSENGER TICKET                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    switch(ia)
    {
    case 1:
        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen1);
        break;
    case 2:
        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen1);


        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn2,tx[tt].ln2);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass2);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen2);
        break;
    case 3:
        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen1);


        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn2,tx[tt].ln2);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass2);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen2);

        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn3,tx[tt].ln3);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass3);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen3);
        break;
    }
    printf("\n\t\t\t\tMAIL ADDRESS   : %s\n",tx[tt].mail);
    printf("\t\t\t\tPRICE           : %d TK\n",t);
    if(v==1)
    {
        printf("\t\t\t\tPAYMENT STATUS  : PAID\n\n");
    }
    else
    {
        printf("\t\t\t\tPAYMENT STATUS  : UNPAID\n ");
    }
    printf("\n\t\t\t\tFLIGHT TIME     : %s \n\t\t\t\tDESTINATION     : %s \n\t\t\t\tCOMPANY         : %s \n",TI,DT,com);
    printf("\t\t\t\tFLIGHT NAME     : %s\n",PA);
    printf("\t\t\t\tNO OF PASSENGER : %d\n",ia);
    printf("\t\t\t\tSIT NO          : ");
    for(int i=0; i<ia; i++)
    {
        if(A[i]!=0)
        {
            printf("|%d|",A[i]);
        }
    }
    printf("\n\n\t\t\t\tTICKET CODE     : %d\n\n",tt);
    savetic();
    getch();
    user();
}
savingcharter(char NM[],char FC[],char CM[],int P,int H,char DI[],int FT)
{
    system("CLS");
    int v;
    int t;
    int ia;
    FILE*fileC;
    fileC=fopen("CHARTER TICKET HISTORY.txt","a");
    if(fileC==NULL)
    {
        printf("\t\t\t\tFILE DOES NOT EXIST.") ;
    }
    else
    {
        system("CLS");
        printf("                                 *************************************                                   \n");
        printf("                                         INPUT PASSENGER DATA                                                \n");
        printf("                                 *************************************                                   \n\n\n");
        printf("\n\t\t\t\tENTER FIRST NAME:");
        scanf("%s",&tx[tt].fnc);
        printf("\n\t\t\t\tENTER LAST NAME:");
        scanf("%s",&tx[tt].lnc);
        printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
        scanf("%s",&tx[tt].passc);
        printf("\n\t\t\t\tENTER GENDER:");
        scanf("%s",&tx[tt].genc);
        printf("\n\t\t\t\tENTER MAIL ADDRESS:");
        scanf("%s",&tx[tt].mailc);
    }
    fprintf(fileC,"\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    fprintf(fileC,"\t\t\t\tCHARTER TICKET CODE : %d TK\n\n",tt);
    fprintf(fileC,"\n\t\t\t\tNAME           : %s %s\n\t\t\t\tPASSPORT/NID NO: %s\n\t\t\t\tGENDER         : %s\n\n",tx[tt].fnc,tx[tt].lnc,tx[tt].passc,&tx[tt].genc);
    fprintf(fileC,"\n\t\t\t\tMAIL ADDRESS   : %s\n",tx[tt].mailc);
    t=H*P;
    fprintf(fileC,"\t\t\t\tPRICE          : %d TK\n",t);
    v=pay(t);
    if(v==1)
    {
        fprintf(fileC,"\t\t\t\tPAYMENT STATUS : PAID\n\n");
    }
    else
    {
        fprintf(fileC,"\t\t\t\tPAYMENT STATUS : UNPAID\n ");
    }
    fprintf(fileC,"\t\t\t\tHOUR           : %d\n",H);
    fprintf(fileC,"\t\t\t\tSTARTING TIME  : %d (AM)\n\t\t\t\tFROM           : %s \n\t\t\t\tCOMPANY        : %s \n",FT,DI,CM);
    fprintf(fileC,"\t\t\t\tCHARTER NAME   : %s\n",NM);
    fprintf(fileC,"\t\t\t\tFACILITIES     : %s\n",FC);
    fclose(fileC);
    getch();
    system("CLS");
    printf("                                 *************************************                                   \n");
    printf("                                         CHARTER TICKET                                                \n");
    printf("                                 *************************************                                   \n\n\n");
    printf("\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    printf("\n\t\t\t\tNAME           : %s %s\n\t\t\t\tPASSPORT/NID NO: %s\n\t\t\t\tGENDER         : %s\n\n",tx[tt].fnc,tx[tt].lnc,tx[tt].passc,&tx[tt].genc);
    printf("\n\t\t\t\tMAIL ADDRESS   : %s\n",tx[tt].mailc);
    printf("\t\t\t\tPRICE          : %d TK\n",t);
    if(v==1)
    {
        printf("\t\t\t\tPAYMENT STATUS : PAID\n\n");
    }
    else
    {
        printf("\t\t\t\tPAYMENT STATUS : UNPAID\n ");
    }
    printf("\t\t\t\tHOUR           : %d\n",H);
    printf("\t\t\t\tSTARTING TIME  : %d (AM)\n\t\t\t\tFROM           : %s \n\t\t\t\tCOMPANY        : %s \n",FT,DI,CM);
    printf("\t\t\t\tCHARTER NAME   : %s\n",NM);
    printf("\t\t\t\tFACILITIES     : %s\n",FC);
    printf("\n\t\t\t\t\t\t  DATA SAVED ..");
    savetic();
    getch();
    user();
}
savecargo(char CC[],int p,int DE,char F[],char TO[])
{
    system("CLS");
    int v,w,c;
    int t;
    int ia;
    FILE*fileCR;
    fileCR=fopen("CARGO TICKET HISTORY.txt","a");
    if(fileCR==NULL)
    {
        printf("\t\t\t\tFILE DOES NOT EXIST.") ;
    }
    else
    {
        system("CLS");
        printf("                                 *************************************                                   \n");
        printf("                                         INPUT SENDER DATA                                                \n");
        printf("                                 *************************************                                   \n\n\n");
        printf("\n\t\t\t\tENTER  SENDER FIRST NAME:");
        scanf("%s",&tx[tt].ffn);
        printf("\n\t\t\t\tENTER SENDER LAST NAME:");
        scanf("%s",&tx[tt].fln);
        printf("\n\t\t\t\tENTER SENDER GENDER:");
        scanf("%s",&tx[tt].fgen);
        printf("\n\t\t\t\tENTER SENDER MAIL ADDRESS:");
        scanf("%s",&tx[tt].fmail);
        system("CLS");
        printf("                                 *************************************                                   \n");
        printf("                                         INPUT RECEIVER DATA                                                \n");
        printf("                                 *************************************                                   \n\n\n");
        printf("\n\t\t\t\tENTER RECEIVER FIRST NAME:");
        scanf("%s",&tx[tt].rfn);
        printf("\n\t\t\t\tENTER RECEIVER LAST NAME:");
        scanf("%s",&tx[tt].rln);
        printf("\n\t\t\t\tENTER RECEIVER GENDER:");
        scanf("%s",&tx[tt].rgen);
        printf("\n\t\t\t\tENTER RECEIVER MAIL ADDRESS:");
        scanf("%s",&tx[tt].rmail);
        system("CLS");
        printf("                                 *************************************                                   \n");
        printf("                                         INPUT PRODUCT DATA                                                \n");
        printf("                                 *************************************                                   \n\n\n");
        printf("\t\t\t\t\tPRODUCT TYPE : ");
        scanf("%s",&tx[tt].ty);
        printf("\n\t\t\t\t\tINPUT WET  : ");
        scanf("%d",&tx[tt].wtt);
    }
    strcpy(tx[tt].fro,F);
    strcpy(tx[tt].oto,TO);
    tx[tt].dist=DE;

    fprintf(fileCR,"\n\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    fprintf(fileCR,"\t\t\t\tCARGO TICKET CODE : %d TK\n\n",tt);
    fprintf(fileCR,"\n\t\t\t\t\tSENDER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",tx[tt].ffn,tx[tt].fln,tx[tt].fgen);
    fprintf(fileCR,"\t\t\t\tMAIL ADDRESS   : %s\n\n",tx[tt].fmail);
    fprintf(fileCR,"\n\t\t\t\t\tRECEIVER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",tx[tt].rfn,tx[tt].rln,tx[tt].rgen);
    fprintf(fileCR,"\t\t\t\tMAIL ADDRESS   : %s\n\n",tx[tt].rmail);
    t=DE*tx[tt].wtt*p;
    fprintf(fileCR,"\t\t\t\tPRICE          : %d TK\n",t);
    v=pay(t);
    if(v==1)
    {
        fprintf(fileCR,"\t\t\t\tPAYMENT STATUS : PAID\n\n");
    }
    else
    {
        fprintf(fileCR,"\t\t\t\tPAYMENT STATUS : UNPAID\n");
    }
    fprintf(fileCR,"\t\t\t\tWET            : %d\n",tx[tt].wtt);
    fprintf(fileCR,"\t\t\t\tDESTENCE       : %d\n",DE);
    fprintf(fileCR,"\t\t\t\tTYPE           : %s\n",tx[tt].ty);
    fprintf(fileCR,"\t\t\t\tFROM           : %s \n\t\t\t\tTO             : %s \n\t\t\t\tCOMPANY        : %s \n",F,TO,CC);
    printf("\n\t\t\t\t\t\t  DATA SAVED ..");
    fclose(fileCR);
    getch();
    system("CLS");
    printf("\n\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    printf("\t\t\t\tCARGO TICKET CODE : %d TK\n\n",tt);
    printf("\n\t\t\t\t\tSENDER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",tx[tt].ffn,tx[tt].fln,tx[tt].fgen);
    printf("\t\t\t\tMAIL ADDRESS   : %s\n\n",tx[tt].fmail);
    printf("\n\t\t\t\t\tRECEIVER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",tx[tt].rfn,tx[tt].rln,tx[tt].rgen);
    printf("\t\t\t\tMAIL ADDRESS   : %s\n\n",tx[tt].rmail);
    printf("\t\t\t\tPRICE          : %d TK\n",t);
    if(v==1)
    {
        printf("\t\t\t\tPAYMENT STATUS : PAID\n\n");
    }
    else
    {
        printf("\t\t\t\tPAYMENT STATUS : UNPAID\n");
    }
    printf("\t\t\t\tWET            : %d\n",tx[tt].wtt);
    printf("\t\t\t\tDESTENCE       : %d\n",DE);
    printf("\t\t\t\tTYPE           : %s\n",tx[tt].ty);
    printf("\t\t\t\tFROM           : %s \n\t\t\t\tTO             : %s \n\t\t\t\tCOMPANY        : %s \n",F,TO,CC);
    printf("\n\t\t\t\t\t\t  DATA SAVED ..");
    savetic();
    getch();
    user();
}
savetic()
{
    tc=fopen("ticketinfo.txt","w");
    for (int i=0; i<=100; i++)
    {
        tx[i].fn1;
        tx[i].ln1;
        tx[i].pass1;
        tx[i].gen1;
        tx[i].a;
        tx[i].fn2;
        tx[i].ln2;
        tx[i].pass2;
        tx[i].gen2;
        tx[i].b;
        tx[i].fn3;
        tx[i].ln3;
        tx[i].pass3;
        tx[i].gen3;
        tx[i].c;
        tx[i].mail;
        tx[i].rr;
        tx[i].HMT;
        tx[i].fnc;
        tx[i].lnc;
        tx[i].passc;
        tx[i].genc;
        tx[i].mailc;
        tx[i].ccc;
        tx[i].st;
        tx[i].hmh;
        tx[i].piac;
        tx[i].ffn;
        tx[i].fln;
        tx[i].fgen;
        tx[i].fmail;
        tx[i].rfn;
        tx[i].rln;
        tx[i].rgen;
        tx[i].rmail;
        tx[i].ty;
        tx[i].carcs;
        tx[i].dist;
        tx[i].wtt;
        tx[i].fro;
        tx[i].oto;
        fwrite(&tx[i],sizeof(tx[i]),1,tc);
    }
    fclose(tc);
    printf("\n\t\t\t\t\t\t DONE");
}


viewfile()
{
    system("CLS");
    system("COLOR E");
    FILE*file;
    char ch;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        PASSENGER TICKET                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    file=fopen("PASSENGER TICKET HISTORY.txt","r");
    if(file==NULL)
    {
        printf("\n\n\t\t\t\t\tEMPTY\n");
        getch();
        adminp();
    }
    else
    {
        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }
    }
    fclose(file);
    getch();
    adminp();
}
viewing()
{
    system("CLS");
    int n;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                VIEWING PANEL                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t 1. ROOT\n");
    printf("\t\t\t\t 2. TIME\n");
    printf("\t\t\t\t 3. COMPANY\n");
    printf("\t\t\t\t 4. FOOD\n");
    printf("\t\t\t\t 5. PASSENGER PLANE\n");
    printf("\t\t\t\t 6. CARGO COMPANY \n");
    printf("\t\t\t\t 7. FACILITIES \n");
    printf("\t\t\t\t 8. DESTINATION\n");
    printf("\t\t\t\t 9. CHARTER  FLIGHTS \n");
    printf("\t\t\t\t10. PASSENGER PROFILE \n");
    printf("\t\t\t\t11. TICKET HISTORY\n");
    printf("\t\t\t\t12. TICKET \n");
    printf("\t\t\t\t13.<-- \n\n");
    printf("\n\t\t\t\t\t ENTER YOUR CHOICE:");
    scanf("%d",&n);
    if(n==2)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                VIEWING TIMES                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int i=1; i<=def.patime; i++)
        {
            printf("\n\t\t\t\t%d. >> %s ",i,b[i].time);
        }
        if(def.patime==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        getch();
        adminp();

    }
    else if(n==3)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                               VIEWING COMPANY                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int i=1; i<=def.company; i++)
        {
            printf("\n\t\t\t\t%d. >> %s ",i,b[i].comn);
        }
        if(def.company==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        getch();
        adminp();
    }
    else if(n==4)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                VIEWING FOOD                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int i=1; i<=def.pafood; i++)
        {
            printf("\n\t\t\t\t%d. >> %s ",i,b[i].food);
        }
        if(def.pafood==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        getch();
        adminp();
    }
    else if(n==7)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                         VIEWING PASSENGER FACILITIES                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int i=1; i<=def.pafaci; i++)
        {
            printf("\n\t\t\t\t%d. >> %s",i,b[i].faci);
        }
        if(def.pafaci==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                          VIEWING CHARTER FACILITIES                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int i=1; i<=def.chfaci; i++)
        {
            printf("\n\t\t\t\t%d. >> %s",i,b[i].cfaci);
        }
        if(def.chfaci==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        getch();
        adminp();
    }
    else if(n==1)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                VIEWING ROOTS                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int i=1; i<=def.paroot; i++)
        {
            printf("\n\n\t\t\t\tCODE       >> %d",i);
            printf("\n\t\t\t\tDESTINATION >> %s",c[i].destinp);
            printf("\n\t\t\t\tTIME        >> %s",c[i].timep);
            printf("\n\t\t\t\tCOMPANY     >> %s",c[i].comnp);
            printf("\n\t\t\t\tFLIGHT NAME >> %s",c[i].pname);
            printf("\n\t\t\t\tPRICE       >> %d",c[i].pricep);
            printf("\n\t\t\t\tFOOD        >> %s",c[i].foodp);
            printf("\n\t\t\t\tFACILITIES  >> %s\n",c[i].facip);
        }
        if(def.paroot==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        getch();
        adminp();
    }
    else if(n==11)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                           VIEWING TICKET HISTORY                            \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\t\t 1.VIEW PASSENGER TICKET\n");
        printf("\t\t\t\t\t 2.VIEW CHARTER TICKET\n");
        printf("\t\t\t\t\t 3.VIEW CARGO FORM\n");
        printf("\n\t\t\t\t\t ENTER YOUR CHOICE:");
        int nn;
        scanf("%d",&nn);
        if(nn==1)
        {
            viewfile();
        }
        else if(nn==2)
        {
            viewfilech();
        }
        else if(nn==3)
        {
            viewfilecc();
        }
        else
        {
            printf("\n\t\t\t\tINVALID KEY \n\n\t\t\t\tTRY AGAIN\n");
            getch();
            viewing();
        }
    }
    else if(n==12)
    {
        vtc();
    }
    else if(n==6)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                            VIEWING CARGO COMPANY                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.crcmc; ib++)
        {
            printf("\n\t\t\t\t>%d CARGO COMPANY  >>%s\n",ib,b[ib].crcm);
        }
        if(def.crcmc==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        getch();
        adminp();
    }
    else if(n==8)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                        VIEWING PASSENGER DESTINATION                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.padestin; ib++)
        {
            printf("\n\t\t\t\t%d. DESTINATION : %s\n",ib,b[ib].destin);
        }
        if(def.padestin==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        getch();
        adminp();
    }
    else if(n==5)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                              PASSENGER  PLANE                                \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.pplane; ib++)
        {
            printf("\n\t\t\t\t%d. PLANE : %s\n",ib,b[ib].plane);
        }
        if(def.pplane==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        getch();
        adminp();
    }
    else if(n==9)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                              CHARTER  PLANE                                \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.chpna; ib++)
        {
            printf("\n\t\t\t\t%d. PLANE : %s\n",ib,b[ib].cname);
        }
        if(def.chpna==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        getch();
        adminp();
    }
    else if(n==10)
    {
        srcpro();
    }
    else if(n==13)
    {
        adminp();
    }
    else
    {
        printf("\n\t\t\t\tWRONG CHOICE!!!!\n\t\t\t\tTRY AGAIN....\n");
        getch();
        viewing();
    }
}
viewfilech()
{
    system("CLS");
    system("COLOR E");
    FILE*fileC;
    char ch;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                       CHARTER TICKET                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    fileC=fopen("CHARTER TICKET HISTORY.txt","r");
    if(fileC==NULL)
    {
        printf("\n\n\t\t\t\t\tEMPTY\n");
        getch();
        adminp();
    }
    else
    {
        while(!feof(fileC))
        {
            ch=fgetc(fileC);
            printf("%c",ch);
        }
    }
    fclose(fileC);
    getch();
    adminp();
}
viewfilecc()
{
    system("CLS");
    system("COLOR E");
    FILE*fileCR;
    char ch;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                         CARGO FORM                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    fileCR=fopen("CARGO TICKET HISTORY.txt","r");
    if(fileCR==NULL)
    {
        printf("\n\n\t\t\t\t\tEMPTY \n");
        getch();
        adminp();
    }
    else
    {
        while(!feof(fileCR))
        {
            ch=fgetc(fileCR);
            printf("%c",ch);
        }
    }
    fclose(fileCR);
    getch();
    adminp();
}
viewfile22()
{
    system("CLS");
    system("COLOR E");
    fileM=fopen("information.txt","r");
    if(fileM==NULL)
    {
        printf("\n\n\t\t\t\t\t******************************************\n");
        printf("\t\t\t\t\t*              >>WELCOME<<               *\n");
        printf("\t\t\t\t\t*      YOU ARE THE FIRST TIME USER       *\n");
        printf("\t\t\t\t\t*     WE HAVE SOMETHING GOOD FOR YOU     *\n");
        printf("\t\t\t\t\t******************************************\n");
        basic();
        rrot();
        chatt();
        charr();
        viewfile2();
        ori();
        ddd();
        viewtic();
        viewfilerr();
        viewfilecrr();
        viewfilecrrg();
    }
    else
    {
        while(!feof(fileM))
        {
            for(int i=0; i<=19; i++)
            {
                fread(&b[i],sizeof(b[i]),1,fileM);
                b[i].comn;
                b[i].time;
                b[i].food;
                b[i].faci;
                b[i].destin;
                b[i].cname;
                b[i].cfaci;
                b[i].crcm;
                b[i].crde;
            }
        }
    }
    fclose(fileM);
    viewfile2();
    viewtic();
    viewfilerr();
    viewfilecrr();
    viewfilecrrg();
}
viewfile2()
{
    fileMC=fopen("informationmac.txt","r");
    if(fileMC==NULL)
    {
        printf("\n\n\t\t\t\tPLEASE WAIT, YOUR SOFTWARE IS CONNECTING TO OUR SERVER\n\n\n");
        sleep(1);
        printf("\t\t\t\t   ");
        for(int i=0; i<7; i++)
        {
            printf(">");
            usleep(500000);
        }
        for(int j=0; j<17; j++)
        {
            printf(">");
            usleep(400);
        }
        for(int k=0; k<10; k++);
        {
            printf(">");
            usleep(500000);
        }
        for(int m=0; m<20; m++)
        {
            printf(">");
            usleep(400);
        }
        mac();
    }
    else
    {
        while(!feof(fileMC))
        {
            fread(&def,sizeof(def),1,fileMC);
            def.company;
            def.patime;
            def.pafood;
            def.pafaci;
            def.padestin;
            def.paroot;
            def.pplane;
            def.chpna;
            def.chfaci;
            def.crcmc;
            def.ccde;
        }
    }
    fclose(fileMC);
}
vtc()
{
    system("CLS");
    int DD;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                      VIEW TICKET                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t\t 1.PASSENGER TICKET\n");
    printf("\t\t\t\t\t 2.CHARTER TICKET\n");
    printf("\t\t\t\t\t 3.CARGO TICKET\n");
    printf("\n\t\t\t\t\t ENTER YOUR CHOICE: ");
    scanf("%d",&DD);
    switch(DD)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        singpass1();
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        singchar1();
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        singcar1();
        break;

    default:
        printf("\n\n\t\t\t\t\tWRONG CHOICE!!\n\n\t\t\t\t\tENTER CORRECT OPTION..\n");
        getch();
        vtc();
        break;
    }
}
viewtic()
{
    tv=fopen("ticketinfo.txt","r");
    if(tv==NULL)
    {

    }
    else
    {
        while(!feof(fileMC))
        {
            for (int i=0; i<=100; i++)
            {
                fread(&tx[i],sizeof(tx[i]),1,tv);
                tx[i].fn1;
                tx[i].ln1;
                tx[i].pass1;
                tx[i].gen1;
                tx[i].a;
                tx[i].fn2;
                tx[i].ln2;
                tx[i].pass2;
                tx[i].gen2;
                tx[i].b;
                tx[i].fn3;
                tx[i].ln3;
                tx[i].pass3;
                tx[i].gen3;
                tx[i].c;
                tx[i].mail;
                tx[i].rr;
                tx[i].HMT;
                tx[i].fnc;
                tx[i].lnc;
                tx[i].passc;
                tx[i].genc;
                tx[i].mailc;
                tx[i].ccc;
                tx[i].st;
                tx[i].hmh;
                tx[i].piac;
                tx[i].ffn;
                tx[i].fln;
                tx[i].fgen;
                tx[i].fmail;
                tx[i].rfn;
                tx[i].rln;
                tx[i].rgen;
                tx[i].rmail;
                tx[i].ty;
                tx[i].carcs;
                tx[i].dist;
                tx[i].wtt;
                tx[i].fro;
                tx[i].oto;
            }
        }
    }
    fclose(tv);
}
viewfilerr()
{
    fr=fopen("rootinfo.txt","rb");
    if(fr==NULL)
    {

    }
    else
    {
        while(!feof(fr))
        {
            for (int i=0; i<=def.paroot; i++)
            {
                fread(&rrt[i],sizeof(rrt[i]),1,fr);
                rrt[i].rd;
                rrt[i].rt;
                rrt[i].rc;
                rrt[i].rp;
                rrt[i].rpr;
                rrt[i].rf;
                rrt[i].rfc;
                rrt[i].rpp;
            }
        }
    }
    fclose(fr);
}
viewfilecrr()
{
    frc=fopen("charterinfo.txt","rb");
    if(frc==NULL)
    {

    }
    else
    {
        while(!feof(frc))
        {
            for (int i=0; i<=def.chpna; i++)
            {
                fread(&chaet[i],sizeof(chaet[i]),1,frc);
                chaet[i].cnn;
                chaet[i].cfc;
                chaet[i].cpr;
                chaet[i].ccom;
            }
        }
    }
    fclose(frc);
}
viewfilecrrg()
{
    frca=fopen("cargoinfo.txt","rb");
    if(frca==NULL)
    {

    }
    else
    {
        while(!feof(frc))
        {
            for (int i=0; i<=def.crcmc; i++)
            {
                fread(&camg[i],sizeof(camg[i]),1,frca);
                camg[i].ncar;
                camg[i].ndc;
                camg[i].npr;
            }
        }
    }
    fclose(frca);
}


B737_8(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 01 20
{

    int i,A[100]= {0},k,j;
    j=tx[tt].HMT;
    int  B[38]= {0};
    system("CLS");
    for (i=0; i<j; i++)
    {
        system("CLS");
        printf("%d\n",tx[tt].HMT);
        printf("%d\n",tt);
        printf("\t\t\t\t          ^ \n");
        printf("\t\t\t\t         ___  \n");
        printf("\t\t\t\t        ~   ~  \n");
        printf("\t\t\t\t       [P] [P]  \n");
        printf("\t\t\t\t    _____} {_____\n");
        printf("\t\t\t\t           |      \n");
        printf("\t\t\t\t    [DOOR] |       \n");
        printf("\t\t\t\t  _______} {_______  \n");
        printf("\t\t\t\t%s\n",com);
        printf("\t\t\t\t| 01  02   B  03  04 | \n");
        printf("\t\t\t\t|[0%d][0%d]  7 [0%d][0%d]| \n",B[1],B[2],B[3],B[4]);
        printf("\t\t\t\t| 05  06   3  07  08 | \n");
        printf("\t\t\t\t|[0%d][0%d]  7 [0%d][0%d]| \n",B[5],B[6],B[7],B[8]);
        printf("\t\t\t\t| 09  10   -  11  12 | \n");
        printf("\t\t\t\t|[0%d][0%d]  8 [0%d][0%d]| \n",B[9],B[10],B[11],B[12]);
        printf("\t\t\t\t| 13  14   0  15  16 | \n");
        printf("\t\t\t\t|[0%d][0%d]  0 [0%d][0%d]| \n",B[13],B[14],B[15],B[16]);
        printf("\t\t\t\t| 17  18      19  20 | \n");
        printf("\t\t\t\t|[0%d][0%d]    [0%d][0%d]| \n",B[17],B[18],B[19],B[20]);
        printf("\t\t\t\t             |         \n");
        printf("\t\t\t\t  [DOOR]    [TOILET]   \n");
        printf("\t\t\t\t          [TOILET]  \n");
        printf("\t\t\t\t                   \n");
        printf("\t\t\t\t   --------------- \n");
        printf("\n\t\t\t\tENTER YOUR FAVORITE SIT NO :");
        scanf("%d",&k);
        if(1<=k&&k<=20)
        {
            if(B[k]==0)
            {
                printf("\n\t\t\t\tYOU BOOKED %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\n\t\t\t\tSORRY THIS SIT IS ALREADY BOOKED \n");
                A[i]=0;
            }
        }
        else
        {
            j++;
            printf("\n\t\t\t\tINVALID SIT \n");
            A[i]=0;
        }
    };
    printf("\n\t\t\t\tYOUR BOOKED SIT NO IS :");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    getch();
    savingfile(TI,DT,com,b[1].plane,A,j,tk,k,FD,FC);
}
B777_3(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 02 36
{
    int i,A[100]= {0},k,j;
    j=tx[tt].HMT;
    int  B[38]= {0};
    system("CLS");
    for (i=0; i<j; i++)
    {
        system("CLS");
        printf("\t\t\t\t\t              ^ \n");
        printf("\t\t\t\t\t             ___  \n");
        printf("\t\t\t\t\t            ~    ~  \n");
        printf("\t\t\t\t\t          [P]  [P]  \n");
        printf("\t\t\t\t\t        _____}  {_____\n");
        printf("\t\t\t\t\t             |        \n");
        printf("\t\t\t\t\t        [DOOR]  |         \n");
        printf("\t\t\t\t\t      _______}  {_______  \n");
        printf("\t\t\t\t\t    [H][H]          [H][H]   \n");
        printf("\t\t\t\t\t          B777_300ER     \n");
        printf("\t\t\t\t\t    %s\n",com);
        printf("\t\t\t\t\t| 01  02  03      04  05  06 | \n");
        printf("\t\t\t\t\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[1],B[2],B[3],B[4],B[5],B[6]);
        printf("\t\t\t\t\t| 07  08  09      10  11  12 | \n");
        printf("\t\t\t\t\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[7],B[8],B[9],B[10],B[11],B[12]);
        printf("\t\t\t\t\t| 13  14  15      16  17  18 | \n");
        printf("\t\t\t\t\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[13],B[14],B[15],B[16],B[17],B[18]);
        printf("\t\t\t\t\t| 19  20  21      22  23  24 | \n");
        printf("\t\t\t\t\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[19],B[20],B[21],B[21],B[23],B[24]);
        printf("\t\t\t\t\t| 25  26  27      28  29  30 | \n");
        printf("\t\t\t\t\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[25],B[26],B[27],B[28],B[29],B[30]);
        printf("\t\t\t\t\t| 31  32  33      34  35  36 | \n");
        printf("\t\t\t\t\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[31],B[32],B[33],B[34],B[35],B[36]);
        printf("\t\t\t\t\t                   |         \n");
        printf("\t\t\t\t\t        [DOOR]     [TOILET]   \n");
        printf("\t\t\t\t\t                 [TOILET]  \n");
        printf("\t\t\t\t\t                        \n");
        printf("\t\t\t\t\t       --------------- \n");
        printf("\n\t\t\t\tENTER YOUR FAVORITE SIT NO :");
        scanf("%d",&k);
        if(1<=k&&k<=36)
        {
            if(B[k]==0)
            {
                printf("\n\t\t\t\tYOU BOOKED %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\n\t\t\t\tSORRY THIS SIT IS ALREADY BOOKED \n");
                A[i]=0;
            }
        }
        else
        {
            j++;
            printf("\n\t\t\t\tINVALID SIT \n");
            A[i]=0;
        }
    };
    printf("\n\t\t\t\tYour booked sit no is:");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    getch();
    savingfile(TI,DT,com,b[2].plane,A,j,tk,k,FD,FC);
}
B787_8(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 03 8
{
    int i,A[100]= {0},k,j;
    j=tx[tt].HMT;
    int  B[38]= {0};
    system("CLS");
    for (i=0; i<j; i++)
    {
        system("CLS");
        printf("\t\t\t\t\t          ^ \n");
        printf("\t\t\t\t\t         ___  \n");
        printf("\t\t\t\t\t        ~   ~  \n");
        printf("\t\t\t\t\t       [P] [P]  \n");
        printf("\t\t\t\t\t    _____} {_____\n");
        printf("\t\t\t\t\t           |      \n");
        printf("\t\t\t\t\t    [DOOR] |       \n");
        printf("\t\t\t\t\t  _______} {_______  \n");
        printf("\t\t\t\t\t %s\n",com);
        printf("\t\t\t\t\t 01[%d]        05[%d]\n\n",B[1],B[5]);
        printf("\t\t\t\t\t 02[%d]        06[%d]\n\n",B[2],B[6]);
        printf("\t\t\t\t\t 03[%d]        07[%d]\n\n",B[3],B[7]);
        printf("\t\t\t\t\t 04[%d]        08[%d]\n\n",B[4],B[8]);
        printf("\t\t\t\t\t             |         \n");
        printf("\t\t\t\t\t  [DOOR]   [TOILET]   \n");
        printf("\t\t\t\t\t          [TOILET]  \n");
        printf("\t\t\t\t\t                   \n");
        printf("\t\t\t\t\t  --------------- \n");
        printf("\n\t\t\t\tENTER YOUR FAVORITE SIT NO :");
        scanf("%d",&k);
        if(1<=k&&k<=8)
        {
            if(B[k]==0)
            {
                printf("\n\t\t\t\tYOU BOOKED  %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\n\t\t\t\tSORRY THIS SIT IS ALREADY BOOKED \n");
                A[i]=0;
            }
        }
        else
        {
            j++;
            printf("\n\t\t\t\tINVALID SIT \n");
            A[i]=0;
        }
    };
    printf("\n\t\t\t\tYOUR BOOKED SIT NO IS :");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    getch();
    savingfile(TI,DT,com,b[3].plane,A,j,tk,k,FD,FC);
}
B787_9(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 04 48
{
    int i,A[100]= {0},k,j;
    j=tx[tt].HMT;
    int  B[38]= {0};
    system("CLS");
    for (i=0; i<j; i++)
    {
        system("CLS");
        printf("\t\t\t\t\t               ^ \n");
        printf("\t\t\t\t\t            ______\n");
        printf("\t\t\t\t\t            ~    ~  \n");
        printf("\t\t\t\t\t           [P]  [P]  \n");
        printf("\t\t\t\t\t        _____}  {_____\n");
        printf("\t\t\t\t\t      %s        \n",com);
        printf("\t\t\t\t\t     [DOOR]B787 900[DOOR]   \n");
        printf("\t\t\t\t\t     ________}  {________ \n");
        printf("\t\t\t\t\t   [AH][AH]        [AH][AH]\n\n");
        printf("\t\t\t\t\t  01  02    03  04    05  06\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[1],B[2],B[3],B[4],B[5],B[6]);
        printf("\t\t\t\t\t  07  08    09  10    11  12 \n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[7],B[8],B[9],B[10],B[11],B[12]);
        printf("\t\t\t\t\t  13  14    15  16    17  18\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[13],B[14],B[15],B[16],B[17],B[18]);
        printf("\t\t\t\t\t  19  20    21  22    23  24\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[19],B[20],B[21],B[21],B[23],B[24]);
        printf("\t\t\t\t\t  25  26    27  28    29  30\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[25],B[26],B[27],B[28],B[29],B[30]);
        printf("\t\t\t\t\t  31  32    33  34    35  36\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[31],B[32],B[33],B[34],B[35],B[36]);
        printf("\t\t\t\t\t  37  38    39  40    41  42\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[37],B[38],B[39],B[40],B[41],B[42]);
        printf("\t\t\t\t\t  43  44    45  46    47  48\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[43],B[44],B[45],B[46],B[47],B[48]);
        printf("\t\t\t\t\t --------|          |--------\n");
        printf("\t\t\t\t\t         |          |         \n");
        printf("\t\t\t\t\t --------|          |-------- \n");
        printf("\t\t\t\t\t [DOOR]                [DOOR] \n");
        printf("\t\t\t\t\t  [TOILET]          [TOILET]  \n");
        printf("\t\t\t\t\t    [TOILET]      [TOILET] \n");
        printf("\t\t\t\t\t     --------------------\n");
        printf("\n\t\t\t\tENTER YOUR FAVORITE SIT NO :");
        scanf("%d",&k);
        if(1<=k&&k<=48)
        {
            if(B[k]==0)
            {
                printf("\n\t\t\t\tYOU BOOKED %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\n\t\t\t\tSORRY THIS SIT IS ALREADY BOOKED\n");
                A[i]=0;
            }
        }
        else
        {
            j++;
            printf("\n\t\t\t\tINVALID SIT \n");
            A[i]=0;
        }
    };
    printf("\n\t\t\t\tYOUR BOOKED SIT NO IS :");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    getch();
    savingfile(TI,DT,com,b[4].plane,A,j,tk,k,FD,FC);

}
BD8Q_4(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 05 24
{
    int i,A[100]= {0},k,j;
    j=tx[tt].HMT;
    int  B[38]= {0};
    system("CLS");
    for (i=0; i<j; i++)
    {
        system("CLS");
        printf("\t\t\t\t\t          ^ \n");
        printf("\t\t\t\t\t         ___  \n");
        printf("\t\t\t\t\t        ~   ~  \n");
        printf("\t\t\t\t\t       [P] [P]  \n");
        printf("\t\t\t\t\t    _____} {_____\n");
        printf("\t\t\t\t\t           |      \n");
        printf("\t\t\t\t\t    [DOOR] |       \n");
        printf("\t\t\t\t\t  _______} {_______  \n");
        printf("\t\t\t\t\t %s\n",com);
        printf("\t\t\t\t\t   01     02    03\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[1],B[2],B[3]);
        printf("\t\t\t\t\t   04     05    06\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[4],B[5],B[6]);
        printf("\t\t\t\t\t   07     08    09\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[7],B[8],B[9]);
        printf("\t\t\t\t\t   10     11    12\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[10],B[11],B[12]);
        printf("\t\t\t\t\t   13     14    15\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[13],B[14],B[15]);
        printf("\t\t\t\t\t   16     17    18\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[16],B[17],B[18]);
        printf("\t\t\t\t\t   19      20   21\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[19],B[20],B[21]);
        printf("\t\t\t\t\t   22     23    24\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[22],B[23],B[24]);
        printf("\t\t\t\t\t       COVID-19  \n");
        printf("\t\t\t\t\t  [DOOR]   [TOILET]   \n");
        printf("\t\t\t\t\t          [TOILET]  \n");
        printf("\t\t\t\t\t                   \n");
        printf("\t\t\t\t\t  --------------- \n");
        printf("\n\t\t\t\tENTER YOUR FAVORITE SIT NO ");
        scanf("%d",&k);
        if(1<=k&&k<=24)
        {
            if(B[k]==0)
            {
                printf("\n\t\t\t\tYOU BOOKED %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\n\t\t\t\tSORRY THIS SIT IS ALREADY BOOKED\n");
                A[i]=0;
            }
        }
        else
        {
            j++;
            printf("\n\t\t\t\tINVALID SIT \n");
            A[i]=0;
        }
    };
    printf("\n\t\t\t\tYOUR BOOKED SIT NO IS :");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    getch();
    savingfile(TI,DT,com,b[5].plane,A,j,tk,k,FD,FC);
}


home()
{
    system("CLS");
    system("COLOR B");
    int choice;
    printf("                                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~                       \n");
    printf("                                         AAF AIRLINES                                \n");
    printf("                                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~                     \n\n");
    printf("\t\t\t\t\t 1.LOGIN\n");
    printf("\t\t\t\t\t 2.SIGNUP\n");
    printf("\t\t\t\t\t 3.ADMIN PANEL\n");
    printf("\t\t\t\t\t 4.FORGET (USERNAME/PASSWORD)\n");
    printf("\t\t\t\t\t 5.EXIT\n\n");
    printf("\t\t\t\t\t ENTER YOUR CHOICE:");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("%c",169);
            usleep(40);
        }
        login();
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        registr();
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        admin();
        break;
    case 4:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        forgot();
        break;
    case 5:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\tTHANKS FOR USING OUR SERVICE....\n\n\n\n\n\n\n\n");
        exit(0);
        break;
    default:
        printf("\n\n\t\t\t\t\t WRONG CHOICE!!\n\t\t\t\t\tTRY AGAIN...\n");
        getch();
        home();
        break;
    }
}
intro()
{
    printf("\n\n\n\n\n");
    for(int i=0; i<60; i++)
    {
        if(i==9||i==10||i==11||i==12||i==34||i==31||i==32||
           i==33||i==46||i==47||i==48||i==49||i==50||
           i==51||i==52||i==53||i==54)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==7||i==8||i==9||i==12||i==13||i==14||i==29||
           i==30||i==31||i==34||i==35||i==36||i==53||
           i==54||i==48||i==49||i==50||i==51||i==52)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==55)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==7||i==8||i==6||i==15||i==13||i==14||
           i==29||i==30||i==28||i==37||i==35||i==36)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==47)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==7||i==5||i==6||i==15||i==16||i==14||i==29||i==27||i==28||i==37||i==38||i==36||i==48||i==49||i==50||i==51||i==52||i==53)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==47)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==4||i==5||i==6||i==7||i==8||i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==17||i==26||i==27||i==28||i==29||i==30||i==31||i==32||i==33||i==34||i==35||i==36||i==
                37||i==38||i==39||i==48||i==49||i==50||i==51||i==52||i==53)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==54)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==3||i==4||i==5||i==6||i==7||i==8||i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==17||i==18||i==25||i==26||i==27||i==28||i==29||i==30||i==31||i==32||i==33||i==34||i==35||i==36||i==
                37||i==38||i==39||i==40)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==47)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==2||i==3||i==4||i==17||i==18||i==19||i==24||i==25||i==26||i==39||i==40||i==41)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==47)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==2||i==3||i==4||i==17||i==18||i==19||i==24||i==25||i==26||i==39||i==40||i==41||i==46)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==47)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else if(i==48)
        {
            printf(" AIRLINES ");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n\n\n\t\t\t\t");
    char s1[60]= {"  THE    TRUSTED     AIRLINES     BOOKING     SERVICE"};
    for(int i=0; i<60; i++)
    {
        printf("%c",s1[i]);
        usleep(40000);
    }
}


adminp()
{
    system("CLS");
    int n;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                 ADMIN PANEL                                \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t\t 1. ADDING\n");
    printf("\t\t\t\t\t 2. EDITING\n");
    printf("\t\t\t\t\t 3. VIEW\n");
    printf("\t\t\t\t\t 4. SOFTWARE SETTING\n");
    printf("\t\t\t\t\t 5. ADMIN PROFILE\n");
    printf("\t\t\t\t\t 6. LOGOUT\n");
    printf("\t\t\t\t\t ENTER YOUR CHOICE : ");
    scanf("%d",&n);
    if(n==1)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        adding();
    }
    else if(n==2)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        editing();
    }
    else if(n==3)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        viewing();
    }
    else if(n==4)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                               SOFTWARE SETTING                                \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        printf("\n\t\t\t\t\t 1. RESET SOFTWARE\n");
        printf("\t\t\t\t\t 2. FORMAT ALL DATA\n");
        printf("\t\t\t\t\t >> ");
        int Q,i;
        scanf("%d",&Q);
        if(Q==1)
        {
            system("CLS");
            printf("                                        '''''''''''''''''''''''''''''                       \n");
            printf("                                               RESETING....                                \n");
            printf("                                        '''''''''''''''''''''''''''''                       \n\n");
            printf("\n\n\n\n\n\n\n\n\n\n\t                     RESETING...                           \n\t\t\t\t");
            for(i=0; i<50; i++)
            {
                if(i==2||i==5||i==47)
                {
                    printf("%c",178);
                    usleep(900000);
                }
                else
                {
                    printf("%c",178);
                    usleep(40000);
                }

            }
            basic();
            pro();
            mro();
            rrot();
            chatt();
            charr();

        }
        else if(Q==2)
        {
            system("CLS");
            printf("                                        '''''''''''''''''''''''''''''                       \n");
            printf("                                                 FORMAT....                                \n");
            printf("                                        '''''''''''''''''''''''''''''                       \n\n");
            printf("\n\n\n\n\n\n\n\n\n\n\t                        FORMATING DATA...                           \n\t\t\t\t");
            for(i=0; i<50; i++)
            {
                if(i==2||i==5||i==37)
                {
                    printf("%c",178);
                    usleep(900000);
                }
                else
                {
                    printf("%c",178);
                    usleep(40000);
                }

            }
            format();
        }
        else
        {
            adminp();
        }
    }
    else if(n==5)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        adpro();
    }
    else if(n==6)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        admin();
    }
    else
    {
        printf("\n\t\t\t\tWRONG CHOICE !!!!\n\t\t\t\tTRY AGAIN....\n");
        getch();
        adminp();
    }
}
admin()
{
    system("CLS");
    system("COLOR B");
    int choice;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              ADMIN VERIFICATION                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t\t 1. LOGIN\n");
    printf("\t\t\t\t\t 2. SIGNUP\n");
    printf("\t\t\t\t\t 3. FORGOT(USERNAME\PASSWORD)\n");
    printf("\t\t\t\t\t 4. HOME PAGE\n");
    printf("\t\t\t\t\t 5. EXIT\n\n");
    printf("\t\t\t\t\t ENTER YOUR CHOICE :");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        adlogin();
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        adregistr();
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        adforgot();
        break;
    case 4:
        home();
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("\n\n\t\t\t\t\t WRONG CHOICE !!\n\t\t\t\t\tTRY AGAIN...\n");
        getch();
        admin();
        break;
    }
}


vplane()
{
    system("CLS");
    system("COLOR E");
    int k,m=1,p;
    printf("                                 *************************************                                   \n");
    printf("                                           PURCHASE TICKET                                                \n");
    printf("                                 *************************************                                   \n\n");

    printf("\t\t\t\t 1.|PASSENGER|         2.|CHARTER|               3.|CARGO|\n");
    printf("\t\t\t\t\n\n\n");
    for(k=0; k<m; k++)
    {
        printf("\t\t\t\tENTER YOUR CHOICE :");
        scanf("%d",&p);

        if(p==1)
        {
            if(tx[tt].HMT>=3)
            {
                printf("YOU CANT BUY MORE THAN 3 TICKET FROM THIS ACCOUNT");
                user();
            }
            else
            {
                passenger();
            }
        }
        else if(p==2)
        {
            charter();
        }
        else if(p==3)
        {
            cargo();
        }
        else
        {
            printf("\t\t\t\t\tINVALID CODE\n\n");
            m++;
        }
    }
}
cplane(char TI[],char DT[],char com[],char FD[],char FC[],int n,int tk)
{
    system("CLS");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        AAF AIRLINES                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\t\t\t\t\tTIME        : %s\n",TI);
    printf("\t\t\t\t\tCOMPANY     : %s\n",com);
    printf("\t\t\t\t\tFOOD        : %s\n",FD);
    printf("\t\t\t\t\tFACILITIES  : %s\n",FC);
    printf("\t\t\t\t\tPRICE       : %d TK\n\n",tk);
    int hh=2,j,l=0;
    for(int vv=1; vv<hh; vv++)
    {
        printf("\n\t\t\t\tHOW MANY SIT YOU WANT TO BOOK(MAX 3):");
        scanf("%d",&j);
        if(0<j&&j<4)
        {
            tx[tt].HMT=j;
        }
        else
        {
            hh++;
        }
    }
    switch(n)
    {
    case 1:
        B737_8(TI,DT,com,FD,FC,tk);
        break;
    case 2:
        B777_3(TI,DT,com,FD,FC,tk);
        break;
    case 3:
        B787_8(TI,DT,com,FD,FC,tk);
        break;
    case 4:
        B787_9(TI,DT,com,FD,FC,tk);
        break;
    case 5:
        BD8Q_4(TI,DT,com,FD,FC,tk);
        break;
    }
}


basic()
{
    char NNN[20]="EMPTY";
    //PLANE NAME
    char p1[45]="BOEING 737-800";
    char p2[45]="BOEING 777-300 ER";
    char p3[45]="BOEING 787-800";
    char p4[45]="BOEING 787-900";
    char p5[45]="BOMBARDIER DASH 8 Q400";

    //COMPANY NAME
    char c1[20]="BANGLADESH BIMAN";
    char c2[20]="NOVOAIR";
    char c3[20]="REGENT AIRWAYS";
    char c4[30]="US BANGLA AIRLINES";
    char c5[20]="BASHUNDHARA AIRWAYS";

    //TIME TABLE
    char t12[8]="12 AM";
    char t01[8]="01 AM";
    char t03[8]="03 AM";
    char t04[8]="04 AM";
    char t06[8]="06 AM";
    char t07[8]="07 AM";
    char t09[8]="09 AM";
    char t10[8]="10 AM";

    //FOOD
    char f1[100]="PIZA AND WATER";
    char f2[100]="BERGER AND WATER";
    char f3[100]="SAMOSA AND WATER";
    char f4[100]="CAKE AND WATER";
    char f5[100]="NOTHING";


    //CARGODES
    char cd1[15]="DHAKA";
    char cd2[15]="CHOTTOGRAM";
    char cd3[15]="SYLHET";

    //CARGODES WORK
    strcpy(b[0].crde,NNN);
    strcpy(b[1].crde,cd1);
    strcpy(b[2].crde,cd2);
    strcpy(b[3].crde,cd3);


    //FACILITIES
    char fc1[100]="PAPER,WIFI,FOOD,OXYGEN MUSK";
    char fc2[100]="WIFI,MEGAZINE,OXYGEN MUSK";
    char fc3[100]="OXYGEN MUSK";

    //DESTINATION
    char DTC[20]="DHAKA TO CHOTTOGRAM";
    char DTS[20]="DHAKA TO SYLHET";
    char CTS[22]="CHOTTOGRAM TO SYLHET";
    char CTD[20]="CHOTTOGRAM TO DHAKA";
    char STD[20]="SYLHET TO DHAKA";
    char STC[22]="SYLHET TO CHOTTOGRAM";

    //CHARTER NAME
    char cn1[40]="BELL 222";
    char cn2[40]="BELL 206B JET RANGER";
    char cn3[40]="BELL 206B JET RANGER BLUE";
    char cn4[40]="AUGUSTA WESTLAND 139";
    char cn5[40]="EUROCOPTER 120 COLIBRI";
    char cn6[40]="LEARJET 75";

    //CHARTER NAME WORK
    strcpy(b[0].cname,NNN);
    strcpy(b[1].cname,cn1);
    strcpy(b[2].cname,cn2);
    strcpy(b[3].cname,cn3);
    strcpy(b[4].cname,cn4);
    strcpy(b[5].cname,cn5);
    strcpy(b[6].cname,cn6);

    //CHARTER FACILITIES
    char cp1[40]="WIFI,AC AND SIT 4";
    char cp2[40]="AC AND SIT 6";
    char cp3[40]="WIFI,AC,FOOD AND SIT 12";

    //CHARTER FACILITIES
    strcpy(b[0].cfaci,NNN);
    strcpy(b[1].cfaci,cp1);
    strcpy(b[2].cfaci,cp2);
    strcpy(b[3].cfaci,cp3);


    //COMPANY WORK
    strcpy(b[0].comn,NNN);
    strcpy(b[1].comn,c1);
    strcpy(b[2].comn,c2);
    strcpy(b[3].comn,c3);
    strcpy(b[4].comn,c4);
    strcpy(b[5].comn,c5);

    //TIME TABLE WORK
    strcpy(b[0].time,NNN);
    strcpy(b[1].time,t12);
    strcpy(b[2].time,t01);
    strcpy(b[3].time,t03);
    strcpy(b[4].time,t04);
    strcpy(b[5].time,t06);
    strcpy(b[6].time,t07);
    strcpy(b[7].time,t09);
    strcpy(b[8].time,t10);

    //PLANE NAME WORK
    strcpy(b[0].plane,NNN);
    strcpy(b[1].plane,p1);
    strcpy(b[2].plane,p2);
    strcpy(b[3].plane,p3);
    strcpy(b[4].plane,p4);
    strcpy(b[5].plane,p5);

    //FOOD WORK
    strcpy(b[0].food,NNN);
    strcpy(b[1].food,f1);
    strcpy(b[2].food,f2);
    strcpy(b[3].food,f3);
    strcpy(b[4].food,f4);
    strcpy(b[5].food,f5);

    //FACILITIES WORK
    strcpy(b[0].faci,NNN);
    strcpy(b[1].faci,fc1);
    strcpy(b[2].faci,fc2);
    strcpy(b[3].faci,fc3);

    //DESTINATION WORK
    strcpy(b[0].destin,NNN);
    strcpy(b[1].destin,DTC);
    strcpy(b[2].destin,DTS);
    strcpy(b[3].destin,CTS);
    strcpy(b[4].destin,CTD);
    strcpy(b[5].destin,STD);
    strcpy(b[6].destin,STC);

    //CARGO COMPANY
    char csc1[40]="DHL";
    char csc2[40]="GOLBAL AIR COURIER";
    char csc3[40]="S&F COURIER ";

    //CARGO COMPANY WORK
    strcpy(b[0].crcm,NNN);
    strcpy(b[1].crcm,csc1);
    strcpy(b[2].crcm,csc2);
    strcpy(b[3].crcm,csc3);

    def.company=5;
    def.patime=8;
    def.pafood=5;
    def.pafaci=3;
    def.padestin=6;
    def.paroot=24;
    def.chpna=6;
    def.chfaci=3;
    def.crcmc=3;
    def.pplane=5;
    def.ccde=3;

    rrt[0].rd=0;
    rrt[0].rt=0;
    rrt[0].rc=0;
    rrt[0].rp=0;
    rrt[0].rpr=0;
    rrt[0].rf=0;
    rrt[0].rfc=0;
    rrt[0].rpp=0;

    //roots>>1
    rrt[1].rd=1;
    rrt[1].rt=1;
    rrt[1].rc=1;
    rrt[1].rp=1;
    rrt[1].rpr=7000;
    rrt[1].rf=1;
    rrt[1].rfc=3;
    rrt[1].rpp=1;

    //roots>>2
    rrt[2].rd=1;
    rrt[2].rt=3;
    rrt[2].rc=3;
    rrt[2].rp=3;
    rrt[2].rpr=6800;
    rrt[2].rf=1;
    rrt[2].rfc=1;
    rrt[2].rpp=3;

    //roots>>3
    rrt[3].rd=1;
    rrt[3].rt=5;
    rrt[3].rc=4;
    rrt[3].rp=4;
    rrt[3].rpr=6700;
    rrt[3].rf=3;
    rrt[3].rfc=3;
    rrt[3].rpp=4;

    //roots>>4
    rrt[4].rd=1;
    rrt[4].rt=7;
    rrt[4].rc=2;
    rrt[4].rp=5;
    rrt[4].rpr=6900;
    rrt[4].rf=1;
    rrt[4].rfc=3;
    rrt[4].rpp=5;

    //roots>>5
    rrt[5].rd=2;
    rrt[5].rt=2;
    rrt[5].rc=3;
    rrt[5].rp=2;
    rrt[5].rpr=6000;
    rrt[5].rf=4;
    rrt[5].rfc=3;
    rrt[5].rpp=2;

    //roots>>6
    rrt[6].rd=2;
    rrt[6].rt=4;
    rrt[6].rc=4;
    rrt[6].rp=5;
    rrt[6].rpr=6100;
    rrt[6].rf=5;
    rrt[6].rfc=3;
    rrt[6].rpp=5;

    //roots>>7
    rrt[7].rd=2;
    rrt[7].rt=2;
    rrt[7].rc=1;
    rrt[7].rp=3;
    rrt[7].rpr=5900;
    rrt[7].rf=2;
    rrt[7].rfc=3;
    rrt[7].rpp=3;

    //roots>>8
    rrt[8].rd=2;
    rrt[8].rt=8;
    rrt[8].rc=2;
    rrt[8].rp=2;
    rrt[8].rpr=6200;
    rrt[8].rf=1;
    rrt[8].rfc=1;
    rrt[8].rpp=2;

    //roots>>9
    rrt[9].rd=3;
    rrt[9].rt=2;
    rrt[9].rc=2;
    rrt[9].rp=5;
    rrt[9].rpr=9000;
    rrt[9].rf=1;
    rrt[9].rfc=3;
    rrt[9].rpp=5;

    //roots>>10
    rrt[10].rd=3;
    rrt[10].rt=4;
    rrt[10].rc=1;
    rrt[10].rp=1;
    rrt[10].rpr=9400;
    rrt[10].rf=1;
    rrt[10].rfc=1;
    rrt[10].rpp=1;

    //roots>>11
    rrt[11].rd=3;
    rrt[11].rt=6;
    rrt[11].rc=3;
    rrt[11].rp=3;
    rrt[11].rpr=9200;
    rrt[11].rf=4;
    rrt[11].rfc=3;
    rrt[11].rpp=3;

    //roots>>12
    rrt[12].rd=3;
    rrt[12].rt=6;
    rrt[12].rc=4;
    rrt[12].rp=4;
    rrt[12].rpr=9300;
    rrt[12].rf=2;
    rrt[12].rfc=3;
    rrt[12].rpp=4;

    //roots>>13
    rrt[13].rd=4;
    rrt[13].rt=1;
    rrt[13].rc=4;
    rrt[13].rp=5;
    rrt[13].rpr=7000;
    rrt[13].rf=5;
    rrt[13].rfc=3;
    rrt[13].rpp=5;

    //roots>>14
    rrt[14].rd=4;
    rrt[14].rt=3;
    rrt[14].rc=1;
    rrt[14].rp=3;
    rrt[14].rpr=7100;
    rrt[14].rf=1;
    rrt[14].rfc=3;
    rrt[14].rpp=3;

    //roots>>15
    rrt[15].rd=4;
    rrt[15].rt=5;
    rrt[15].rc=2;
    rrt[15].rp=2;
    rrt[15].rpr=6800;
    rrt[15].rf=1;
    rrt[15].rfc=3;
    rrt[15].rpp=2;

    //roots>>16
    rrt[16].rd=4;
    rrt[16].rt=7;
    rrt[16].rc=3;
    rrt[16].rp=2;
    rrt[16].rpr=6900;
    rrt[16].rf=2;
    rrt[16].rfc=3;
    rrt[16].rpp=2;

    //roots>>17
    rrt[17].rd=5;
    rrt[17].rt=1;
    rrt[17].rc=3;
    rrt[17].rp=3;
    rrt[17].rpr=6100;
    rrt[17].rf=5;
    rrt[17].rfc=3;
    rrt[17].rpp=3;

    //roots>>18
    rrt[18].rd=5;
    rrt[18].rt=3;
    rrt[18].rc=4;
    rrt[18].rp=4;
    rrt[18].rpr=6700;
    rrt[18].rf=1;
    rrt[18].rfc=3;
    rrt[18].rpp=4;

    //roots>>19
    rrt[19].rd=5;
    rrt[19].rt=5;
    rrt[19].rc=2;
    rrt[19].rp=5;
    rrt[19].rpr=6600;
    rrt[19].rf=3;
    rrt[19].rfc=3;
    rrt[19].rpp=5;

    //roots>>20
    rrt[20].rd=5;
    rrt[20].rt=7;
    rrt[20].rc=1;
    rrt[20].rp=1;
    rrt[20].rpr=5900;
    rrt[20].rf=5;
    rrt[20].rfc=3;
    rrt[20].rpp=1;

    //roots>>21
    rrt[21].rd=6;
    rrt[21].rt=2;
    rrt[21].rc=1;
    rrt[21].rp=3;
    rrt[21].rpr=8900;
    rrt[21].rf=5;
    rrt[21].rfc=2;
    rrt[21].rpp=3;

    //roots>>22
    rrt[22].rd=6;
    rrt[22].rt=4;
    rrt[22].rc=3;
    rrt[22].rp=2;
    rrt[22].rpr=9000;
    rrt[22].rf=4;
    rrt[22].rfc=2;
    rrt[22].rpp=3;

    //roots>>23
    rrt[23].rd=6;
    rrt[23].rt=6;
    rrt[23].rc=2;
    rrt[23].rp=2;
    rrt[23].rpr=9200;
    rrt[23].rf=2;
    rrt[23].rfc=2;
    rrt[23].rpp=2;

    //roots>>24
    rrt[24].rd=6;
    rrt[24].rt=8;
    rrt[24].rc=4;
    rrt[24].rp=5;
    rrt[24].rpr=9500;
    rrt[24].rf=1;
    rrt[24].rfc=1;
    rrt[24].rpp=5;

    chaet[0].cnn=0;
    chaet[0].cfc=0;
    chaet[0].cpr=00;
    chaet[0].ccom=0;

    //CHARTER 01
    chaet[1].cnn=1;
    chaet[1].cfc=2;
    chaet[1].cpr=8000;
    chaet[1].ccom=5;

    //CHARTER 02
    chaet[2].cnn=1;
    chaet[2].cfc=2;
    chaet[2].cpr=9000;
    chaet[2].ccom=5;

    //CHARTER 03
    chaet[3].cnn=3;
    chaet[3].cfc=2;
    chaet[3].cpr=9500;
    chaet[3].ccom=1;

    //CHARTER 04
    chaet[4].cnn=4;
    chaet[4].cfc=2;
    chaet[4].cpr=7500;
    chaet[4].ccom=3;

    //CHARTER 05
    chaet[5].cnn=5;
    chaet[5].cfc=2;
    chaet[5].cpr=7900;
    chaet[5].ccom=5;

    //CHARTER 06
    chaet[6].cnn=6;
    chaet[6].cfc=3;
    chaet[6].cpr=20000;
    chaet[6].ccom=1;

    //cargo 0
    camg[0].ncar=0;
    camg[0].ndc=0;
    camg[0].npr=0;
    //cargo 1
    camg[1].ncar=1;
    camg[1].ndc=1;
    camg[1].npr=12;
    //cargo 2
    camg[2].ncar=2;
    camg[2].ndc=2;
    camg[2].npr=10;
    //cargo 3
    camg[3].ncar=3;
    camg[3].ndc=3;
    camg[3].npr=15;

}
roots()
{
    int vv=0;
    for(vv=0; vv<=def.paroot; vv++)
    {
        strcpy(c[vv].destinp,b[rrt[vv].rd].destin);
        strcpy(c[vv].timep,b[rrt[vv].rt].time);
        strcpy(c[vv].comnp,b[rrt[vv].rc].comn);
        strcpy(c[vv].pname,b[rrt[vv].rp].plane);
        c[vv].pricep=rrt[vv].rpr;
        strcpy(c[vv].foodp,b[rrt[vv].rf].food);
        strcpy(c[vv].facip,b[rrt[vv].rfc].faci);
        c[vv].planep=rrt[vv].rpp;
    }

}
charterf()
{
    for(int vv=0; vv<=def.chpna; vv++)
    {
        strcpy(d[vv].chname,b[chaet[vv].cnn].cname);
        strcpy(d[vv].chfaci,b[chaet[vv].cfc].cfaci);
        d[vv].chprice=chaet[vv].cpr;
        strcpy(d[vv].ccp,b[chaet[vv].ccom].comn);
    }
}
cargof()
{
    for(int vv=0; vv<=def.crcmc; vv++)
    {
        strcpy(e[vv].ccrcm,b[camg[vv].ncar].crcm);
        strcpy(e[vv].crdec,b[camg[vv].ndc].crde);
        e[vv].ccrcprice=camg[vv].npr;
    }
}


passenger()
{
    system("CLS");
    system("COLOR C");
    roots();
    int ab,ac,ad[30],aa,bb[26];
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                DESTINATION                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    for(int i=1; i<=def.padestin; i++)
    {
        printf("\n\t\t\t\t\t%d >> %s\n",i,b[i].destin);
    }
    printf("\n\t\t\t\t\tENTER YOUR DESTINATION CODE :  ");
    scanf("%d",&ab);
    system("CLS");
    system("COLOR C");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              FLIGHTS INFORMATION                              \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\t\t\t\t\tDESTINATION CODE : %d \n",ab);
    printf("\t\t\t\t\tDESTINATION      : %s \n\n",b[ab].destin);
    for(aa=1; aa<=def.paroot; aa++)
    {
        ad[aa]=strcmp(c[aa].destinp,b[ab].destin);
        if(ad[aa]==0)
        {
            bb[aa]=1;
            printf("\t\t\t\t\tCODE        : %d\n",aa);
            printf("\t\t\t\t\tTIME        : %s\n",c[aa].timep);
            printf("\t\t\t\t\tCOMPANY     : %s\n",c[aa].comnp);
            printf("\t\t\t\t\tFOOD        : %s\n",c[aa].foodp);
            printf("\t\t\t\t\tFACILITIES  : %s\n",c[aa].facip);
            printf("\t\t\t\t\tPRICE       : %d TK\n\n",c[aa].pricep);
        }
    }
    printf("\n\t\t\t\t\tENTER YOURT FAVORITE FLIGHTS CODE : ");
    scanf("%d",&ac);
    tx[tt].rr=ac;
    for(int i=1; i<=def.paroot; i++)
    {
        if(bb[ac]==1)
        {
            cplane(c[ac].timep,c[ac].destinp,c[ac].comnp,c[ac].foodp,c[ac].facip,c[ac].planep,c[ac].pricep);
        }
        else
        {
            printf("\n TRY AGAIN \n");
            passenger();
        }
    }
}
charter()
{
    system("CLS");
    charterf();
    int aa,bb,cc;
    char ab[40];
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              CHARTER AIRLINES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    for(int i=1; i<=def.chpna; i++)
    {
        printf("\t\t\t\t\tCODE         : %d\n",i);
        printf("\t\t\t\t\tCHARTER NAME : %s\n",d[i].chname);
        printf("\t\t\t\t\tFACILITIES   : %s\n",d[i].chfaci);
        printf("\t\t\t\t\tPRICE        : %d TK(PER HOUR)\n",d[i].chprice);
        printf("\t\t\t\t\tCOMPANY      : %s\n\n",d[i].ccp);
    }
    printf("\n\n\t\t\t\tENTER YOUR CHOICE >> ");
    scanf("%d",&aa);
    tx[tt].ccc=aa;
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              CHARTER AIRLINES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\t\t\t\t\tCHARTER NAME: %s\n",d[aa].chname);
    printf("\t\t\t\t\tFACILITIES  : %s\n",d[aa].chfaci);
    printf("\t\t\t\t\tPRICE       : %d TK(PER HOUR)\n",d[aa].chprice);
    printf("\t\t\t\t\tCOMPANY     : %s\n\n",d[aa].ccp);
    printf("\n\n\t\t\t\t\tENTER STARTING TIME(AM) :  ");
    scanf("%d",&cc);
    tx[tt].st=cc;
    printf("\n\n\t\t\t\t\tENTER HOW MANY HOUR  :  ");
    scanf("%d",&bb);
    tx[tt].hmh=bb;
    printf("\n\n\t\t\t\t\tENTER PICKUP AREA :  ");
    scanf("%s",&ab);
    strcpy(tx[tt].piac,ab);
    savingcharter(d[aa].chname,d[aa].chfaci,d[aa].ccp,d[aa].chprice,bb,ab,cc);
}
cargo()
{
    cargof();
    char f[20];
    char to[20];
    system("CLS");
    system("COLOR E");
    int a,b,d,g,h;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                               CARGO AIRLINES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t\tCHOOSE COMPANY ");
    for(int i=1; i<=def.crcmc; i++)
    {
        printf("\n\n\t\t\t\tCODE      : %d\n",i);
        printf("\t\t\t\tCOMPANY   : %s\n",e[i].ccrcm);
        printf("\t\t\t\tPRICE     : (DISTENCE X WET X %d)\n",e[i].ccrcprice);
    }
    printf("\n\t\t\t\tENTER YOUR CHOICE :");
    scanf("%d",&h);
    tx[tt].carcs=h;
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                 FROM  /  TO                              \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\tCOMPANY      : %s\n",e[h].ccrcm);
    printf("\t\t\t\tPRICE        : (DISTENCE X WET X %d)\n\n",e[h].ccrcprice);
    printf("\n\t\t\t\tFROM : \n");
    for(int i=1; i<=def.ccde; i++)
    {
        printf("\t\t\t\t%d : %s \n",i,e[i].crdec);
    }
    printf("\n\t\t\t\tENTER YOUR CHOICE :");
    scanf("%d",&a);
    printf("\n\t\t\t\tFROM : %s\n",e[a].crdec);
    printf("\n\t\t\t\tTO  : \n");
    for(int i=1; i<=def.ccde; i++)
    {
        if(i!=a)
        {
            printf("\t\t\t\t%d : %s\n",i,e[i].crdec);
        }
    }
    printf("\n\t\t\t\tENTER YOUR CHOICE :");
    scanf("%d",&b);
    printf("\n\t\t\t\tTO : %s \n",e[b].crdec);
    strcpy(f,e[a].crdec);
    strcpy(to,e[b].crdec);
    if((a==1)&&(b==2))
    {
        d=244;
    }
    else if((a==1)&&(b==3))
    {
        d=240;
    }
    else if((a==2)&&(b==3))
    {
        d=244;
    }
    else if((a==2)&&(b==1))
    {
        d=377;
    }
    else if((a==3)&&(b==1))
    {
        d=240;
    }
    else if((a==3)&&(b==2))
    {
        d=370;
    }

    getch();
    savecargo(e[h].ccrcm,e[h].ccrcprice,d,f,to);
}


adding()
{
    system("CLS");
    int n;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                ADDING PANEL                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t 1. ROOT\n");
    printf("\t\t\t\t 2. TIME\n");
    printf("\t\t\t\t 3. COMPANY\n");
    printf("\t\t\t\t 4. FOOD\n");
    printf("\t\t\t\t 5. PASSENGER FACILITIES\n");
    printf("\t\t\t\t 6. CARGO COMPANY\n");
    printf("\t\t\t\t 7. CHARTER FACILITIES\n");
    printf("\t\t\t\t 8. FLIGHTS DESTINATION\n");
    printf("\t\t\t\t 9. CHARTER FLIGHTS\n");
    printf("\t\t\t\t 10.<--\n");
    printf("\t\t\t\t ENTER YOUR CHOICE :");
    scanf("%d",&n);
    if(n==1)
    {
        system("CLS");
        addroot();
    }
    else if(n==2)
    {
        system("CLS");
        addtime();
    }
    else if(n==3)
    {
        system("CLS");
        addcom();
    }
    else if(n==4)
    {
        system("CLS");
        addfood();
    }
    else if(n==5)
    {
        system("CLS");
        addfaci();
    }
    else if(n==6)
    {
        system("CLS");
        addcc();
    }
    else if(n==7)
    {
        system("CLS");
        addCF();
    }
    else if(n==8)
    {
        system("CLS");
        adddis();
    }
    else if(n==9)
    {
        system("CLS");
        addfCTF();
    }
    else if(n==10)
    {

        adminp();
    }
    else
    {
        printf("\n\t\t\t\tWRONG CHOICE!!!!\n\t\t\t\tTRY AGAIN ....\n");
        getch();
        adding();
    }
}
addcom()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                ADDING COMPANY                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int ibb=def.company,ib,j,k;
    printf("\n\n\t\t\t\tHOW MANY COMPANY DO YOU WANT TO ADD: ");
    scanf("%d",&j);
    ib=ibb;
    k=j+ib;
    for(ib=ibb+1; ib<=k; ib++)
    {
        printf("\n\t\t\t\tENTER COMPANY NAME :  ");
        scanf("%s",b[ib].comn);
        def.company++;
    }
    pro();
    mro();
    getch();
    adminp();
}
addtime()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                ADDING TIME                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int ibb=def.patime,ib,j,k;
    printf("\n\n\t\t\t\tHOW MANY TIME DO YOU WANT TO ADD: ");
    scanf("%d",&j);
    ib=ibb;
    k=j+ib;
    for(ib=ibb+1; ib<=k; ib++)
    {
        printf("\n\t\t\t\tENTER TIME :  ");
        scanf("%s",&b[ib].time);
        def.patime++;
    }
    pro();
    mro();
    getch();
    adminp();
}
addfood()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              ADDING FOOD LIST                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int ibb=def.pafood,ib,j,k;
    printf("\n\n\t\t\t\tHOW MANY FOOD LIST YOU WANT TO ADD: ");
    scanf("%d",&j);
    ib=ibb;
    k=j+ib;
    for(ib=ibb+1; ib<=k; ib++)
    {
        printf("\n\t\t\t\tENTER FOOD LIST :  ");
        scanf("%s",&b[ib].food);
        def.pafood++;
    }
    pro();
    mro();
    getch();
    adminp();
}
addfaci()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              ADDING FACILITIES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int ibb=def.pafaci,ib,j,k;
    printf("\n\n\t\t\t\tHOW MANY FACILITIES YOU WANT TO ADD: ");
    scanf("%d",&j);
    ib=ibb;
    k=j+ib;
    for(ib=ibb+1; ib<=k; ib++)
    {
        printf("\n\t\t\t\tENTER FACILITIES :  ");
        scanf("%s",&b[ib].faci);
        def.pafaci++;
    }
    getch();
    adminp();
}
addroot()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                 ADDING ROOT                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int v,u,w,x,xxx;
    int xx=def.paroot,y,z,k;
    printf("\n\n\t\t\t\tHOW MANY ROOT YOU WANT TO ADD: ");
    scanf("%d",&k);
    y=xx;
    z=k+y;
    for(y=xx+1; y<=z; y++)
    {
        def.paroot++;
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                             CHOOSE DESTINATION                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.padestin; ib++)
        {
            printf("\n\t\t\t\t%d. DESTINATION : %s\n",ib,b[ib].destin);
        }
        printf("\n\t\t\t\tENTER DESTINATION CODE :  ");
        scanf("%d",&w);
        rrt[y].rd=w;
        strcpy(c[y].destinp,b[w].destin);
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                 CHOOSE TIME                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.patime; ib++)
        {
            printf("\n\t\t\t\t%d. TIME : %s\n",ib,b[ib].time);
        }
        printf("\n\t\t\t\tENTER TIME CODE :  ");
        scanf("%d",&u);
        rrt[y].rt=u;
        strcpy(c[y].timep,b[u].time);
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                               CHOOSE COMPANY                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.company; ib++)
        {
            printf("\n\t\t\t\t%d. COMPANY : %s\n",ib,b[ib].comn);
        }
        printf("\n\t\t\t\tENTER COMPANY CODE :  ");
        scanf("%d",&v);
        rrt[y].rc=v;
        strcpy(c[y].comnp,b[v].comn);
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                 CHOOSE PLANE                                \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.pplane; ib++)
        {
            printf("\n\t\t\t\t%d. PLANE : %s\n",ib,b[ib].plane);
        }
        printf("\n\t\t\t\tENTER PLANE CODE :  ");
        scanf("%d",&c[y].planep);
        rrt[y].rp=c[y].planep;
        rrt[y].rpp=c[y].planep;
        strcpy(c[y].pname,b[c[y].planep].plane);
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                    PRICE                                \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        printf("\n\t\t\t\tENTER PRICE :  ");
        scanf("%d",&c[y].pricep);
        rrt[y].rpr=c[y].pricep;
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                  CHOOSE FOOD                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.pafood; ib++)
        {
            printf("\n\t\t\t\t%d. FOOD : %s\n",ib,b[ib].food);
        }
        printf("\n\t\t\t\tENTER FOOD CODE :  ");
        scanf("%d",&x);
        rrt[y].rf=x;
        strcpy(c[y].foodp,b[x].food);
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                              CHOOSE FACILITIES                              \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.pafaci; ib++)
        {
            printf("\n\t\t\t\t%d. FACILITIES : %s\n",ib,b[ib].faci);
        }
        printf("\n\t\t\t\tENTER FACILITIES CODE :  ");
        scanf("%d",&xxx);
        rrt[y].rfc=xxx;
        strcpy(c[y].facip,b[xxx].faci);
    }
    rrot();
    viewfilerr();
    pro();
    mro();
    getch();
    adminp();
}
adddis()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              ADDING DESTINATION                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int ibb=def.padestin,ib,j,k;
    printf("\n\n\t\t\t\tHOW MANY DESTINATION DO YOU WANT TO ADD: ");
    scanf("%d",&j);
    ib=ibb;
    k=j+ib;
    for(ib=ibb+1; ib<=k; ib++)
    {
        printf("\n\t\t\t\tENTER DESTINATION :  ");
        scanf("%s",&b[ib].destin);
        def.padestin++;
    }
    pro();
    mro();
    getch();
    adminp();
}
addcc()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                             ADDING CARGO COMPANY                           \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int ibb=def.crcmc,ib,j,k;
    printf("\n\n\t\t\t\tHOW MANY CARGO COMPANY DO YOU WANT TO ADD: ");
    scanf("%d",&j);
    ib=ibb;
    k=j+ib;
    for(ib=ibb+1; ib<=k; ib++)
    {
        printf("\n\t\t\t\tENTER CARGO COMPANY NAME :  ");
        scanf("%s",&b[ib].crcm);
        camg[ib].ncar=ib;
        printf("\n\t\t\t\tENTER PRICE TAG          :  ");
        scanf("%d",&e[ib].ccrcprice);
        camg[ib].npr=e[ib].ccrcprice;
        def.crcmc++;
    }
    charr();
    viewfilecrrg();
    pro();
    mro();
    getch();
    adminp();
}
addCF()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                          ADDING CHARTER FACILITIES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int ibb=def.chfaci,ib,j,k;
    printf("\n\n\t\t\t\tHOW CHARTER FACILITIES DO YOU WANT TO ADD: ");
    scanf("%d",&j);
    ib=ibb;
    k=j+ib;
    for(ib=ibb+1; ib<=k; ib++)
    {
        printf("\n\t\t\t\tENTER CHARTER FACILITIES :  ");
        scanf("%s",&b[ib].cfaci);
        def.chfaci++;
    }
    pro();
    mro();
    getch();
    adminp();
}
addfCTF()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                               ADDING CHARTER                           \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int ibb=def.crcmc,ib,j,k;
    printf("\n\n\t\t\t\tHOW MANY CHARTER DO YOU WANT TO ADD: ");
    scanf("%d",&j);
    ib=ibb;
    k=j+ib;
    for(ib=ibb+1; ib<=k; ib++)
    {
        int x,v;
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                    NAME                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        printf("\n\t\t\t\tENTER CHARTER NAME :  ");
        scanf("%s",&b[ib].cname);
        chaet[ib].cnn=ib;
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                               CHOOSE COMPANY                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int bC=1; bC<=def.company; bC++)
        {
            printf("\n\t\t\t\t%d. COMPANY : %s\n",bC,b[bC].comn);
        }
        printf("\n\t\t\t\tENTER COMPANY CODE :  ");
        scanf("%d",&v);
        chaet[ib].ccom=v;
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                              CHOOSE FACILITIES                              \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int bC=1; bC<=def.chfaci; bC++)
        {
            printf("\n\t\t\t\t%d. FACILITIES : %s\n",bC,b[bC].cfaci);
        }
        printf("\n\t\t\t\tENTER FACILITIES CODE :  ");
        scanf("%d",&x);
        chaet[ib].cfc=x;
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                    PRICE                                \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        printf("\n\t\t\t\tENTER PRICE :  ");
        scanf("%d",&d[ib].chprice);
        chaet[ib].cpr=d[ib].chprice;
        def.crcmc++;
    }
    chatt();
    viewfilecrr();
    pro();
    mro();
    getch();
    adminp();
}


editing()
{
    system("CLS");
    int n;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                EDITING PANEL                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t 1. ROOT\n");
    printf("\t\t\t\t 2. TIME\n");
    printf("\t\t\t\t 3. COMPANY\n");
    printf("\t\t\t\t 4. FOOD\n");
    printf("\t\t\t\t 5. PASSENGER FACILITIES\n");
    printf("\t\t\t\t 6. CARGO COMPANY\n");
    printf("\t\t\t\t 7. CHARTER FACILITIES\n");
    printf("\t\t\t\t 8. DESTINATION\n");
    printf("\t\t\t\t 9. CHARTER FLIGHTS\n");
    printf("\t\t\t\t10.<--\n");
    printf("\t\t\t\t\t ENTER YOUR CHOICE :");
    scanf("%d",&n);
    if(n==2)
    {
        system("CLS");
        if(def.patime==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        else
        {
             edittime();
        }

    }
    else if(n==3)
    {
        system("CLS");
        if(def.company==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        else
        {
             editcompany();
        }

    }
    else if(n==4)
    {
        system("CLS");
        if(def.pafood==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        else
        {
            editfood();
        }

    }
    else if(n==5)
    {
        system("CLS");
        if(def.pafaci==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        else
        {
            editfaci();
        }

    }
    else if(n==6)
    {
        system("CLS");
        if(def.crcmc==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        else
        {
            editcargocompany();
        }
    }
    else if(n==1)
    {
        system("CLS");
        if(def.paroot==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        else
        {
            editroots();
        }
    }
    else if(n==7)
    {
        system("CLS");
        if(def.chfaci==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        else
        {
            editcfaci();
        }
    }
    else if(n==8)
    {
        system("CLS");
        if(def.padestin==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        else
        {
            editDES();
        }

    }
    else if(n==9)
    {
        system("CLS");
        if(def.chpna==0)
        {
           printf("\n\t\t\t\t NO DATA ");
        }
        else
        {
            editcf();
        }

    }
    else if(n==10)
    {
        adminp();
    }
    else
    {
        printf("\n\t\t\t\tWRONG CHOICE!!!\n\t\t\t\tTRY AGAIN....\n");
        getch();
        editing();
    }
}
editcompany()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                EDITING COMPANY                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.company; ib++)
    {
        printf("\n\t\t\t\t %d.COMPANY  >>%s\n",ib,b[ib].comn);

    }
    printf("\n\t\t\t\tWHICH COMPANY DO YOU WANT TO EDIT ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW NAME >>");
    scanf("%s",&b[j].comn);
    pro();
    mro();
    getch();
    adminp();

}
edittime()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                EDITING TIME                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.patime; ib++)
    {
        printf("\n\t\t\t\t>%d TIME >>%s\n",ib,b[ib].time);
    }
    printf("\n\t\t\t\tWHICH TIME DO YOU WANT TO EDIT :  ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW TIME>>");
    scanf("%s",&b[j].time);
    pro();
    mro();
    getch();
    adminp();
}
editfood()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                EDITING FOOD                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.pafood; ib++)
    {
        printf("\n\t\t\t\t>%d FOOD LIST >>%s\n",ib,b[ib].food);
    }
    printf("\n\t\t\t\tWHICH FOOD LIST DO YOU WANT TO EDIT : ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW FOOD LIST >>");
    scanf("%s",&b[j].food);
    pro();
    mro();
    getch();
    adminp();
}
editfaci()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              EDITING FACILITIES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.pafaci; ib++)
    {
        printf("\n\t\t\t\t>%d FACILITIES >>%s\n",ib,b[ib].faci);
    }
    printf("\n\t\t\t\tWHICH FACILITIES YOU WANTS TO EDIT: ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW FACILITIES >>");
    scanf("%s",&b[j].faci);
    pro();
    mro();
    getch();
    adminp();
}
editcfaci()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                          EDITING CHARTER FACILITIES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.chfaci; ib++)
    {
        printf("\n\t\t\t\t>%d CHARTER FACILITIES >>%s\n",ib,b[ib].cfaci);
    }
    printf("\n\t\t\t\tWHICH CHARTER FACILITIES YOU WANTS TO EDIT: ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW CHARTER FACILITIES >>");
    scanf("%s",&b[j].cfaci);
    pro();
    mro();
    getch();
    adminp();
}
editcargocompany()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                            EDITING CARGO COMPANY                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.crcmc; ib++)
    {
        printf("\n\t\t\t\t>%d CARGO COMPANY  >>%s\n",ib,b[ib].crcm);
    }
    printf("\n\t\t\t\tWHICH CARGO COMPANY DO YOU WANT TO EDIT : ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW CARGO COMPANY NAME >>");
    scanf("%s", b[j].crcm);
    printf("\n\t\t\t\tNEW PRICE TAG >>");
    scanf("%d",&e[j].ccrcprice);
    camg[j].npr=e[j].ccrcprice;
    charr();
    viewfilecrrg();
    pro();
    mro();
    getch();
    adminp();
}
editroots()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                EDITING ROOT                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int v,u,w,x;
    int n,y,z,k;
    printf("\n\t\t\t\tWHICH ROOT YOU WANT TO CHANGE  : ");
    scanf("%d",&y);
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                EDITING ROOT                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\tDESTINATION >> %s",c[y].destinp);
    printf("\n\t\t\t\tTIME        >> %s",c[y].timep);
    printf("\n\t\t\t\tCOMPANY     >> %s",c[y].comnp);
    printf("\n\t\t\t\tFLIGHT NAME >> %s",c[y].pname);
    printf("\n\t\t\t\tPRICE       >> %d",c[y].pricep);
    printf("\n\t\t\t\tFOOD        >> %s",c[y].foodp);
    printf("\n\t\t\t\tFACILITIES  >> %s\n",c[y].facip);

    printf("\n\n\n\t\t\t\tEWHAT YOU WANT TO CHANGE  :  ");
    printf("\n\t\t\t\t1.TIME   ");
    printf("\n\t\t\t\t2.COMPANY   ");
    printf("\n\t\t\t\t3.PLANE   ");
    printf("\n\t\t\t\t4.PRICE   ");
    printf("\n\t\t\t\t5.FOOD  ");
    printf("\n\t\t\t\t6.FACILITIES   ");
    printf("\n\t\t\t\t6.DESTINATION   ");
    printf("\n\t\t\t\t8.<--  \n\n");
    printf("\n\t\t\t\t>>>>  ");
    scanf("%d",&n);
    if(n==1)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                 CHOOSE TIME                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.patime; ib++)
        {
            printf("\n\t\t\t\t%d. TIME : %s\n",ib,b[ib].time);
        }
        printf("\n\t\t\t\tENTER TIME CODE :  ");
        scanf("%d",&u);
        rrt[y].rt=u;
    }
    else if(n==2)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                               CHOOSE COMPANY                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.company; ib++)
        {
            printf("\n\t\t\t\t%d. COMPANY : %s\n",ib,b[ib].comn);
        }
        printf("\n\t\t\t\tENTER COMPANY CODE :  ");
        scanf("%d",&v);
        rrt[y].rc=v;
    }
    else if(n==3)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                 CHOOSE PLANE                                \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.pplane; ib++)
        {
            printf("\n\t\t\t\t%d. PLANE : %s\n",ib,b[ib].plane);
        }
        printf("\n\t\t\t\tENTER PLANE CODE :  ");
        scanf("%d",&c[y].planep);
        rrt[y].rp=c[y].planep;
        rrt[y].rpp=c[y].planep;
    }
    else if(n==4)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                    PRICE                                \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        printf("\n\t\t\t\tENTER PRICE :  ");
        scanf("%d",&c[y].pricep);
        rrt[y].rp=c[y].pricep;
    }
    else if(n==5)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                  CHOOSE FOOD                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.pafood; ib++)
        {
            printf("\n\t\t\t\t%d. FOOD : %s\n",ib,b[ib].food);
        }
        printf("\n\t\t\t\tENTER FOOD CODE :  ");
        scanf("%d",&x);
        rrt[y].rf=x;
    }
    else if(n==6)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                              CHOOSE FACILITIES                              \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.pafaci; ib++)
        {
            printf("\n\t\t\t\t%d. FACILITIES : %s\n",ib,b[ib].faci);
        }
        printf("\n\t\t\t\tENTER FACILITIES CODE :  ");
        scanf("%d",&x);
        rrt[y].rfc=x;
    }
    else if(n==7)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                             CHOOSE DESTINATION                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.padestin; ib++)
        {
            printf("\n\t\t\t\t%d. DESTINATION : %s\n",ib,b[ib].destin);
        }
        printf("\n\t\t\t\tENTER DESTINATION CODE :  ");
        scanf("%d",&w);
        rrt[y].rd=w;
    }
    else if(n==8)
    {
        editing();
    }
    else
    {
        printf("\n\t\t\t\tWRONG CHOICE!!!\n\t\t\t\tTRY AGAIN....\n");
        getch();
        editroots();
    }
    rrot();
    viewfilerr();
    roots();

    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              AFTER EDITING ROOT                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\tDESTINATION >> %s",c[y].destinp);
    printf("\n\t\t\t\tTIME        >> %s",c[y].timep);
    printf("\n\t\t\t\tCOMPANY     >> %s",c[y].comnp);
    printf("\n\t\t\t\tFLIGHT NAME >> %s",c[y].pname);
    printf("\n\t\t\t\tPRICE       >> %d",c[y].pricep);
    printf("\n\t\t\t\tFOOD        >> %s",c[y].foodp);
    printf("\n\t\t\t\tFACILITIES  >> %s\n",c[y].facip);
    pro();
    mro();
    getch();
    adminp();

}
editcf()
{
    int j,ib,N;
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                           EDITING CHARTER FLIGHTS                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\tWHICH CHARTER DO YOU WANTS TO EDIT : ");
    scanf("%d",&ib);
    printf("\n\t\t\t\tCHARTER NAME       : %s\n",b[ib].cname);
    printf("\n\t\t\t\tCHARTER FACILITIES : %s\n",b[ib].cfaci);
    printf("\n\t\t\t\tCHARTER PRICE      : %s\n",e[ib].ccrcprice);
    getch();
    printf("\n\t\t\t\tWHAT YOU WANTS TO EDIT  : ");
    printf("\n\t\t\t\t1.COMPANY NAME   ");
    printf("\n\t\t\t\t2.CHARTER FACILITIES  ");
    printf("\n\t\t\t\t3.CHARTER PRICE ");
    scanf("%d",&N);
    if(N==1)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                   COMPANY                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int bC=1; bC<=def.company; bC++)
        {
            printf("\n\t\t\t\t%d. COMPANY : %s\n",bC,b[bC].comn);
        }
        int v;
        printf("\n\t\t\t\tENTER COMPANY CODE :  ");
        scanf("%d",&v);
        chaet[ib].ccom=v;
    }
    else if(N==2)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                 FACILITIES                              \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int bC=1; bC<=def.chfaci; bC++)
        {
            printf("\n\t\t\t\t%d. FACILITIES : %s\n",bC,b[bC].cfaci);
        }
        int x;
        printf("\n\t\t\t\tENTER FACILITIES CODE :  ");
        scanf("%d",&x);
        chaet[ib].cfc=x;

    }
    else if(N==3)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                    PRICE                                \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        printf("\n\t\t\t\tENTER PRICE :  ");
        scanf("%d",&d[ib].chprice);
        chaet[ib].cpr=d[ib].chprice;

    }
    else if(N==4)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                  CHARTER NAME                                \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        printf("\n\t\t\t\tENTER NEW NAME :  ");
        scanf("%s",&b[ib].cname);
    }
    else
    {
        printf("\n\t\t\t\tWRONG CHOICE!!!!\n\t\t\t\tTRY AGAIN ....\n");
        getch();
        editcf();
    }
    chatt();
    viewfilecrr();
    pro();
    mro();
    getch();
    adminp();
    for(int ib=1; ib<=def.chpna; ib++)
    {
        printf("\n\t\t\t\t%d. PLANE : %s\n",ib,b[ib].cname);
    }
    getch();
}
editDES()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              EDITING DESTINATION                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.padestin; ib++)
    {
        printf("\n\t\t\t\t>%d >>%s\n",ib,b[ib].destin);
    }
    printf("\n\t\t\t\tWHICH DESTINATION DO YOU WANT TO EDIT :  ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW DESTINATION>>");
    scanf("%s",&b[j].destin);
    pro();
    mro();
    getch();
    adminp();
}
aboutus()
{
    char ch1[80]="  BANGLADESH UNIVERCITY OF BUSINESS AND TECHNOLOGY (BUBT)\n";
    char ch2[50]="                     TEAM : BLACK PANDA \n";
    char ch3[80]="       PROJECT TOPIC : AIRLINES TICKET SERVICE MANAGEMENT";
    char ch4[50]="             COURSE TEACHER : MEER MUTTAKIN ALAM ";
    char ch5[50]=" \t\t\t TEAM : 01 ";
    char ch6[80]=" \n\n\t LEADER\t\t\t\t\t         MEMBER 01 \t\t\t\t     MEMBER 02 ";
    char ch7[80]=" \n   NAME  : ANUPAM KUMAR\t\t\t\t    NAME  : MD. AL EMAM\t\t\t\tNAME  : FARHAN ISRAQ ";
    char ch8[80]=" \n   ID    : 19202103261 \t\t\t\t    ID    : 19202103242\t\t\t\tID    : 19202103272 ";
    char cha[80]=" \n   MOBILE: 01736181068 \t\t\t\t    MOBILE: 01776607982\t\t\t\tMOBILE: 01744227109 ";
    char chb[125]=" \n   EMAIL : anupomkumar60607@gmail.com               EMAIL : aryansuvo017@gmail.com\t\tEMAIL : farhaneshraksamin@gmail.com";
    char ch9[80]=" Plot # 77-78, Road # 9, Rupnagar R/A Mirpur-2 Dhaka, 1216";
    system("CLS");
    printf("\n\n\n\t\t\t\t");
    for(int i=1; i<=65; i++)
    {
        printf("%c",ch1[i]);
        usleep(4000);
    }
    printf("\n\t\t\t\t");
    for(int i=1; i<=60; i++)
    {
        printf("%c",ch9[i]);
        usleep(4000);
    }
    printf("\n\t\t\t\t");
    for(int i=0; i<58; i++)
    {
        printf("_");
        usleep(40);
    }
    printf("\n\n\t\t\t\t");
    for(int i=1; i<=50; i++)
    {
        printf("%c",ch2[i]);
        usleep(4000);
    }
    printf("\n\t\t\t\t");
    for(int i=1; i<=70; i++)
    {
        printf("%c",ch3[i]);
        usleep(4000);
    }
    printf("\n\n\n\t\t\t\t");
    for(int i=1; i<=50; i++)
    {
        printf("%c",ch4[i]);
        usleep(4000);
    }
    printf("\n\n\t\t\t\t");
    for(int i=1; i<=40; i++)
    {
        printf("%c",ch5[i]);
        usleep(4000);
    }
    printf("\n\t\t\t\t\t\t\t");
    for(int i=0; i<=10; i++)
    {
        printf("_");
        usleep(40);
    }

    for(int i=1; i<=80; i++)
    {
        printf("%c",ch6[i]);
        usleep(4000);
    }

    for(int i=1; i<=80; i++)
    {
        printf("%c",ch7[i]);
        usleep(4000);
    }

    for(int i=1; i<=80; i++)
    {
        printf("%c",ch8[i]);
        usleep(4000);
    }
    for(int i=1; i<=80; i++)
    {
        printf("%c",cha[i]);
        usleep(4000);
    }
    for(int i=1; i<=125; i++)
    {
        printf("%c",chb[i]);
        usleep(4000);
    }
}



ori()
{
    fileM=fopen("information.txt","w");
    for (int i=0; i<=19; i++)
    {
        b[i].plane;
        b[i].comn;
        b[i].time;
        b[i].food;
        b[i].faci;
        b[i].destin;
        b[i].cname;
        b[i].cfaci;
        b[i].crcm;
        b[i].crde;
        fwrite(&b[i],sizeof(b[i]),1,fileM);
    }
    fclose(fileM);
    viewfile22();

}
pro()
{
    PP=fopen("information.txt","w");
    for (int i=0; i<=19; i++)
    {
        b[i].plane;
        b[i].comn;
        b[i].time;
        b[i].food;
        b[i].faci;
        b[i].destin;
        b[i].cname;
        b[i].cfaci;
        b[i].crcm;
        b[i].crde;
        fwrite(&b[i],sizeof(b[i]),1,PP);
    }
    fclose(PP);
}
mro()
{
    MM=fopen("informationmac.txt","w");
    def.company;
    def.patime;
    def.pafood;
    def.pafaci;
    def.padestin;
    def.paroot;
    def.pplane;
    def.chpna;
    def.chfaci;
    def.crcmc;
    def.ccde;
    fwrite(&def,sizeof(def),1,MM);
    printf("\n\n\t\t\t\t\tOPERATION DONE ");
    fclose(MM);
}
mac()
{
    fileMC=fopen("informationmac.txt","wb");
    def.company;
    def.patime;
    def.pafood;
    def.pafaci;
    def.padestin;
    def.paroot;
    def.pplane;
    def.chpna;
    def.chfaci;
    def.crcmc;
    def.ccde;
    fwrite(&def,sizeof(def),1,fileMC);
    fclose(fileMC);
}
ddd()
{
    char ep[10]= {"EMPTY"};
    for(int i=0; i<=100; i++)
    {
        strcpy(tx[i].fn1,ep);
        strcpy(tx[i].ln1,ep);
        strcpy(tx[i].pass1,ep);
        strcpy(tx[i].gen1,ep);
        tx[i].a=0;
        strcpy(tx[i].fn2,ep);
        strcpy(tx[i].ln2,ep);
        strcpy(tx[i].pass2,ep);
        strcpy(tx[i].gen2,ep);
        tx[i].b=0;
        strcpy(tx[i].fn3,ep);
        strcpy(tx[i].ln3,ep);
        strcpy(tx[i].pass3,ep);
        strcpy(tx[i].gen3,ep);
        tx[i].c=0;
        strcpy(tx[i].mail,ep);
        tx[i].rr=0;
        tx[i].HMT = 0;
        strcpy(tx[i].fnc,ep);
        strcpy(tx[i].lnc,ep);
        strcpy(tx[i].passc,ep);
        strcpy(tx[i].genc,ep);
        strcpy(tx[i].mailc,ep);
        tx[i].ccc=0;
        tx[i].st=0;
        tx[i].hmh=0;
        strcpy(tx[i].piac,ep);

        strcpy(tx[i].ffn,ep);
        strcpy(tx[i].fln,ep);
        strcpy(tx[i].fgen,ep);
        strcpy(tx[i].fmail,ep);

        strcpy(tx[i].rfn,ep);
        strcpy(tx[i].rln,ep);
        strcpy(tx[i].rgen,ep);
        strcpy(tx[i].rmail,ep);

        strcpy(tx[i].ty,ep);
        tx[i].carcs=0;
        tx[i].dist=0;
        tx[i].wtt=0;
        strcpy(tx[i].fro,ep);
        strcpy(tx[i].oto,ep);
    }
}
rrot()
{
    Pf=fopen("rootinfo.txt","wb");
    for (int i=0; i<=def.paroot; i++)
    {
        rrt[i].rd;
        rrt[i].rt;
        rrt[i].rc;
        rrt[i].rp;
        rrt[i].rpr;
        rrt[i].rf;
        rrt[i].rfc;
        rrt[i].rpp;
        fwrite(&rrt[i],sizeof(rrt[i]),1,Pf);
    }
    fclose(Pf);
}
chatt()
{
    Pc=fopen("charterinfo.txt","wb");
    for (int i=0; i<=def.chpna; i++)
    {
        chaet[i].cnn;
        chaet[i].cfc;
        chaet[i].cpr;
        chaet[i].ccom;
        fwrite(&chaet[i],sizeof(chaet[i]),1,Pc);
    }
    fclose(Pc);
}
charr()
{
    Pca=fopen("cargoinfo.txt","wb");
    for (int i=0; i<=def.crcmc; i++)
    {
        camg[i].ncar;
        camg[i].ndc;
        camg[i].npr;
        fwrite(&camg[i],sizeof(camg[i]),1,Pca);
    }
    fclose(Pca);
}


tupgr()
{
    //tc=fopen("ticketinfo.txt","r");
    if(tc==NULL)
    {
        system("CLS");
        printf("\n\n\t\t\t\t\tFIRST YOU NEED TO PURCHASE ATLEAST 1 TICKET");
        getch();
        user();
    }
    else if(tx[tt].HMT>=3)
    {
        printf("\n\n\t\t\t\t\tYOU CAN'T BUY MORE TICKET FROM THIS ACCOUNT \n");
        usleep(900000);
        user();
    }
    else
    {
        passenger();
    }
}
tdel()
{
    system("CLS");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                       DELETE TICKET                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t1. PASSENGER TICKET\n");
    printf("\n\t\t\t\t2. CHARTER TICKET\n");
    printf("\n\t\t\t\t3. CARGO TICKET\n");
    printf("\n\t\t\t\t4. PREVIOUS PAGE\n");
    printf("\n\t\t\t\t>> ");
    int N;
    char ep[10]="EMPTY";
    scanf("%d",&N);
    if(N==1)
    {
        system("CLS");
        int i;
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       DELETE TICKET                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\t\t\t\tYOU HAVE %d TICKET \n\n",tx[tt].HMT);
        if(tx[tt].HMT!=0)
        {

            if(strcmp(tx[tt].gen1,ep)!=0)
            {
                printf("\n\n\t\t\t\tTICKET NO         : 1\n");
                printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
                printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
                printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen1);
                printf("\t\t\t\tSIT NO            : %d \n",tx[tt].a);
            }
            if(strcmp(tx[tt].gen2,ep)!=0)
            {
                printf("\n\n\t\t\t\tTICKET NO         : 2\n");
                printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn2,tx[tt].ln2);
                printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass2);
                printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen2);
                printf("\t\t\t\tSIT NO            : %d \n",tx[tt].b);
            }
            if(strcmp(tx[tt].gen3,ep)!=0)
            {
                printf("\n\n\t\t\t\tTICKET NO         : 3\n");
                printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn3,tx[tt].ln3);
                printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass3);
                printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen3);
                printf("\t\t\t\tSIT NO            : %d \n\n",tx[tt].c);
            }

            printf("\n\n\t\t\t\tWHICH TICKET DO YOU WANT TO DELETE >>");
            scanf("%d",&i);
            if(i==1)
            {
                if(strcmp(tx[tt].gen1,ep)!=0)
                {
                    strcpy(tx[tt].fn1,ep);
                    strcpy(tx[tt].ln1,ep);
                    strcpy(tx[tt].pass1,ep);
                    strcpy(tx[tt].gen1,ep);
                    tx[tt].a=0;
                    tx[tt].HMT--;
                }
                else
                {
                    printf("\n\n\t\t\t\tWRONG TICKET NO , PLEASE ENTER CORRECT TICKET NO \n\n");
                    getch();
                    tdel();
                }
            }
            else if(i==2)
            {
                if(strcmp(tx[tt].gen2,ep)!=0)
                {
                    strcpy(tx[tt].fn2,ep);
                    strcpy(tx[tt].ln2,ep);
                    strcpy(tx[tt].pass2,ep);
                    strcpy(tx[tt].gen2,ep);
                    tx[tt].b=0;
                    tx[tt].HMT--;
                }
                else
                {
                    printf("\n\n\t\t\t\tWRONG TICKET NO , PLEASE ENTER CORRECT TICKET NO \n\n");
                    getch();
                    tdel();
                }
            }
            else if(i==3)
            {
                if(strcmp(tx[tt].gen3,ep)!=0)
                {
                    strcpy(tx[tt].fn3,ep);
                    strcpy(tx[tt].ln3,ep);
                    strcpy(tx[tt].pass3,ep);
                    strcpy(tx[tt].gen3,ep);
                    tx[tt].c=0;
                    tx[tt].HMT--;
                }
                else
                {
                    printf("\n\n\t\t\t\tWRONG TICKET NO , PLEASE ENTER CORRECT TICKET NO \n\n");
                    getch();
                    tdel();
                }
            }
            else
            {
                printf("\n\n\t\t\t\tWRONG TICKET NO , PLEASE ENTER CORRECT TICKET NO \n\n");
                getch();
                tdel();
            }


            printf("\n\n\t\t\t\tYOUR %d NO TICKET DELETE SUCCESSFULLY ",i);
            if(tx[tt].HMT==0)
            {
                tx[tt].rr=0;
                strcpy(tx[tt].mail,ep);
            }
            getch();
            savetic();
            user();
        }
        getch();
        tdel();

    }
    else if(N==2)
    {
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       DELETE TICKET                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        if(strcmp(tx[tt].genc,ep)!=0)
        {
            int ch;
            system("CLS");
            printf("                               '''''''''''''''''''''''''''''''                       \n");
            printf("                                        CHARTER TICKET                               \n");
            printf("                               '''''''''''''''''''''''''''''''                       \n\n");
            printf("\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
            printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fnc,tx[tt].lnc);
            printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].passc);
            printf("\t\t\t\tGENDER            : %s \n\n",tx[tt].genc);
            printf("\t\t\t\tHOUR              : %d\n",tx[tt].hmh);
            printf("\t\t\t\tSTARTING TIME     : %d (AM)\n",tx[tt].st);
            printf("\t\t\t\tFROM              : %s \n",tx[tt].piac);
            printf("\t\t\t\tCOMPANY           : %s \n",d[tx[tt].ccc].ccp);
            printf("\t\t\t\tCHARTER NAME      : %s\n",d[tx[tt].ccc].chname);
            printf("\t\t\t\tFACILITIES        : %s\n\n",d[tx[tt].ccc].chfaci);
            printf("\n\n\t\t\t\tTICKET CODE       : %d\n",tt);
            getch();
            printf("\n\n\t\t\t\t\tAre You sure to delete your charter ticket?\n\n");
            printf("\t\t\t\t\t        1. YES            2.NO              ");
            printf("\n\n\t\t\t\t\tEnter Choice:");
            scanf("%d", &ch);
            if(ch==1)
            {
                strcpy(tx[tt].fnc,ep);
                strcpy(tx[tt].lnc,ep);
                strcpy(tx[tt].passc,ep);
                strcpy(tx[tt].genc,ep);
                strcpy(tx[tt].mailc,ep);
                tx[tt].ccc=0;
                tx[tt].st=0;
                tx[tt].hmh=0;
                strcpy(tx[tt].piac,ep);
                printf("\n\n\t\t\t\tYOUR CHARTER TICKET DELETE SUCCESSFULLY ");
                getch();
                savetic();
                user();
            }
            else
            {
                user();
            }
        }
        else
        {
            printf("\n\n\t\t\t\tYOU HAVE NO CHARTER TICKET\n ");
            getch();
            tdel();
        }


    }
    else if(N==3)
    {
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       DELETE TICKET                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        if(strcmp(tx[tt].fgen,ep)!=0)
        {
            int ch;
            system("CLS");
            printf("                               '''''''''''''''''''''''''''''''                       \n");
            printf("                                             CARGO                              \n");
            printf("                               '''''''''''''''''''''''''''''''                       \n\n");
            printf("\n\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
            printf("\n\t\t\t\t\tSENDER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",tx[tt].ffn,tx[tt].fln,tx[tt].fgen);
            printf("\t\t\t\tMAIL ADDRESS   : %s\n\n",tx[tt].fmail);
            printf("\n\t\t\t\t\tRECEIVER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",tx[tt].rfn,tx[tt].rln,tx[tt].rgen);
            printf("\t\t\t\tMAIL ADDRESS   : %s\n\n",tx[tt].rmail);
            printf("\t\t\t\tWET            : %d\n",tx[tt].wtt);
            printf("\t\t\t\tDESTENCE       : %d\n",tx[tt].dist);
            printf("\t\t\t\tTYPE           : %s\n",tx[tt].ty);
            printf("\t\t\t\tFROM           : %s \n\t\t\t\tTO             : %s \n\t\t\t\tCOMPANY        : %s \n",tx[tt].fro,tx[tt].oto,e[tx[tt].carcs].ccrcm);
            printf("\n\n\t\t\t\tTICKET CODE       : %d\n",tt);
            getch();
            printf("\n\n\t\t\t\t\tAre You sure to delete your CARGO APPLICATION ?\n\n");
            printf("\t\t\t\t\t        1. YES            2.NO              ");
            printf("\n\n\t\t\t\t\tEnter Choice:");
            scanf("%d", &ch);
            if(ch==1)
            {
                strcpy(tx[tt].ffn,ep);
                strcpy(tx[tt].fln,ep);
                strcpy(tx[tt].fgen,ep);
                strcpy(tx[tt].fmail,ep);

                strcpy(tx[tt].rfn,ep);
                strcpy(tx[tt].rln,ep);
                strcpy(tx[tt].rgen,ep);
                strcpy(tx[tt].rmail,ep);

                strcpy(tx[tt].ty,ep);
                tx[tt].carcs=0;
                tx[tt].dist=0;
                tx[tt].wtt=0;
                strcpy(tx[tt].fro,ep);
                strcpy(tx[tt].oto,ep);
                printf("\n\n\t\t\t\tYOUR CARGO APPLICATION DELETE SUCCESSFULLY ");
                getch();
                savetic();
                user();
            }
            else
            {
                user();
            }
        }
        else
        {
            printf("\n\n\t\t\t\tYOU HAVE NO CARGO TICKET\n ");
            getch();
            tdel();

        }
    }
    else if(N==4)
    {
        user();
    }
    else
    {
        printf("\n\t\t\t\tWRONG CHOICE!!!!\n\t\t\t\tTRY AGAIN ....\n");
        getch();
        tdel();
    }
}
deleteaccount()
{
    system("CLS");
    int ch;
    adf=fopen("adinfo.txt","r");
    char dd[30]="DELETED74545,";
    if(adf==NULL)
    {
        printf("\n\n\n\n\n\t\t\t\t\tYOU HAVE NO ACCOUNT");
        getch();
        admin();
    }
    else
    {
        system("CLS");
        printf("\t\t                               ''''''''''''''''''''''''''                       \n");
        printf("\t\t                                       ATTENTION                               \n");
        printf("\t\t                               ''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\t\tARE YOU SURE TO DELETE YOUR ACCOUNT ?\n\n");
        printf("\t\t\t\t\t              1. YES            2.NO              ");
        printf("\n\n\t\t\t\t\tENTER CHOICE:");
        scanf("%d", &ch);
        if(ch==1)
        {
            adf=fopen("adinfo.txt", "w");
            strcpy(v.adfn,dd);
            strcpy(v.adln,dd);
            strcpy(v.adgender,dd);
            strcpy(v.admail,dd);
            strcpy(v.aduser,dd);
            strcpy(v.adpass,dd);
            v.adday=0;
            v.admonth=0;
            v.adyear=0;
            fwrite(&v, sizeof(v), 1, adf);
            system("CLS");
            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
            usleep(400000);
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
            system("CLS");
            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
            usleep(400000);
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
            system("CLS");
            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
            usleep(400000);
            for(int i=0; i<15; i++)
            {
                printf(". ");
                usleep(40000);
            }
            system("CLS");
            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t_____ ACCOUNT DELETED SUCCESSFULLY _____");
            fclose(adf);
            getch();
            admin();
        }
        else if(ch==2)
        {
            adgeneral();
        }
        else
        {
            printf("\n\n\t\t\t\t\tWRONG CHOICE\n\n\t\t\t\t\tTRY AGAIN");
            getch();
            deleteaccount();
        }
    }
}



reade()
{
    FILE*mb;
    mb=fopen("prro.txt","r");
    fread(&ss[tt],sizeof(ss[tt]),1,mb);
    ss[tt].a;
    ss[tt].b;
    ss[tt].c;
    fclose(mb);
}
writ(int A[])
{
    FILE*m;
    m=fopen("prro.txt","w");
    if(m==NULL)
    {
        printf("\t\t\t\tFILE DOES NOT EXIST.");
    }
    else
    {
        for(int i=0 ; i<=sizeof(A); i++)
        {
            if(A[i]!=0)
            {
                fwrite(&A[i],sizeof(A[i]),1,m);
            }
        }
    }
    fclose(m);
    reade();
}


singpass()
{
    system("CLS");
    char ep[10]="EMPTY";
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        PASSENGER TICKET                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    if(tx[tt].HMT!=0)
    {
        printf("\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
        if(strcmp(tx[tt].gen1,ep)!=0)
        {
            printf("\n\n\t\t\t\tTICKET NO         : 1\n");
            printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
            printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
            printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen1);
            printf("\t\t\t\tSIT NO            : %d \n",tx[tt].a);
        }
        if(strcmp(tx[tt].gen2,ep)!=0)
        {
            printf("\n\n\t\t\t\tTICKET NO         : 2\n");
            printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn2,tx[tt].ln2);
            printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass2);
            printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen2);
            printf("\t\t\t\tSIT NO            : %d \n",tx[tt].b);
        }
        if(strcmp(tx[tt].gen3,ep)!=0)
        {
            printf("\n\n\t\t\t\tTICKET NO         : 3\n");
            printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn3,tx[tt].ln3);
            printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass3);
            printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen3);
            printf("\t\t\t\tSIT NO            : %d \n\n",tx[tt].c);
        }
        printf("\n\t\t\t\tDESTINATION       : %s \n",c[tx[tt].rr].destinp);
        printf("\t\t\t\tFLIGHT TIME       : %s \n",c[tx[tt].rr].timep);
        printf("\t\t\t\tCOMPANY           : %s \n",c[tx[tt].rr].comnp);
        printf("\t\t\t\tFLIGHT NAME       : %s \n",c[tx[tt].rr].pname);
        printf("\t\t\t\tFACILITIES        : %s\n",c[tx[tt].rr].facip);
        printf("\t\t\t\tFOOD              : %s\n",c[tx[tt].rr].foodp);
        printf("\n\n\t\t\t\tTICKET CODE       : %d\n",tt);

    }
    else
    {
        printf("\n\n\t\t\t\t YOU HAVE NO TICKET \n");
    }

    getch();
    user();
}
singchar()
{
    char ep[30]="EMPTY";
    system("CLS");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        CHARTER TICKET                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    if(strcmp(tx[tt].genc,ep)!=0)
    {
        printf("\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fnc,tx[tt].lnc);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].passc);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].genc);
        printf("\t\t\t\tHOUR           : %d\n",tx[tt].hmh);
        printf("\t\t\t\tSTARTING TIME  : %d (AM)\n",tx[tt].st);
        printf("\t\t\t\tFROM           : %s \n",tx[tt].piac);
        printf("\t\t\t\tCOMPANY        : %s \n",d[tx[tt].ccc].ccp);
        printf("\t\t\t\tCHARTER NAME   : %s\n",d[tx[tt].ccc].chname);
        printf("\t\t\t\tFACILITIES     : %s\n",d[tx[tt].ccc].chfaci);
        printf("\n\n\t\t\t\tTICKET CODE       : %d\n",tt);

    }
    else
    {
        printf("\n\n\t\t\t\tYOU HAVE NO CHARTER TICKET\n");
    }

    getch();
    user();
}
singcar()
{
    char ep[30]="EMPTY";
    system("CLS");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                             CARGO                              \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
     if(strcmp(tx[tt].genc,ep)!=0)
    {
    printf("\n\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    printf("\n\t\t\t\t\tSENDER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",tx[tt].ffn,tx[tt].fln,tx[tt].fgen);
    printf("\t\t\t\tMAIL ADDRESS   : %s\n\n",tx[tt].fmail);
    printf("\n\t\t\t\t\tRECEIVER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",tx[tt].rfn,tx[tt].rln,tx[tt].rgen);
    printf("\t\t\t\tMAIL ADDRESS   : %s\n\n",tx[tt].rmail);
    printf("\t\t\t\tWET            : %d\n",tx[tt].wtt);
    printf("\t\t\t\tDESTENCE       : %d\n",tx[tt].dist);
    printf("\t\t\t\tTYPE           : %s\n",tx[tt].ty);
    printf("\t\t\t\tFROM           : %s \n\t\t\t\tTO             : %s \n\t\t\t\tCOMPANY        : %s \n",tx[tt].fro,tx[tt].oto,e[tx[tt].carcs].ccrcm);
    printf("\n\n\t\t\t\tTICKET CODE       : %d\n",tt);
    }
    else
    {
        printf("\n\n\t\t\t\tYOU HAVE NO CHARTER TICKET\n");
    }
    getch();
    user();
}
singview()
{
    system("CLS");
    int DD;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                      VIEW YOUR TICKET                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t\t 1.PASSENGER TICKET\n");
    printf("\t\t\t\t\t 2.CHARTER TICKET\n");
    printf("\t\t\t\t\t 3.CARGO TICKET\n");
    printf("\n\t\t\t\t\t ENTER YOUR CHOICE: ");
    scanf("%d",&DD);
    switch(DD)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        singpass();
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        singchar();
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        singcar();
        break;

    default:
        printf("\n\n\t\t\t\t\tWRONG CHOICE!!\n\n\t\t\t\t\tENTER CORRECT OPTION..\n");
        getch();
        singview();
        break;
    }
}



singpass1()
{
    system("CLS");
    char ep[10]="EMPTY";
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        PASSENGER TICKET                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    int t;
    printf("\n\n\t\t\t\tENTER YOUR TICKET CODE         : >>");
    scanf("%d",&t);
    system("CLS");
    printf("\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    if(strcmp(tx[t].gen1,ep)!=0)
    {
        printf("\n\n\t\t\t\tTICKET NO         : 1\n");
        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[t].fn1,tx[t].ln1);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[t].pass1);
        printf("\t\t\t\tGENDER            : %s \n",tx[t].gen1);
        printf("\t\t\t\tSIT NO            : %d \n",tx[t].a);
    }
    if(strcmp(tx[t].gen2,ep)!=0)
    {
        printf("\n\n\t\t\t\tTICKET NO         : 2\n");
        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[t].fn2,tx[t].ln2);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[t].pass2);
        printf("\t\t\t\tGENDER            : %s \n",tx[t].gen2);
        printf("\t\t\t\tSIT NO            : %d \n",tx[t].b);
    }
    if(strcmp(tx[t].gen3,ep)!=0)
    {
        printf("\n\n\t\t\t\tTICKET NO         : 3\n");
        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[t].fn3,tx[t].ln3);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[t].pass3);
        printf("\t\t\t\tGENDER            : %s \n",tx[t].gen3);
        printf("\t\t\t\tSIT NO            : %d \n\n",tx[t].c);
    }
    printf("\n\t\t\t\tDESTINATION       : %s \n",c[tx[t].rr].destinp);
    printf("\t\t\t\tFLIGHT TIME       : %s \n",c[tx[t].rr].timep);
    printf("\t\t\t\tCOMPANY           : %s \n",c[tx[t].rr].comnp);
    printf("\t\t\t\tFLIGHT NAME       : %s \n",c[tx[t].rr].pname);
    printf("\t\t\t\tFACILITIES        : %s\n",c[tx[t].rr].facip);
    printf("\t\t\t\tFOOD              : %s\n",c[tx[t].rr].foodp);
    getch();
    adminp();
}
singchar1()
{
    system("CLS");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        CHARTER TICKET                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    int t;
    printf("\n\n\t\t\t\tENTER YOUR TICKET CODE         : >>");
    scanf("%d",&t);
    system("CLS");
    printf("\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[t].fnc,tx[t].lnc);
    printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[t].passc);
    printf("\t\t\t\tGENDER            : %s \n",tx[t].genc);
    printf("\t\t\t\tHOUR           : %d\n",tx[t].hmh);
    printf("\t\t\t\tSTARTING TIME  : %d (AM)\n",tx[t].st);
    printf("\t\t\t\tFROM           : %s \n",tx[t].piac);
    printf("\t\t\t\tCOMPANY        : %s \n",d[tx[t].ccc].ccp);
    printf("\t\t\t\tCHARTER NAME   : %s\n",d[tx[t].ccc].chname);
    printf("\t\t\t\tFACILITIES     : %s\n",d[tx[t].ccc].chfaci);
    getch();
    adminp();
}
singcar1()
{
    system("CLS");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                             CARGO                              \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    int t;
    printf("\n\n\t\t\t\tENTER YOUR TICKET CODE         : >>");
    scanf("%d",&t);
    system("CLS");
    printf("\n\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    printf("\n\t\t\t\t\tSENDER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",tx[t].ffn,tx[t].fln,tx[t].fgen);
    printf("\t\t\t\tMAIL ADDRESS   : %s\n\n",tx[t].fmail);
    printf("\n\t\t\t\t\tRECEIVER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",tx[t].rfn,tx[t].rln,tx[t].rgen);
    printf("\t\t\t\tMAIL ADDRESS   : %s\n\n",tx[t].rmail);
    printf("\t\t\t\tWET            : %d\n",tx[t].wtt);
    printf("\t\t\t\tDESTENCE       : %d\n",tx[t].dist);
    printf("\t\t\t\tTYPE           : %s\n",tx[t].ty);
    printf("\t\t\t\tFROM           : %s \n\t\t\t\tTO             : %s \n\t\t\t\tCOMPANY        : %s \n",tx[t].fro,tx[t].oto,e[tx[t].carcs].ccrcm);
    getch();
    adminp();
}



adpro()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                 ADMIN PROFILE                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t        1. VIEW PROFILE");
    printf("\n\t\t\t\t        2. CHANGE PROFILE INFO");
    printf("\n\t\t\t\t        3. SETTING");
    printf("\n\t\t\t\t        4. PREVIOUS PAGE");
    printf("\n\n\t\t\t\t        Enter Choice: ");
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                 ADMIN PROFILE                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        printf("\n\t\t\t\t\tNAME   : %s %s",v.adfn,v.adln);
        printf("\n\t\t\t\t\tGENDER : %s ",v.adgender);
        printf("\n\t\t\t\t\tD.O.B  : %d/%d/%d",v.adday,v.admonth,v.adyear);
        printf("\n\t\t\t\t\tEMAIL  : %s\n\n",v.admail);
        printf("\n\t\t\t\t\tUSERNAME  : %s",v.aduser);
        getch();
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(30);
        }
        adpro();
    }
    else if(n==2)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        ad_pro_info();
    }
    else if(n==3)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        adgeneral();
    }
    else if(n==4)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        adminp();
    }
    else
    {
        printf("\n\t\t\t\tWRONG CHOICE!!!!\n\t\t\t\tTRY AGAIN ....\n");
        getch();
        adpro();
    }
}
uspro()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                 USER PROFILE                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t\tNAME   : %s %s",sr[tt].urfn,sr[tt].urln);
    printf("\n\t\t\t\t\tGENDER : %s ",sr[tt].urgender);
    printf("\n\t\t\t\t\tD.O.B  : %d/%d/%d",sr[tt].urday,sr[tt].urmonth,sr[tt].uryear);
    printf("\n\t\t\t\t\tEMAIL  : %s\n\n",sr[tt].urmail);
    printf("\n\t\t\t\t\tUSERNAME  : %s",sr[tt].userr);
    getch();
    user();
}
srcpro()
{
    int n;
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                 USER PROFILE                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t\tPLESE ENTER TICKET CODE : ");
    scanf("%d",&n);
    printf("\n\t\t\t\t\tNAME   : %s %s",sr[n].urfn,sr[n].urln);
    printf("\n\t\t\t\t\tGENDER : %s ",sr[n].urgender);
    printf("\n\t\t\t\t\tD.O.B  : %d/%d/%d",sr[n].urday,sr[n].urmonth,sr[n].uryear);
    printf("\n\t\t\t\t\tEMAIL  : %s\n\n",sr[n].urmail);
    printf("\n\t\t\t\t\tUSERNAME  : %s",sr[n].userr);
    getch();
    viewing();
}
pb_pro_info()
{
    fpp=fopen("info.txt","w");
    system("CLS");
    int c;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                             CHANGE PROFILE INFO                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\t\t\t\t 1. CHANGE NAME\n");
    printf("\t\t\t\t 2. CHANGE GENDER\n");
    printf("\t\t\t\t 3. CHANGE BIRTH INFO\n");
    printf("\t\t\t\t 4. CHANGE MAIL\n");
    printf("\t\t\t\t 5. CHANGE USER NAME\n");
    printf("\t\t\t\t 6. CHANGE PASSWORD\n");
    printf("\t\t\t\t 7. PREVIOUS PAGE\n");
    printf("\t\t\t\t 8. EXIT\n");
    printf("\n\t\t\t\t ENTER CHOICE: ");
    scanf("%d", &c);
    if(c==1)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       CHANGE NAME                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\t\tSET FIRST NAME    : ");
        scanf("%s",&sr[tt].urfn);
        printf("\n\t\t\t\t\t  SET LAST NAME : ");
        scanf("%s",&sr[tt].urln);
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   . ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". \b\b\b\b");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t____ NAME CHANGED SUCCESSFULLY ____");

    }
    else if(c==2)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       CHANGE GENDER                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\t\tSET GENDER : ");
        scanf("%s",&sr[tt].urgender);
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   . ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". \b\b\b\b");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t____ GENDER CHANGED SUCCESSFULLY ____");
    }
    else if(c==3)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                      CHANGE BIRTH INFO                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\tSET BIRTH DAY-MONTH-YEAR:");
        scanf("%d%d%d",&sr[tt].urday,&sr[tt].urmonth,&sr[tt].uryear);
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   . ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". \b\b\b\b");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t____ BIRTH DATE CHANGED SUCCESSFULLY ____");
    }
    else if(c==4)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       CHANGE MAIL                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\t\tSET NEW MAIL : ");
        scanf("%s",&sr[tt].urmail);
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   . ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". \b\b\b\b");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t____ MAIL CHANGED SUCCESSFULLY ____");
    }
    else if(c==5)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                      CHANGE USER NAME                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\t\tSET USERNAME : ");
        scanf("%s",&sr[tt].userr);
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   . ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". \b\b\b\b");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t____ USERNAME CHANGED SUCCESSFULLY ____");
    }
    else if(c==6)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                      CHANGE PASSWORD                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\t\tSET PASSWORD : ");
        scanf("%s",&sr[tt].passr);
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   . ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". \b\b\b\b");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t. ");
        usleep(400000);
        for(int i=0; i<15; i++)
        {
            printf(". ");
            usleep(40000);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t____ PASSWORD CHANGED SUCCESSFULLY ____");
    }
    else if(c==7)
    {
        user();
    }
    else if(c==8)
    {
      exit(0);
    }

    else
    {
        printf("\n\n\t\t\t\t\tWRONG CHOICE!!\n\n\t\t\t\t\tTRY AGAIN");
        getch();
        pb_pro_info();
    }
    for(int i=0; i<100; i++)
    {
        fread(&sr[i],sizeof(sr[i]),1,fpp);
        sr[i].urfn;
        sr[i].urln;
        sr[i].urgender;
        sr[i].urday;
        sr[i].urmonth;
        sr[i].uryear;
        sr[i].urmail;
        sr[i].userr;
        sr[i].passr;
        sr[i].cor;
    }
    for(int i=0;i<=100;i++)
    {
        fwrite(&sr[i],sizeof(sr[i]),1,fpp);
    }
    fclose(fpp);
}

format()
{
    char NNN[30]="EMPTY";
    for(int i=0; i<=def.paroot; i++)
    {
        strcpy(b[i].plane,NNN);
        strcpy(b[i].comn,NNN);
        strcpy(b[i].time,NNN);
        strcpy(b[i].food,NNN);
        strcpy(b[i].faci,NNN);
        strcpy(b[i].destin,NNN);
        strcpy(b[i].cname,NNN);
        strcpy(b[i].cfaci,NNN);
        strcpy(b[i].crcm,NNN);
        strcpy(b[i].crde,NNN);
    }

    def.company=0;
    def.patime=0;
    def.pafood=0;
    def.pafaci=0;
    def.padestin=0;
    def.paroot=0;
    def.chpna=0;
    def.chfaci=0;
    def.crcmc=0;
    def.pplane=0;
    def.ccde=0;
    pro();
    mro();
    rrot();
    chatt();
    charr();
}

