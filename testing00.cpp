#include<graphics.h>
#include<iostream>
using namespace std;
void menu();
void instruction();
void virtualmain();

void playgame();
void menu();
void menu()
{	
	readimagefile("menubg.jpg",0,0,1366,780);
	settextstyle(10,0,4);     //use 8 or 10 for required font type
	setfillstyle(SLASH_FILL,8);
	rectangle(300,150,1050,600);
	rectangle(320,170,1030,580);
	floodfill(310,160,8);
	
	//options
	setfillstyle(SOLID_FILL,BLACK);
	rectangle(500,220,850,270);
	floodfill(600,250,8);
	outtextxy(590,230,"PLAY GAME");
	
	
	rectangle(500,305,850,355);
	floodfill(600,340,8);
	outtextxy(568,315,"INSTRUCTION");
	
	rectangle(500,390,850,440);
	floodfill(600,420,8);
	outtextxy(588,400,"HIGHSCORE");
	
	rectangle(500,475,850,525);
	floodfill(600,490,8);
	outtextxy(635,485,"EXIT");
}

void draw(int x,int y,int a,int b)
{
	
	readimagefile("effect2.jpg",0,0,1366,790);	
	
	setcolor(BLUE);
//log
	line(200,600,200,660);		//verticle l
	line(200,600,205,595);		//curve l
	line(205,595,255,595);		//horizontal
	line(255,595,260,600);		//curve r
	line(260,600,260,660);		//verticle r
	line(200,660,260,660);		//base
	
	//block
	rectangle(305,500,375,535);	//doubleblock1
	line(340,500,340,535);
			
	
	
	rectangle(430,435,605,470);	//5 blocks
	rectangle(465,435,500,470);
	rectangle(535,435,570,470);
	
	rectangle(685,390,720,425);	//single1
	rectangle(785,435,820,470);	//single2
	
	rectangle(945,530,1015,565);	//double2
	line(980,530,980,565);
	
	rectangle(865,560,900,595);		//single3
	
	
	//bug
	line(a+200,b+135,a+210,b+135);		//head top
		//left ear
	line(a+200,b+135,a+200,b+130);
	line(a+200,b+130,a+195,b+130);
	line(a+195,b+130,a+195,b+135);
		//left side
	line(a+195,b+135,a+190,b+135);
	line(a+190,b+135,a+190,b+140);
	line(a+190,b+140,a+185,b+140);
	line(a+185,b+140,a+185,b+145);
	line(a+185,b+145,a+190,b+145);
	line(a+190,b+145,a+190,b+150);
	
		//right ear
	line(a+210,b+135,a+210,b+130);
	line(a+210,b+130,a+215,b+130);
	line(a+215,b+130,a+215,b+135);
		//right side
	line(a+215,b+135,a+220,b+135);
	line(a+220,b+135,a+220,b+140);
	line(a+220,b+140,a+225,b+140);
	line(a+225,b+140,a+225,b+145);
	line(a+225,b+145,a+220,b+145);
	line(a+220,b+145,a+220,b+150);

		//base
	line(a+190,b+150,a+220,b+150);
		//leg
	rectangle(a+195,b+150,a+200,b+155);
	rectangle(a+210,b+150,a+215,b+155);
		//eyes
	circle(a+200,b+142,1);
	circle(a+210,b+142,1);
	
		//bird
		//head
	line(a,b-300,a+10,b-300);	//top
	line(a,b-300,a-5,b-285);	//lside
	line(a-5,b-285,a+5,b-280);
	line(a+10,b-300,a+15,b-285);	//rside
	line(a+15,b-285,a+5,b-280);
	
		//left wing
	line(a-2,b-297,a-15,b-297);
	line(a-15,b-297,a-5,b-285);
	line(a-15,b-297,a-25,b-285);
	line(a-25,b-285,a-5,b-285);
	
		//right wing
	line(a+12,b-297,a+25,b-297);
	line(a+25,b-297,a+15,b-285);
	line(a+25,b-297,a+35,b-285);
	line(a+35,b-285,a+15,b-285);
		//eyes
	circle(a+2,b-293,1);	//left
	circle(a+8,b-293,1);
	arc(a+5,b-286,190,350,2);
		//ears
	//left
	line(a,b-300,a+3,b-305);
	line(a+3,b-305,a+4,b-300);
	//right
	line(a+10,b-300,a+7,b-305);
	line(a+7,b-305,a+6,b-300); 
	
	//pipe
	rectangle(1100,580,1180,660);
	rectangle(1090,560,1190,580);
	
	
	
	//character
	rectangle(x-30,y-70,x+5,y-65);		//hat bottom
	rectangle(x-22,y-80,x-3,y-70);		//hat top
	rectangle(x-25,y-65,x,y-50);		//face
	rectangle(x-17,y-50,x-7,y-45);		//neck   
	rectangle(x-25,y-45,x,y-15);		//body
	rectangle(x-25,y-15,x-15,y-10);		//r leg
	rectangle(x-8,y-15,x-3,y-5);		//l leg
	rectangle(x-10,y-5,x,y);		 		//l foot   //important point x,y  
	rectangle(x-30,y-16,x-25,y-7);		//r foot
	circle(x-5,y-60,3);					//eye
	rectangle(x-20,y-40,x-17,y-27);		//l hand top
	rectangle(x-17,y-30,x-10,y-27);		//l hand bottom
	
	
}

