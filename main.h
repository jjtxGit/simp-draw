/*
color :"保存"的背景色
*/
void setSave(COLORREF color)
{
	settextstyle(25,0,"宋体");
	settextcolor(BLACK);
	setbkcolor(color);
	outtextxy(5,30,"保存");
	setbkcolor(WHITE);
}
/********************************************************
color :"字迹"的背景色
*/
void setPen(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(23,0,"宋体");
	outtextxy(168,32,"笔迹");
	setbkcolor(WHITE);
}
/************************************************************
color :"文字"的背景色
*/
void setWorld(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(23,0,"宋体");
	outtextxy(168,63,"文字");
	setbkcolor(WHITE);
}
/**********************************************************
color :"擦除"的背景色
*/
void setWipe(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(23,0,"宋体");
	outtextxy(168,93,"擦除");
	setbkcolor(WHITE);
}
/**********************************************************
color :"直线"的背景色
*/
void setzx(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(18,0,"宋体");
	outtextxy(303,03,"画直线");
	setbkcolor(WHITE);
}

/**********************************************************
color :"矩形"的背景色
*/
void setjx(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(18,0,"宋体");
	outtextxy(363,03,"画矩形");
	setbkcolor(WHITE);
}

/**********************************************************
color :"圆"的背景色
*/
void setyuan(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(18,0,"宋体");
	outtextxy(303,33,"画圆形");
	setbkcolor(WHITE);
}

/**********************************************************
color :"椭圆"的背景色
*/
void settyuan(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(18,0,"宋体");
	outtextxy(363,33,"画椭圆");
	setbkcolor(WHITE);
}
/**********************************************************
color :"三角形"的背景色
*/
void setsjx(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(18,0,"宋体");
	outtextxy(303,63,"三角形");
	setbkcolor(WHITE);
}

/**********************************************************
color :"填充圆"的背景色
*/
void settcyuan(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(18,0,"宋体");
	outtextxy(363,63,"填充圆");
	setbkcolor(WHITE);
}
/******************************************************
*color :"填充矩形"的背景色
*/
void settcjx(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(14,0,"宋体");
	outtextxy(301,98,"填充矩形");
	setbkcolor(WHITE);
}

/******************************************************
*color :"填充椭圆"的背景色
*/
void settctyuan(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(14,0,"宋体");
	outtextxy(361,98,"填充椭圆");
	setbkcolor(WHITE);
}


/******************************************************
*color :"线宽1像素"的背景色
*/
void setxk1(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(20,0,"宋体");
	outtextxy(489,8,"线宽1像素");
	setbkcolor(WHITE);
}

/******************************************************
*color :"线宽2像素"的背景色
*/
void setxk2(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(20,0,"宋体");
	outtextxy(489,38,"线宽2像素");
	setbkcolor(WHITE);
}


/******************************************************
*color :"线宽4像素"的背景色
*/
void setxk4(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(20,0,"宋体");
	outtextxy(489,68,"线宽4像素");
	setbkcolor(WHITE);
}


/******************************************************
*color :"线宽6像素"的背景色
*/
void setxk6(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(20,0,"宋体");
	outtextxy(489,98,"线宽6像素");
	setbkcolor(WHITE);
}

/****************************************************
*显示当前颜色
*/

void showcolor(COLORREF color)
{
	setfillcolor(color);
	solidrectangle(615,60,645,90);
}
/************************************
*画 选择 框
*/

void setChoice(COLORREF color)
{
	setlinecolor(BLACK);
	setlinestyle(PS_DASHDOTDOT);
	setfillcolor(color);
	fillrectangle(60,30,120,90);
	setlinestyle(PS_SOLID);
}

/************************************************
*背景框架
*/
void background()
{
	setbkcolor(WHITE);
	cleardevice();

	
	setfillcolor(RGB(223,233,245));
	solidrectangle(0,0,900,120);
	setlinecolor(BLACK);
	line(150,0,150,120);
	line(240,0,240,120);
	line(300,0,300,120);
	line(420,0,420,120);
	line(480,0,480,120);
	line(600,0,600,120);
	line(660,0,660,120);
	line(360,0,360,120);
	for(int i=1;i<=4;i++)
	{
		line(660+i*60,0,660+i*60,120);
	}

	for(i=1;i<=4;i++)
	{
		line(150,30*i,240,30*i);
		line(300,30*i,420,30*i);
		line(480,30*i,600,30*i);
	}
	line(660,60,900,60);
	setbkcolor(RGB(223,233,245));
	settextstyle(18,0,"宋体");
	settextcolor(BLACK);
	outtextxy(603,20,"当前色");

	setfillcolor(BLACK);
	solidrectangle(675,15,705,45);
	
	setfillcolor(BLUE);
	solidrectangle(735,15,765,45);

	setfillcolor(GREEN);
	solidrectangle(795,15,825,45);
	
	setfillcolor(CYAN);
	solidrectangle(855,15,885,45);
	
	setfillcolor(RED);
	solidrectangle(675,75,705,105);
	
	setfillcolor(MAGENTA);
	solidrectangle(735,75,765,105);

	setfillcolor(BROWN);
	solidrectangle(795,75,825,105);
	
	setfillcolor(YELLOW);
	solidrectangle(855,75,885,105);
	
}
void hintBk()//初始化整个绘图背景 
{
	
	background();
	setSave(WHITE);
	setPen(WHITE);
	setWipe(WHITE);
	setWorld(WHITE);
	setzx(WHITE);
	setjx(WHITE);
	setsjx(WHITE);
	settyuan(WHITE);
	setyuan(WHITE);
	

	settcyuan(WHITE);
	settcjx(WHITE);
	settctyuan(WHITE);

	setxk1(LIGHTGRAY);
	setxk2(WHITE);
	setxk4(WHITE);
	setxk6(WHITE);
	
	showcolor(BLACK);
	setlinestyle(PS_SOLID);

	setChoice(RGB(223,233,245));
}