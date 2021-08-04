/*
compiler :C99
Project:Library management
Author:Mark Mwaura
Date:7/19/2021
License:MIT
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int choice;
    //function prototypes used for the program
    void exit(); 
    void admin();
    void user();
    void staff();
    void books();
    void actionMini();
   //the action function that displas the Menu
     void action (){
    printf("\t\t\t\t\t\t\t COUNTY LIBRARY MANAGEMENT SYSTEM \n\n");
    //naviagtion menu
    //loop used for looping when the user makes a mistake
    do{
    printf("\t\t\t\t\t\t\t+******************************+\n");
    printf("\t\t\t\t\t\t\t|            LOG IN AS:        |\n");
    printf("\t\t\t\t\t\t\t|            1.USER            |\n");
    printf("\t\t\t\t\t\t\t|            2.Staff           | \n");    
    printf("\t\t\t\t\t\t\t|            3.Administrator   |\n");
    printf("\t\t\t\t\t\t\t|            4.exit            |\n");
    printf("\t\t\t\t\t\t\t+******************************+\n");
    printf("\t\t\t\t\t\t\t Enter choice :");
    scanf("%d",&choice);
    }while(choice <1 || choice >4);

        if(choice==1){
            user();
        }  
        else if(choice==2){
            staff();
        }
        else if(choice==3){
            admin();
        }
        else if(choice==4){
            exit();
        }
    
    



};
    //this is  a Function for the Admin to add staff
    void actionMini(){
            int option;
            int choice;
            char staffUser[20];
            char staffUser2[20];

            printf("Welcome Titus\n");
            printf("1.Add staff user\n");
            printf("2.delete staff user\n");
            printf("3.Edit staff user\n");
            printf("4.Go to main Menu\n");

            printf("Enter option:");
            scanf("%d",&choice);
            if(choice==1){
                    //this shows the use of files to add staff members
                FILE*fptr;
                fptr = fopen("lib.txt","w");
                printf("Add Staff name:");
                scanf("%s",&staffUser);
                printf("Add second Staff's name:");
                scanf("%s",&staffUser2);
     //after the admin enters info it is now stored in the text file
                fprintf(fptr,"%s",staffUser);
                fprintf(fptr,"%s",staffUser2);
    //closes the text file
                fclose(fptr);

                printf("1 .Go to main menu\n2 for exit\n");
                scanf("%d",&option);
                if(option==1){
                    action();
                }
                else 
                exit();
                }

            else if(choice==2){
                //deletss data from the text file
                remove("library.txt");
                  printf("1 .Go to main menu\n2 for exit\n");
                scanf("%d",&option);
                if(option==1){
                    action();
                }
                else 
                exit();
            }
            else if(choice==3){
                 FILE*fptr;

                 //  this code  appends or changes the content of the file
               fptr = fopen("lib.txt","a");
               printf("Add Staff name:");
               scanf("%s",&staffUser);
               printf("Add second Staff's name:");
               scanf("%s",&staffUser2);
     //after the user enters info it is now stored in the text file
               fprintf(fptr,"%s",staffUser);
               fprintf(fptr,"%s",staffUser2);
    //closes the text file
               fclose(fptr);
                printf("1 .Go to main menu\n2 for exit\n");
                scanf("%d",&option);
                if(option==1){
                    action();
                }
                else 
                exit();
            }
             else if (choice==4)
              printf("1 .Go to main menu\n2 for exit\n");
                scanf("%d",&option);
                if(option==1){
                    action();
                }
                else 
                exit();
        };
    void admin(){

         int option;
        int choice;
        int pin1;
        printf("Enter pin");
        scanf("%d",&pin1);

        if(pin1==1212){
             //if the password is correct it calls the function that displays the menu to the admin
                 actionMini();
        }
        else 
            printf("Wrong password\n");
                    
    };
    //shows the books availbale in the system
    void books (){
        //variables that are used in 
    int option;
    int optionz;
    int counter;
    int bookChoice[5];
    int counter2;
         FILE*fptr;
         fptr=fopen("library.txt","w");
         //it shows the books from the file
         fprintf(fptr ,"1.Harry porter and the deadly hallows by r k rowlingg\n 2.understanding prayer by myles munroe\n 3.Prayer by Apostle Joshua selman\n");
         fclose(fptr);
         printf("Welcome\n");
         printf("This is our list of books avaiable\n");
        //asks how many books the user wants
        printf("How many books do you want?\n");
        scanf("%d",&optionz);
        if(optionz >0 && optionz < 4){
            //it allows the user to choose hwo many books he wants 
    switch(optionz){
        case 1:
        printf("Choose a book\n");
        scanf("%d",&bookChoice[0]);
    //reserving a book
       printf("Sorry but this book is reserved\n");
            break;
            case 2:
             printf("Choose first book\n");
        scanf("%d",&bookChoice[0]);
         printf("Choose second book\n");
        scanf("%d",&bookChoice[1]);
        printf("You have succssesfully borrowed a book from us \n");
       printf("Thank you for using our serivces\n");
        break;
        case 3:
        printf("Choose first book\n");
        scanf("%d",&bookChoice[0]);
         printf("Choose second book\n");
        scanf("%d",&bookChoice[1]);
         printf("Choose third book\n");
        scanf("%d",&bookChoice[2]);
        printf("You have succssesfully borrowed a book from us \n");
       printf("Thank you for using our serivces\n");
        break;
    }
        }
        else {
        printf("You cannot borrow more than 4 boooks\n");
   }
   //it implements fine if the book is returned late
     printf("You are to return the book before 20160 minutes or 2 weeks\n");
        counter=20160;
        do{
            counter--;
        }
        while(counter!=0);
        printf("Your time is over\n");
      //it implements a fine of 1cent every time the user delays 
        counter=1;
        do{
            counter2++;
        }
        while(counter2!=50); 
        //gives user option of going back to the main menu
        do{
        printf("Enter 1 to go back to main menu\n Enter 2 to exit\n");
        scanf("%d",&option);
        if(option==1){
            action();
        }
        else if(option==2){
            exit();
        }
        else {
            printf("INvalid\n");
            printf("Please use 1 or 2\n");
        }

        
        }while(option >2 || option < 1);
        //loop to fine the user if the user exceeds the time
       
      
        counter2=50;
        
    

    };
   void user(){
   int bookChoice[5];
    char fname[10];
    char sname[10];
    char tname[10];
    char details[40];
    int option;
    int password;
        int optionz;
        int phone,id;
    //welcomes the user
    printf("Welcome dear user \n");
    printf("Log in \n");  
    printf("Enter details to log in\n");
    //takes the details of the user
    printf("firstname:");
    scanf("%s",fname);
    printf("secondname:");
    scanf("%s",sname);
    printf("thirdname:");
    scanf("%s",tname); 
    printf(" your name is %s %s %s\n",fname,sname,tname);
    printf("Enter your librarary ID:");
    scanf("%d",&id);

    //validates the password of the user if the password is  correct then it calls the menu function that  shows the list of available books
        if(id==88411){
            int pass=1212;
             printf("Enter password\n");
             scanf("%d",&password);
             if(password==pass){
                 printf("Correct Log in\n");
                 books();
             }   
             else
             printf("Wrong password\n");
        }

   /* fptr=fopen("lib.txt","r");
    char buuk[200];
    while(!feof(fptr)){
        fgets(buuk,200,fptr);
        puts(buuk);
    }
    fclose(fptr);
  */
 FILE*fptr;
    fptr=fopen("library.txt","r");
    char bouk[200];
    while(!feof(fptr)){
        fgets(bouk,200,fptr);
        puts(bouk);
    }
    fclose(fptr);
        

};

