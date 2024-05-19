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
    printf("我是E1B05柯俊宇\n");
    system("PAUSE");
    system("CLS");

    while(t<3){
        printf("請輸入四位數密碼:\n");
        scanf("%d",&password);
        fflush(stdin);
        if(password==2024){
            printf("歡迎光臨\n");
            break;
        }
		else{
            printf("%c",'\a');
            printf("密碼錯誤\n");
            t+=1;
            if(t>=3){
                printf("錯誤三次,掰掰\n");
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
        printf("請輸入一個字元\n");
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
            printf("請問需要幾個座位(1~4)?\n");
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
                printf("請輸入選擇的座位 (格式: 行-列)\n");
                if(scanf("%d-%d",&R,&C)!=2){
                    printf("無效的輸入，請重新輸入\n");
                    fflush(stdin);
                    continue;
                }
                fflush(stdin);
                if(R>=1&&R<=9&&C>=1&&C<=9){
                    if(arr[10-R][C]=='-'){
                        arr[10-R][C]='@';
                        printf("還有要選擇嗎? (y/n)\n");
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
                            printf("請重新輸入\n");
                        }
                    }
					else{
                        printf("無效的座位或座位已被選擇，請重新輸入\n");
                    }
                }
				else{
                    printf("無效的座位或座位已被選擇，請重新輸入\n");
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
                    printf("謝謝,掰掰\n");
                    return 0;
                }
            }
        }
		else{
            printf("請輸入a、b、c或d\n");
            system("PAUSE");
            system("CLS");
        }
    }while(1);
    return 0;
}

