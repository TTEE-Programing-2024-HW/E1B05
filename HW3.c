#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <time.h> 

void seat(char arr[10][10]){
    int R,C,i;
    arr[0][0]='\\';
    for(i=1;i<=9;i++) {
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

void rand_(char arr[10][10]){
	int R,C,i;

}

void rand_seat(char arr[10][10]){
	int count=0;
	while(count<10){
	int x=rand()%10+1;
	int y=rand()%10+1;
	if(arr[x][y]!='*'){
		arr[x][y]='*';
		count++;
	}
	int i,j;
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			if(arr[i][j]=='@'){
				arr[i][j]='-';
				count++;
			}
		}
	}
	}
}

int main(void){
    int i,j,password,t=0,R,C,num,choice;
    char ch,yn;
    char arr[10][10];
    printf("Welcome to my homework\n");
    for(i=20;i>=1;i--){											// 運用巢狀for迴圈製作屬於自己的開場畫面
        for(j=1;j<=i;j++){
            printf("%02d",i);
        }
        printf("\n");
    }
    printf("我是E1B05柯俊宇\n"); 								// 輸出"我是E1B05柯俊宇"
    system("PAUSE");											// 螢幕畫面暫停，並等待使用者按任意鍵
    system("CLS"); 												// 清除螢幕

    while(t<3){ 												// 用while迴圈設置當次數不超過三次時繼續迴圈
        printf("請輸入四位數密碼:\n"); 							// 輸出"請輸入四位數密碼"
        scanf("%d",&password); 									// 輸入"password(密碼)"
        fflush(stdin); 											// 清除緩衝區
        if(password==2024){ 									// 若password是2024
            printf("歡迎光臨\n"); 								// 輸出"歡迎光臨"
            break; 												// 跳離此時while迴圈
        }
		else{ 													// 若不是2024
            printf("%c", '\a'); 								// 發出警示音
            printf("密碼錯誤\n"); 								// 輸出"密碼錯誤"
            t+=1; 												// 次數加一
            if(t>=3){ 											// 若次數大於等於三時
                printf("錯誤三次,掰掰"); 						// 輸出"錯誤三次,掰掰"
                return 0; 										// 結束程式
            }
        }
    }
    system("PAUSE"); 											// 螢幕畫面暫停，並等待使用者按任意鍵
    system("CLS"); 												// 清除畫面

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
    	printf(" ________________________\n");					 // 製作屬於自己的表單樣式
        printf("|a. Available seats       |\n");
        printf("|b. Arrange for you       |\n");
        printf("|c. Choose by yourself    |\n");
        printf("|d. Exit                  |\n");
        printf("|________________________|\n");
        printf("請輸入一個字元\n"); 							// 輸出"請輸入一個字元"
        scanf("%c", &ch);									    // 輸入一字元
        fflush(stdin); 											// 清除緩衝區

        if(ch=='A'||ch=='a'){ 									// 若選選項A時
            system("CLS"); 										// 清除螢幕
            rand_(arr);
            seat(arr);
            system("PAUSE");
            system("CLS");
        }
		else if(ch=='B'||ch=='b'){							    // 若選選項B時
            system("CLS");
            printf("請問需要幾個座位(1~4)?\n");
			scanf("%d",choice);
			fflush(stdin);
			if(choice>=1&&choice<=4){
				rand_seat(arr);
				seat(arr);
			}
        }
		else if(ch=='C'||ch=='c'){
           	system("CLS");
           	seat(arr);
           	while (1) {
            	printf("請輸入選擇的座位 (格式: 行-列)\n");
                scanf("%d-%d",&R,&C);
                fflush(stdin); 									// 清除緩衝區
                if (R>=1&&R<=9&&C>=1&&C<=9){
                	if(arr[10-R][C]=='-'){
                		arr[10-R][C]='@'; 						// 標記選擇的座位
	                    printf("還有要選擇嗎? (y/n)\n");
	                    scanf("%c", &yn);
	                    fflush(stdin); 							// 清除緩衝區
	                    if(yn=='y'||yn=='Y'){
	                    	continue;
						}
	                    if(yn=='n'||yn=='N'){
	                    	seat(arr);	
	                    	for(R=0;R<10;R++){
	                    		for(C=0;C<10;C++){
	                    			if(arr[R][C]=='@'){
									arr[R][C]='*';
								}
								}
							}
	                    	system("pause");							
	                        break;
	                    }
	                    else{
	                    	printf("請重新輸入\n");
	                    	continue;
						}
					}
					else{
	                    printf("無效的座位或座位已被選擇，請重新輸入\n");
	                    getch();
	                }
                }
				else{
                    printf("無效的座位或座位已被選擇，請重新輸入\n");
                    getch();
                }
            }
            system("CLS");
        } 
		else if(ch=='D'||ch=='d'){							// 若選選項D時
            printf("Continue? (y/n)\n"); 						// 輸出"continue?"(詢問是否繼續)
            while(1){
                scanf("%c", &yn);
                fflush(stdin); 									// 清除緩衝區
                if(yn=='y'||yn=='Y'){ 							// 若答案是y或Y則繼續
                    system("CLS");   							// 清除螢幕
                    break;
                }
                if(yn=='n'||yn=='N'){ 							// 若答案為n或N則結束
                    system("CLS"); 								// 清除螢幕
                    printf("謝謝,掰掰\n"); 						// 輸出"謝謝,掰掰"
                    return 0; 									// 結束程式
                }
            }
        } else { 												// 若輸入值不是a、b、c或d
            printf("請輸入a、b、c或d\n");					    // 輸出"請輸入a、b、c或d"
            getch(); 											// 按任一鍵,不回傳回傳值
            system("CLS"); 										// 清除螢幕
        }
    } while (1);										  	    // 若判斷值為1則記鈺迴圈
    system("PAUSE"); 											// 螢幕畫面暫停，並等待使用者按任意鍵
    return 0; 													// 結束程式
}
