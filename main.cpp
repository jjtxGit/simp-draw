#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<main.h>
#include<hitFind.h>
#include<stdio.h>
#include<function.h>
int main()
{
	
	
	initgraph(900,600);

	hintBk();


	
	while(1)	
	{
		switch (hitfind())
		{
			case 1:	save();closegraph();break;
			case 2:choice();break;
			case 3:drawpen();break;
			case 4:drawworld();break;
			case 5:drawwipe();break;
			case 6: drawzx();break;
			case 7:	drawjx();break;
			case 8:	drawjyuan(); break;
			case 9:	drawtyuan(); break;
			case 10: drawtsjx() ;break;
			case 11: drawtcyuan();break;
			case 12: drawtcjx(); break;
			case 13: drawtctyuan();break;
			case 14:setlinestyle(PS_SOLID,1);break;
			case 15:setlinestyle(PS_SOLID,2);break;
			case 16:setlinestyle(PS_SOLID,4);break;
			case 17:setlinestyle(PS_SOLID,6);break;
			case 18:setcolor(BLACK);break;
			case 19:setcolor(BLUE);break;
			case 20:setcolor(GREEN);break;
			case 21:setcolor(CYAN);break;
			case 22:setcolor(RED);break;
			case 23:setcolor(MAGENTA);break;
			case 24:setcolor(BROWN);break;
			case 25:setcolor(YELLOW);break;
		}

	}
	return 0;
}
