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
struct user{
    char tel[20];
    int satus;
    int is_staff;
};
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
            //staff();
        }
        
        else if(choice==4){
            exit();
        }
    
    



};
void user(){
    char fname[10];
    char sname[10];
    char tname[10];
    char details[40];
    int option;
    char password[10];
    password==fname;
    printf("Welcome dear user \n");
    printf("Enter 1 for Log in \n enter 2 for add account\n");
    scanf("%d",&option);
    if(option==1){
printf("Enter details to log in\n");

    printf("firstname:");
    scanf("%s",fname);
    printf("secondname:");
    scanf("%s",sname);
    printf("thirdname:");
    scanf("%s",tname); 
    printf(" your name is %s %s %s\n",fname,sname,tname);
    printf("Set password(enter digits more than 4 and less than 10)\n");
    scanf("%d",password);
    
    

    }
    else if(option==2){

    }
    

};
void staff(){
    printf("1. Add book\n");
    printf("2. delete book\n");
    printf("3. edit book\n");
    printf("4. lend book\n");
    printf("5. Add book\n");
    printf("6. mark returned book\n");
    printf("7. fine user if the book is returned late \n");
    printf("8. limit the number of books a user can borrow at a time to 3\n");
    printf("9. mark a book as reserved\n");



};
//this is the code for the administrator
void admin(){
    int pinadmin=1234;
    printf("Enter password\n");
    scanf("%d",&pinadmin);
    if(pinadmin=1234){
    printf("1.Add staff\n");
    printf("1.delete user\n");


    }

};
void exit(){
    printf("Thank you for visiting us \n");
    _sleep(5000);
    exit(0);
};
int main(){
    action();
   /* printf("\t\t\t\t\t\t\t COUNTY LIBRARY MANAGEMENT SYSTEM \n\n");
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
            //staff();
        }
        
        else if(choice==4){
            exit();
        }
    
    
*/
    return 0;

}