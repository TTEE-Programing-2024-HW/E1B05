#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct man{															//設一個名為man的資料結構 
		char name[1000];
		int number;
		int math;
		int physics;
		int english;
		float average;
	};
struct man student[10];												//宣告一個含有此結構的陣列 

int a=0;
//A選項的副程式(輸入學生資料) 
int Ent(){															
	system("CLS");													//清除螢幕 
	int n,i;
	printf("請輸入需要輸入幾位學生的成績:");
	scanf("%d",&a);
	fflush(stdin);													//清除緩衝區 
	while(1){														//設一個while迴圈限定只能輸入5~10位學生 
		if(a>=5&&a<=10){											//若是5~10之內 
			for(i=0;i<a;i++){										//用for迴圈把每位學生的資料存到陣列李
				//輸入學生姓名			
				printf("請輸入學生姓名(%d):",i+1);
				scanf("%s",student[i].name);
				fflush(stdin);										//清除緩衝區
				//輸入學生學號 
				while(1){
				printf("請輸入學生學號(%d):",i+1);
				scanf("%d",&student[i].number);
				fflush(stdin);										//清除緩衝區
					if(student[i].number>100000&&student[i].number<999999){
						break;
					}
					else{
						printf("請重新輸入!");
						continue;
					}
				}
				//輸入數學成績 
				while(1){
				printf("請輸入學生數學成績(%d):",i+1);
				scanf("%d",&student[i].math);
				fflush(stdin);										//清除緩衝區
					if(student[i].math>=0&&student[i].math<=100){
						break;
					}
					else{
						printf("請重新輸入!");
						continue;
					}
				}
				//輸入學生物理成績 
				while(1){
				printf("請輸入學生物理成績(%d):",i+1);
				scanf("%d",&student[i].physics);
				fflush(stdin);										//清除緩衝區	
					if(student[i].physics>=0&&student[i].physics<=100){
						break;
					}
					else{
						printf("請重新輸入!");
						continue;
					}
				}
				//輸入學生文成績 
				while(1){
				printf("請輸入學生英文成績(%d):",i+1);
				scanf("%d",&student[i].english);
				fflush(stdin);										//清除緩衝區
					if(student[i].english>=0&&student[i].english<=100){
						break;
					}
					else{
						printf("請重新輸入!");
						continue;
					}
				}
				//算出三顆平均 
				student[i].average=(student[i].math+student[i].physics+student[i].english)/3;
			}
			break;
		} 
		else {
			printf("請輸入5~10位學生!!!");
			continue;
		}
	}
	system("PAUSE");												//螢幕畫面停止等待使用者案任一鍵 
    system("CLS");													//清除螢幕 
}
//顯示所有學生資料 
int B(){
	system("CLS");													//清除螢幕
	int i;
	float average[10];
	printf("學生成績如下:\n");
	
	for(i=0;i<a;i++){												//輸出成績陣列 
		printf("姓名: %s, 學號: %d, 數學: %d, 物理: %d, 英文: %d, 平均: %.1f\n",student[i].name,student[i].number,student[i].math,student[i].physics,student[i].english,student[i].average);	
	}
	system("PAUSE");												//螢幕畫面停止等待使用者案任一鍵
    system("CLS");													//清除螢幕
}
//搜尋學生 
int C(){
	system("CLS");													//清除螢幕
	char search[1000];
	int i,found=0;
	printf("請輸入要搜尋的學生姓名:");
	scanf("%s",search);
	fflush(stdin);													//清除緩衝區
	for(i=0;i<a;i++){
		if(strcmp(student[i].name,search)==0){						//若搜尋的名字有在列表內就輸出 
			printf("姓名: %s, 學號: %d, 數學: %d, 物理: %d, 英文: %d, 平均: %.1f\n",student[i].name,student[i].number,student[i].math,student[i].physics,student[i].english,student[i].average);
			found=1;												//並將found值改為1 
		}
		if(found=0){												//若found值為零 
			printf("沒有這個人!");									//輸出找不到這個人 
		}
	}
	system("PAUSE");												//螢幕畫面停止等待使用者案任一鍵
    system("CLS");													//清除螢幕
}