//this is a staff function that  defines the workings or functions of a staff  memeber
void staff(){

    //declaration of variables
    int ans;
    char book[10];
    int isbn;
    char name1[15],name2[15],name3[15];
    //char passcode[8];
    int option;
    //menu shown when the function is first run
    printf("1. Add book\n");
    printf("2. delete book\n");
    printf("3. edit book\n");
    printf("4. Add book\n");
    printf("5.Add user\n");
    printf("6.edit user\n");
    printf("7.delete user\n");


    printf("Enter option:");
    scanf("%d",&ans);
    switch(ans){
        case 1:
        char book[15];
   FILE *fptr;

   // Creates a text file in the computer where the information taken is stored
   fptr = fopen("lib.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter book: ");
   scanf("%s",&book);

    //after the user enters info it is now stored in the text file
   fprintf(fptr,"%s",book);
   fprintf(fptr,"%d",isbn);

   //closes the text file
   fclose(fptr);
break;
    //adds users
    case 5:
    
    //FILE*fptr;
    fptr = fopen("lib.txt","w");
    printf("Enter name:");
    scanf("%s",&name1);
    printf("Second Name:");
    scanf("%s",&name2);
    printf("third Name:");
    scanf("%s",&name3);
    printf("Set password for usern\n");
    //scanf("%s",&passcode);
    fprintf(fptr,"%s",name1);
    fprintf(fptr,"%s",name2);
    fprintf(fptr,"%s",name3);
    //fprintf(fptr,"%s",passcode);
    fclose(fptr);
     fgets(name1,15,fptr);
     printf("%s",name1);
    printf("press 1 to Add another user:");
    scanf("%d",&option);
    //if(option==1)
    while(option==1){
          FILE*fptr;
    fptr = fopen("lib.txt","a");
    printf("Enter name:");
    scanf("%s",&name1);
    printf("Second Name:");
    scanf("%s",&name2);
    printf("third Name:");
    scanf("%s",&name3);
    printf("Set password for usern\n");
    //scanf("%s",&passcode);
    fprintf(fptr,"%s\t",name1);
    fprintf(fptr,"%s \t",name2);
    fprintf(fptr,"%s\t",name3);
    //fprintf(fptr,"%s\t",passcode);
    fclose(fptr);
    printf("press 1 to Add another user:");
    scanf("%d",&option);

    }   
    break;        
    }


};

//this is the code for the administrator

void exit(){
    printf("Thank you for visiting us \n");
    
};
    //the main function
int main(){
// function for the navigation men
   action();
    

    return 0;

}