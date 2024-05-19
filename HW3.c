#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void seat(char arr[10][10]){
    int R,C,i;
    arr[0][0]='\\';
    for(i=1;i<=9;i++){
        arr[i][0]='0'+10-i;
        arr[0][i]='0'+i;
    }
    for(R=0;R<10;R++){
        for(C=0;C<10;C++){
            printf("%c",arr[R][C]);
        }
        printf("\n");
    }
}

int main(void){
    int i,j,password,t=0,R,C,choice,attempt;
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

    for(R=1;R<=9;R++){
        for(C=1;C<=9;C++){
            arr[R][C]='-';
        }
    }
    srand(time(NULL));
    for(i=1;i<=10;i++){
        arr[rand()%9+1][rand()%9+1]='*';
    }

    do{
        printf(" ________________________\n");
        printf("|a. Available seats       |\n");
        printf("|b. Arrange for you       |\n");
        printf("|c. Choose by yourself    |\n");
        printf("|d. Exit                  |\n");
        printf("|________________________|\n");
        printf("�п�J�@�Ӧr��\n");
        scanf(" %c",&ch);
        fflush(stdin);

        if(ch=='A'||ch=='a'){
            system("CLS");
            for(R=0;R<10;R++){
	            for(C=0;C<10;C++){
	                if(arr[R][C]=='@'){
					arr[R][C]='*';
					}
				}
			}
            seat(arr);
            system("PAUSE");
            system("CLS");
        }
		else if(ch=='B'||ch=='b'){
            system("CLS");
            printf("�аݻݭn�X�Ӯy��(1~4)?\n");
            scanf("%d",&choice);
            fflush(stdin);
            if(choice>=1&&choice<=4){
                if(choice<=3){
                    while(1){
                        int row=rand()%9+1;
                        int col=rand()%(10-choice);
                        int usable=1;
                        for(i=col;i<col+choice;i++){
                            if(arr[row][i]=='*'){
                                usable=0;
                                break;
                            }
                        }
                        if(usable){
                            for(i=col;i<col+choice;i++){
                                arr[row][i]='@';
                            }
                            break;
                        }
                    }
                }
				else{
                    int found=0;
                    for(attempt=0;attempt<100;attempt++){
                        int row=rand()%9+1;
                        int col=rand()%(10-choice);
                        int usable=1;
                        for(i=col;i<col+choice;i++){
                            if(arr[row][i]=='*'){
                                usable=0;
                                break;
                            }
                        }
                        if(usable){
                            for(i=col;i<col+choice;i++){
                                arr[row][i]='@';
                            }
                            found=1;
                            break;
                        }
                    }
                    if(!found){
                        while(1){
                            int row=rand()%9+1;
                            int col=rand()%8+1;
                            int usable=1;
                            for(i=0;i<2;i++){
                                for(j=col;j<col+2;j++){
                                    if(arr[row+i][j]=='*'){
                                        usable=0;
                                        break;
                                    }
                                }
                                if(!usable)break;
                            }
                            if(usable){
                                for(i=0;i<2;i++){
                                    for(j=col;j<col+2;j++){
                                        arr[row+i][j]='@';
                                    }
                                }
                                break;
                            }
                        }
                    }
                }
            }
            seat(arr);
            for(R=0;R<10;R++){
	            for(C=0;C<10;C++){
	                if(arr[R][C]=='@'){
					arr[R][C]='*';
					}
				}
			}
            system("PAUSE");
            system("CLS");
        }
		else if(ch=='C'||ch=='c'){
            system("CLS");
            seat(arr);
            while(1){
                printf("�п�J��ܪ��y�� (�榡: ��-�C)\n");
                if(scanf("%d-%d",&R,&C)!=2){
                    printf("�L�Ī���J�A�Э��s��J\n");
                    fflush(stdin);
                    continue;
                }
                fflush(stdin);
                if(R>=1&&R<=9&&C>=1&&C<=9){
                    if(arr[10-R][C]=='-'){
                        arr[10-R][C]='@';
                        printf("�٦��n��ܶ�? (y/n)\n");
                        scanf(" %c",&yn);
                        fflush(stdin);
                        if(yn=='y'||yn=='Y'){
                            continue;
                        }
						else if(yn=='n'||yn=='N'){
                            seat(arr);
                            for(R=0;R<10;R++){
	           	 				for(C=0;C<10;C++){
					                if(arr[R][C]=='@'){
									arr[R][C]='*';
									}
								}
							}
                            system("PAUSE");
                            break;
                        }
						else{
                            printf("�Э��s��J\n");
                        }
                    }
					else{
                        printf("�L�Ī��y��ήy��w�Q��ܡA�Э��s��J\n");
                    }
                }
				else{
                    printf("�L�Ī��y��ήy��w�Q��ܡA�Э��s��J\n");
                }
            }
            system("CLS");
        }
		else if(ch=='D'||ch=='d'){
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
        }
		else{
            printf("�п�Ja�Bb�Bc��d\n");
            system("PAUSE");
            system("CLS");
        }
    }while(1);
    return 0;
}

