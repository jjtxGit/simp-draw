/*
color :"����"�ı���ɫ
*/
void setSave(COLORREF color)
{
	settextstyle(25,0,"����");
	settextcolor(BLACK);
	setbkcolor(color);
	outtextxy(5,30,"����");
	setbkcolor(WHITE);
}
/********************************************************
color :"�ּ�"�ı���ɫ
*/
void setPen(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(23,0,"����");
	outtextxy(168,32,"�ʼ�");
	setbkcolor(WHITE);
}
/************************************************************
color :"����"�ı���ɫ
*/
void setWorld(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(23,0,"����");
	outtextxy(168,63,"����");
	setbkcolor(WHITE);
}
/**********************************************************
color :"����"�ı���ɫ
*/
void setWipe(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(23,0,"����");
	outtextxy(168,93,"����");
	setbkcolor(WHITE);
}
/**********************************************************
color :"ֱ��"�ı���ɫ
*/
void setzx(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(18,0,"����");
	outtextxy(303,03,"��ֱ��");
	setbkcolor(WHITE);
}

/**********************************************************
color :"����"�ı���ɫ
*/
void setjx(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(18,0,"����");
	outtextxy(363,03,"������");
	setbkcolor(WHITE);
}

/**********************************************************
color :"Բ"�ı���ɫ
*/
void setyuan(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(18,0,"����");
	outtextxy(303,33,"��Բ��");
	setbkcolor(WHITE);
}

/**********************************************************
color :"��Բ"�ı���ɫ
*/
void settyuan(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(18,0,"����");
	outtextxy(363,33,"����Բ");
	setbkcolor(WHITE);
}
/**********************************************************
color :"������"�ı���ɫ
*/
void setsjx(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(18,0,"����");
	outtextxy(303,63,"������");
	setbkcolor(WHITE);
}

/**********************************************************
color :"���Բ"�ı���ɫ
*/
void settcyuan(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(18,0,"����");
	outtextxy(363,63,"���Բ");
	setbkcolor(WHITE);
}
/******************************************************
*color :"������"�ı���ɫ
*/
void settcjx(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(14,0,"����");
	outtextxy(301,98,"������");
	setbkcolor(WHITE);
}

/******************************************************
*color :"�����Բ"�ı���ɫ
*/
void settctyuan(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(14,0,"����");
	outtextxy(361,98,"�����Բ");
	setbkcolor(WHITE);
}


/******************************************************
*color :"�߿�1����"�ı���ɫ
*/
void setxk1(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(20,0,"����");
	outtextxy(489,8,"�߿�1����");
	setbkcolor(WHITE);
}

/******************************************************
*color :"�߿�2����"�ı���ɫ
*/
void setxk2(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(20,0,"����");
	outtextxy(489,38,"�߿�2����");
	setbkcolor(WHITE);
}


/******************************************************
*color :"�߿�4����"�ı���ɫ
*/
void setxk4(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(20,0,"����");
	outtextxy(489,68,"�߿�4����");
	setbkcolor(WHITE);
}


/******************************************************
*color :"�߿�6����"�ı���ɫ
*/
void setxk6(COLORREF color)
{
	settextcolor(BLACK);
	setbkcolor(color);
	settextstyle(20,0,"����");
	outtextxy(489,98,"�߿�6����");
	setbkcolor(WHITE);
}

/****************************************************
*��ʾ��ǰ��ɫ
*/

void showcolor(COLORREF color)
{
	setfillcolor(color);
	solidrectangle(615,60,645,90);
}
/************************************
*�� ѡ�� ��
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
*�������
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
	settextstyle(18,0,"����");
	settextcolor(BLACK);
	outtextxy(603,20,"��ǰɫ");

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
void hintBk()//��ʼ��������ͼ���� 
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