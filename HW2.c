#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
int main(void){
	
	int i,j,password,t=0,d=0;
	char ch,yn,a,b,c;
	printf("Welcome to my homework\n");
	for(i=20;i>=1;i--){							//運用巢狀for迴圈製作屬於自己的開場畫面 
		for(j=1;j<=i;j++){	
			printf("%02d",i);
		}
		printf("\n");
	}
	printf("我是E1B05柯俊宇\n");				//輸出"我是E1B05柯俊宇 " 
    system("PAUSE");							//螢幕畫面暫停，並等待使用者按任意鍵
    system("CLS");								//清除螢幕 
    
    while(t<3){
    printf("請輸入四位數密碼:\n");				//輸出"請輸入四位數密碼" 
    fflush(stdin);								//清除緩存 
    scanf("%d",&password);						//輸入"password(密碼)" 
    if(password==2024){							//若password是2024 
    	printf("歡迎光臨\n");					//輸出"歡迎光臨" 

		break;
	}
	else{										//若不是2024 
		printf("%c",'\a');						//發出警示音 
		printf("密碼錯誤\n");					//輸出"密碼錯誤" 
		t+=1;
		if(t>=3){
		printf("錯誤三次,掰掰");
		return 0;
	}
	}
	}
	system("PAUSE");							//螢幕畫面暫停，並等待使用者按任意鍵
	system("CLS");								//----------------------------------------------------------
	
	do{
		printf(" ________________________\n");		//製作屬於自己的表單樣式 
		printf("|a.畫出直角三角形        |\n");
	    printf("|b.顯示乘法表            |\n");
	    printf("|c.結束                  |\n");
		printf("|________________________|\n");
		printf("請輸入一個字元\n");					//輸出"請輸入一個字元" 
		fflush(stdin);								//清除緩存 
	    scanf("%c",&ch);							//輸入一字元 
	    if(ch=='A'||ch=='a'){						//若字元在A或a 
	    	system("CLS");
	    	printf("輸入一個a~n的字母:");
	    	fflush(stdin);
	    	scanf("%c",&a);
	    	for(b=a;b>='a';b--){
	    		for(c=b;c<=a;c++){
	    			printf("%c",c);
				}
				printf("\n");
			}
			system("PAUSE");
		}
		else if(ch=='B'|ch== 'b'){
			
			printf("請輸入一個1~9的數字:");
			scanf("%d",&d);
			if(d<=9&&d>=1){
				for(int e=1;e<=d;e++){
					for(int f=1;f<=e;f++){
						printf("%d ",e*f);
					}
					printf("\n");
				}	
				getch();
				system("CLS");		
			}			
			
			else if(d>9||d<1){
				printf("輸入錯誤\n");
			}
		}
		else if(ch=='C'||ch=='c'){					
			printf("Continue?\n");
			scanf("%s",&yn);
			if(yn=='y'||yn=='Y'){
				getch();
				system("CLS");
			}	
			if(yn=='n'||yn=='N'){
				break;
			}
			else{
				printf("請輸入Y或N\n");
			}
		}
	}while(1);
	system("PAUSE");							
	return 0;									
}



