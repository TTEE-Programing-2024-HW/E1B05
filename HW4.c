#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){ 
    int i,j,password,t=0,R,C,choice,num;
    char ch,yn;
    char arr[10][10];
    

    
    printf("Welcome to my homework\n");
    for(i=20;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%02d",i);
        }
        printf("\n");
    }
    printf("�ڬOE1B05�_�T�t\n");
    system("PAUSE");
    system("CLS");

    while(t<3){
        printf("�п�J�|��ƱK�X:\n");
        scanf("%d",&password);
        fflush(stdin);
        if(password==2024){
            printf("�w����{\n");
            break;
        }
		else{
            printf("%c",'\a');
            printf("�K�X���~\n");
            t+=1;
            if(t>=3){
                printf("���~�T��,�T�T\n");
                continue;
            }
        }
    }
    system("PAUSE");
    system("CLS");

    do{
        printf("------------[Grade System]---------- \n");
        printf("|  a. Enter student grades    	   |\n");
        printf("|  b. Display student grades   	   |\n");
        printf("|  c. Search for student grades	   |\n");
        printf("|  d. Grade ranking                |\n");
        printf("|  e. Exit system              	   |\n");
        printf("____________________________________\n");
        printf("�п�J�@�Ӧr��\n");
        scanf(" %c",&ch);
        fflush(stdin);

        if(ch=='A'||ch=='a'){
            system("CLS");
            
            system("PAUSE");
            system("CLS");
        }
		else if(ch=='B'||ch=='b'){
            system("CLS");
            
            system("PAUSE");
            system("CLS");
        }
		else if(ch=='C'||ch=='c'){
            system("CLS");
            
            system("PAUSE");
            system("CLS");
        }
        else if(ch=='D'||ch=='d'){
        	system("CLS");
            
            system("PAUSE");
            system("CLS");
		}
		else if(ch=='E'||ch=='e'){
        	system("CLS");
			printf("Continue? (y/n)\n");
			while(1){
		       scanf(" %c",&yn);
		            fflush(stdin);
		            if(yn=='y'||yn=='Y'){
		                system("CLS");
		                break;
		            }else if(yn=='n'||yn=='N'){
		                system("CLS");
		                printf("����,�T�T\n");
		                return 0;
		            }
		        }
			system("PAUSE");
            system("CLS");
        }
		else{
            printf("�п�Ja�Bb�Bc�Bd��e\n");
            system("PAUSE");
            system("CLS");
        }
    }while(1);
    return 0;
}