void instruction()
{
	initwindow(1368,766,"Instruction");
	readimagefile("menubg.jpg",0,0,1366,780);
	POINT cursorPos;
	

	setcolor(8);
	
	rectangle(300,150,1050,600);
	setfillstyle(SOLID_FILL,BLACK);
	rectangle(320,170,1030,580);
	floodfill(305,155,8);
	floodfill(350,200,8);

	settextstyle(10,0,3);  
	outtextxy(325,175,"FOLLOW THE INSTRUCTIONS TO PLAY THE GAME:");
	outtextxy(325,208,"PRESS 'W' TO JUMP, 'A' TO MOVE BACKWARD, 'D' TO");
	outtextxy(325,231,"MOVE FORWARD,'Q' TO JUMP BACKWARD  AND 'E' TO");
	outtextxy(325,254,"JUMP FORWARD.");
	outtextxy(325,550,"Press any key to return in menu");
		
	getch();
	virtualmain();
	closegraph();
}

void playgame()
{	
	int page=0;
	initwindow(1366,768,"movement");
	int x=130,y=650,a=300,b=500,i=0;
	draw(x,y,a,b);
	while(1)
	{	
		top:
		i=0;
		switch(getch())
		{
	
			case 'w':	
						
						while(i!=22)
						{
							setactivepage(page);
							setvisualpage(page-1);
						
							readimagefile("effect2.jpg",0,0,1366,790);		
							y-=5;
							draw(x,y,a,b);
							page=1-page;
							i++;
						}
						do
						{
							setactivepage(page);
							setvisualpage(page-1);
							readimagefile("effect2.jpg",0,0,1366,790);		
							y+=5;
							draw(x,y,a,b);
							page=1-page;
						}while(y<650);
						break;
		
			case 'e':
						while(i!=22)
						{
							setactivepage(page);
							setvisualpage(page-1);
							readimagefile("effect2.jpg",0,0,1366,790);		
							y-=5;
							draw(x,y,a,b);
							page=1-page;
							i++;
						}
						x+=50;
						do
						{
							if((x>=180 && x<=300) && (y>=595 && y<=660) || (x>=295 && x<=405) && (y>=500 && y<=535) || ((x>=420 && x<=635) && (y>=435 && y<=470)) || ((x>=670 && x<=750) && (y>=390 && y<=425)) || ((x>=770 && x<=850) && (y<=435 && y>=470)) || ((x>=850 && x<=930) && (y<=560 && y<=595)))
							{
								goto top;
							}
							setactivepage(page);
							setvisualpage(page-1);
							readimagefile("effect2.jpg",0,0,1366,790);	
							y+=5;
							draw(x,y,a,b);
							delay(15);
							page=1-page;
						}while(y<650);
						break;
						
			case 'q':
						if(x<50)
						{
							draw(x,y,a,b);
						}
						else
						{
							while(i!=22)
							{
								setactivepage(page);
								setvisualpage(page-1);
								readimagefile("effect2.jpg",0,0,1366,790);		
								y-=5;
								draw(x,y,a,b);
								page=1-page;
								i++;
							}
							x-=50;
							do
							{
								setactivepage(page);
								setvisualpage(page-1);
								readimagefile("effect2.jpg",0,0,1366,790);	
								y+=5;
								draw(x,y,a,b);
								page=1-page;
							}while(y<650);
						}
						break;
									
			case 'a':	
						if(x<50)
						{
							draw(x,y,a,b);
						}
						else
						{
							setactivepage(page);
							setvisualpage(page-1);
							readimagefile("effect2.jpg",0,0,1366,790);	
							x=x-20;
							draw(x,y,a,b);
						}
						break;
				
			case 'd':	
						if(((x<300 && x>180) && (y>595)) || ((x<305 && x>405) && (y>500 && y<535)) || ((x<420 && x>635) && (y>435 && y<470)) || ((x<670 && x>750) && (y>390 && y<425)) || ((x<770 && x>850) && (y>435 && y<470)) || ((x<850 && x>930) && (y>560 && y<595)))
						{
							goto top;
						}
						setactivepage(page);
						setvisualpage(page-1);
						readimagefile("effect2.jpg",0,0,1366,790);	
						x=x+20;
						draw(x,y,a,b);
						if(((x<180 || x>300) && y==595) || ((x<295 || x>405) && y==500) || ((x<420 || x>635) && y==435) || ((x<670 || x>750) && y==390) || ((x<770 || x>850) && y==435) || ((x<850 || x>930) && y==560))
						{
						do
						{			
							setactivepage(page);
							setvisualpage(page-1);
							readimagefile("effect2.jpg",0,0,1366,790);	
							y+=5;
							draw(x,y,a,b);
							delay(15);
							page=1-page;
						}while(y<650);
						}
						break;
		
			//default:
	

		}
		
	}
}



void virtualmain()
{
	initwindow(1366,768,"menu");
	top:
	int page=0;
	POINT cursorPos;
	while(1)
	{
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
		GetCursorPos(&cursorPos);
		setcolor(8);          //8=grey
		setfillstyle(SOLID_FILL,8);
		//circle(cursorPos.x,cursorPos.y,20);
		//floodfill(cursorPos.x,cursorPos.y,8);
		menu();
		if(GetAsyncKeyState(VK_LBUTTON))
		{
			if(((cursorPos.x)<850 && (cursorPos.x)>500) && ((cursorPos.y)<550 && (cursorPos.y)>500))
				{
					exit(0);
				}
		//break;
		}
		
		if(GetAsyncKeyState(VK_LBUTTON))	
			{
				if(((cursorPos.x)<850 && (cursorPos.x)>500) && ((cursorPos.y)<295 && (cursorPos.y)>245))
				{
					playgame();
				}
			}
		
	if(GetAsyncKeyState(VK_LBUTTON))	
			{
				if(((cursorPos.x)<850 && (cursorPos.x)>500) && ((cursorPos.y)<380 && (cursorPos.y)>330))
				{
					instruction();
				}
			}
			
	
		page=1-page;
	}
	
	getch();

}

int main()
{
	virtualmain();

}
