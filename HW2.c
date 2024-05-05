#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
int main(void){
	
	int i,j,password,t=0,d=0,e,f,g;
	char ch,yn,a,b,c;
	printf("Welcome to my homework\n");
	for(i=20;i>=1;i--){								//運用巢狀for迴圈製作屬於自己的開場畫面 
		for(j=1;j<=i;j++){	
			printf("%02d",i);
		}
		printf("\n");
	}
	printf("我是E1B05柯俊宇\n");					//輸出"我是E1B05柯俊宇 " 
    system("PAUSE");								//螢幕畫面暫停，並等待使用者按任意鍵
    system("CLS");									//清除螢幕 
    
    while(t<3){										//用while迴圈設置當次數不超過三次時繼續迴圈 
    printf("請輸入四位數密碼:\n");					//輸出"請輸入四位數密碼" 
    fflush(stdin);									//清除緩存 
    scanf("%d",&password);							//輸入"password(密碼)" 
    if(password==2024){								//若password是2024 
    	printf("歡迎光臨\n");						//輸出"歡迎光臨" 
		break;										//跳離此時while迴圈 
	}
	else{											//若不是2024 
		printf("%c",'\a');							//發出警示音 
		printf("密碼錯誤\n");						//輸出"密碼錯誤" 
		t+=1;										//次數加一 
		if(t>=3){									//若次數大於等於三時 
		printf("錯誤三次,掰掰");					//輸出"錯誤三次,掰掰" 
		return 0;									//結束程式 
	}
	}
	}
	system("PAUSE");								//螢幕畫面暫停，並等待使用者按任意鍵
	system("CLS");									//清除畫面 
	
	do{
		printf(" ________________________\n");		//製作屬於自己的表單樣式 
		printf("|a.畫出直角三角形        |\n");
	    printf("|b.顯示乘法表            |\n");
	    printf("|c.結束                  |\n");
		printf("|________________________|\n");
		printf("請輸入一個字元\n");					//輸出"請輸入一個字元" 
		fflush(stdin);								//清除緩存 
	    scanf("%c",&ch);							//輸入一字元 
	    if(ch=='A'||ch=='a'){						//若選選項A時
		while(1){									//利用while迴圈限制輸入值只能在a~n之間 
			system("CLS");							//清除螢幕 
	    	printf("輸入一個a~n的字母:");			//輸出"輸入一個a~n的字母:" 
	    	fflush(stdin);							//清除緩存	
	    	scanf("%c",&a);							// 輸入a值(A選項要求的字母) 
	    	if(a<'a'||a>'n'){						//若輸入的字母不在a~n之間 
	    		printf("錯誤,輸入一個a~n的字母\n");	//輸出"錯誤,輸入一個a~n的字母" 
	    		break;								//跳離迴圈 
			} 
			else{									//若在範圍內 
			for(b=a;b>='a';b--){					//用for迴圈做出直角三角形 
				for(g=b-'a';g>0;g--){
					printf(" ");					//輸出空格,來達到靠右的直角三角形的形狀 
				}
	    		for(c=b;c<=a;c++){
	    			printf("%c",c);
				}
				printf("\n");
			}
			break;	
			}
		}
		getch();									//按任一鍵,不顯示回傳值 
		system("CLS");								//清除螢幕 
		}
		else if(ch=='B'||ch== 'b'){					//若選選項B時 
			printf("請輸入一個1~9的數字:");			//輸出"請輸入一個1~9的數字:"
			fflush(stdin);							//清除緩存 
			scanf("%d",&d);							//輸入d值(選項B要求輸入的數字) 
			if(d<=9&&d>=1){							//若輸入值在1~9之間 
				for(e=1;e<=d;e++){					//利用for迴圈做出乘法表 
					for(f=1;f<=e;f++){
						printf("%d ",e*f);
					}
					printf("\n");
				}
				d=0;								//讓輸入值的起始值變回0 
				getch();							//按任一鍵,不顯示回傳值 
				system("CLS");						//清除螢幕 
			}			 
			else {									//若不在1~9之間 
				printf("輸入錯誤\n");				//輸出"輸入錯誤" 
				system("CLS");						//清除螢幕 
			}
		}
		else if(ch=='C'||ch=='c'){					//若選選項C時	
			printf("Continue?\n");					//輸出"continue?"(詢問是否繼續) 
			scanf("%s",&yn);						//輸入回答 
			if(yn=='y'||yn=='Y'){					//若答案是y或Y則繼續 
				system("CLS");						//清除螢幕 
				continue;							//繼續迴圈 
			}	
			if(yn=='n'||yn=='N'){					//若答案為n或N則結束 
				system("CLS");						//清除螢幕 
				printf("謝謝,掰掰");				//輸出"謝謝,掰掰" 
				return 0;							//結束程式 
			}
			else{									//若不是Y、y、N、n話 
				printf("請輸入Y或N\n");				//輸出"請輸入Y或N" 
			}
		}
		else{										//若輸入值不是a、b、c三個之一選項的話 
			printf("請輸入a、b、c三個之一選項\n");	//輸出"請輸入a、b、c三個之一選項" 
			getch();								//按任一鍵,不回傳回傳值 
			system("CLS"); 							//清除螢幕 
		}
	}while(1);										//若判斷值為1則記鈺迴圈 
	system("PAUSE");								//螢幕畫面暫停，並等待使用者按任意鍵
	return 0;										//結束程式 
}
//心得:在這次的作業中，運用到很多平常沒練習到的程式，而那些平常有在用的，也因為這樣練習，讓我變得加練。
//而我覺得這次的作業相較於上次難了一點尤其是A選項要輸出成英文字母的直角三角形，這是之前都沒有練習過的。
//又因為多運用到了很多迴圈，所以打出來的程式也多了許多，但打完之後，也讓自己擁有一點點的成就感。

