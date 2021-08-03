/*
compiler :c99
Project:Library management
Author:Mark Mwaura
Date:7/19/2021
License:MIT
*/


#include<stdio.h>
#include<stdlib.h>
int choice;
    void exit(); 
    void admin();
    void user();
    void staff();
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
    void admin(){
         
        int choice;
        int pin1;
        printf("Enter pin");
        scanf("%d",&pin1);

        if(pin1==1212){
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

                FILE*fptr;
               fptr = fopen("lib.txt","w");
               printf("Add Staff name:");
               scanf("%s",&staffUser);
               printf("Add second Staff's name:");
               scanf("%s",&staffUser2);
     //after the user enters info it is now stored in the text file
               fprintf(fptr,"%s",staffUser);
               fprintf(fptr,"%s",staffUser2);
    //closes the text file
               fclose(fptr);

            }

            else if(choice==2){
                
            }
            else if(choice==3){
                 FILE*fptr;
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
            }
        else if (choice==4)
            action();
        }









    };
void user(){
   int bookChoice;
    char fname[10];
    char sname[10];
    char tname[10];
    char details[40];
    //int option;
    int password;

    printf("Welcome dear user \n");
    printf("Log in \n");  
    printf("Enter details to log in\n");

    printf("firstname:");
    scanf("%s",fname);
    printf("secondname:");
    scanf("%s",sname);
    printf("thirdname:");
    scanf("%s",tname); 
    printf(" your name is %s %s %s\n",fname,sname,tname);
    //printf("Enter password \n");
    //scanf("%s",&password);
    FILE*fptr;
    fptr=fopen("library.txt","w");
    fprintf(fptr ,"1.Harry porter and the deadly hallows by r k rowlingg\n 2.understanding prayer by myles munroe\n 3.Prayer by Apostle Joshua selman\n");

    fclose(fptr);
        printf("Welcome\n");
        printf("This is our list of books avaiable\n");
   /* fptr=fopen("lib.txt","r");
    char buuk[200];
    while(!feof(fptr)){
        fgets(buuk,200,fptr);
        puts(buuk);
    }
    fclose(fptr);
  */
    fptr=fopen("library.txt","r");
    char bouk[200];
    while(!feof(fptr)){
        fgets(bouk,200,fptr);
        puts(bouk);
    }
    fclose(fptr);
        
        
        
  for (int i = 1; i < 4; ++i)
  {
        printf("Choose a book\n");
        scanf("%d",&bookChoice);
        if(i>3){
            printf("You cannot take more than 3 books\n");
        }
  }
    
        


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
    printf("4. lend book\n");
    printf("5. Add book\n");
    printf("6. mark returned book\n");
    printf("7. fine user if the book is returned late \n");
    printf("8. limit the number of books a user can borrow at a time to 3\n");
    printf("9. mark a book as reserved\n");
    printf("10.Add user\n");
    printf("11.edit user\n");
    printf("12.delete user\n");


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
    
    case 2:
    break; 
    case 3:
    break; 
    case 4:
    break; 
    case 5:
    break;
    case 6:
    break;
    case 7:
    break;
    case 8:
    break;
    case 9:
    break;    
    case 10:
    
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
/*void admin(){
    int pinadmin=1234;
    printf("Enter password\n");
    scanf("%d",&pinadmin);
    if(pinadmin=1234){
    printf("1.Add staff\n");
    printf("1.delete user\n");


    }

};*/
void exit(){
    printf("Thank you for visiting us \n");
   // _sleep(5000);
    
};
int main(){
     printf("\t\t\t\t\t\t\t COUNTY LIBRARY MANAGEMENT SYSTEM \n\n");
//naviagtion menu
    //loop used for looping when the user makes a mistake
    /*do{
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
        
        else if(choice==4){
            exit();
        }
    */
   action();
    

    return 0;

}