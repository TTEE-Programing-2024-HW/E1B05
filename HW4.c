#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Ent(){
	int a,n,i;
	struct man{
		char name[1000];
		int number;
		int math;
		int physics;
		int english;
	};
	struct man student[10];
	printf("�п�J�ݭn��J�X��ǥͪ����Z:");
	scanf("%d",&a);
	while(1){
		if(a>=5&&a<=10){
			for(i=0;i<a;i++){
				printf("�п�J�ǥͩm�W(%d):",i+1);
				scanf("%s",student[i].name);
				while(1){
				printf("�п�J�ǥ;Ǹ�(%d):",i+1);
				scanf("%d",&student[i].number);
					if(student[i].number>100000&&student[i].number<999999){
						break;
					}
					else{
						printf("�Э��s��J!");
						continue;
					}
				}
				while(1){
				printf("�п�J�ǥͼƾǦ��Z(%d):",i+1);
				scanf("%d",&student[i].math);
					if(student[i].math>=0&&student[i].math<=100){
						break;
					}
					else{
						printf("�Э��s��J!");
						continue;
					}
				}
				while(1){
				printf("�п�J�ǥͪ��z���Z(%d):",i+1);
				scanf("%d",&student[i].physics);
					if(student[i].physics>=0&&student[i].physics<=100){
						break;
					}
					else{
						printf("�Э��s��J!");
						continue;
					}
				}
				while(1){
				printf("�п�J�ǥͭ^�妨�Z(%d):",i+1);
				scanf("%d",&student[i].english);
					if(student[i].english>=0&&student[i].english<=100){
						break;
					}
					else{
						printf("�Э��s��J!");
						continue;
					}
				}
				
			}
			break;
		} 
		else {
			printf("�п�J5~10��ǥ�!!!");
			continue;
		}
	}
	
}

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
                return 0;
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
            Ent();
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