int D(){
	system("CLS");													//清除螢幕
	int i,j,n=0;
	struct man temp;
	for(i=0;i<a-1;i++){												//排序平均由高到低 
        for(j=0;j<a-i-1;j++){
            if(student[j].average<student[j+1].average){
                n++;
				temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
                
            }
        }
    }
    printf("學生成績排名如下:\n");
    for(i=0;i<a;i++){
        printf("姓名: %s, 學號: %d, 平均成績: %.1f\n",student[i].name,student[i].number,student[i].average);
    }
    system("PAUSE");												//螢幕畫面停止等待使用者案任一鍵
    system("CLS");													//清除螢幕
}

int main(void){ 
    int i,j,password,t=0,num;
    char ch,yn;
    char arr[10][10];
    //顯示個人風格畫面 
    printf("Welcome to my homework\n");
    for(i=20;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%02d",i);
        }
        printf("\n");
    }
    printf("我是E1B05柯俊宇\n");
    system("PAUSE");												//螢幕畫面停止等待使用者案任一鍵
    system("CLS");													//清除螢幕
	//輸入密碼，若輸入正確顯示歡迎光臨，若超過三次就結束程式 
    while(t<3){
        printf("請輸入四位數密碼:\n");
        scanf("%d",&password);
        fflush(stdin);												//清除緩衝區
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
    system("PAUSE");												//螢幕畫面停止等待使用者案任一鍵
    system("CLS");													//清除螢幕

    do{
        printf("------------[Grade System]---------- \n");			//列出選單 
        printf("|  a. Enter student grades    	   |\n");
        printf("|  b. Display student grades   	   |\n");
        printf("|  c. Search for student grades	   |\n");
        printf("|  d. Grade ranking                |\n");
        printf("|  e. Exit system              	   |\n");
        printf("____________________________________\n");
        printf("請輸入一個字元\n");
        scanf(" %c",&ch);
        fflush(stdin);												//清除緩衝區

        if(ch=='A'||ch=='a'){
            Ent();
        }
		else if(ch=='B'||ch=='b'){
            B();
        }
		else if(ch=='C'||ch=='c'){
            C();
        }
        else if(ch=='D'||ch=='d'){
            D();
		}
		else if(ch=='E'||ch=='e'){
        	system("CLS");											//清除螢幕
            printf("Continue? (y/n)\n");
			while(1){
		       scanf(" %c",&yn);
		            fflush(stdin);									//清除緩衝區 
		            if(yn=='y'||yn=='Y'){
		                system("CLS");
		                break;
		            }else if(yn=='n'||yn=='N'){
		                system("CLS");
		                printf("謝謝,掰掰\n");
		                return 0;
		            }
		        }
            system("PAUSE");										//螢幕畫面停止等待使用者案任一鍵
            system("CLS");											//清除螢幕
        }
		else{														//若不是a、b、c、d、e其中之一選項 
            printf("請輸入a、b、c、d或e\n");						//提示重新輸入 
            system("PAUSE");										//螢幕畫面停止等待使用者案任一鍵
            system("CLS");											//清除螢幕
        }
    }while(1);
    return 0;
}
//心得:
//這次作業使用到的是這學期實驗課最後教到的資料結構，因為是新學的東西。所以它對我而言比較的不熟悉，但經過這次的作業，讓我對他有了進一步的了解。
//這次的作業對我來說挑戰比以往都來的大，所以我不僅跟同學一起討論，也向ChatGPT詢問了一些內容。最後再將他打成自己的程式，完成這次的作業。這次的作業
//讓我對部分得程式變得更加的熟悉。希望握我的程式語言可以越來越進步。 
