#include<graphics.h>
int main()
{
	initwindow(1366,768,"obstacles1_level1");
	int a=600,b=500;
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
			
	
	
	rectangle(430,430,605,465);	//5 blocks
	rectangle(465,430,500,465);
	rectangle(535,430,570,465);
	
	rectangle(685,390,720,425);	//single1
	rectangle(785,430,820,465);	//single2
	
	rectangle(945,530,1015,565);	//double2
	line(980,530,980,565);
	
	rectangle(865,560,900,595);
	
	
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
	
	getch();
	closegraph();
	
}
