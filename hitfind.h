/**********************************************************************************************************
* �ó�ʼ�� ����ѡ��� �Ļ�ͼ����
  ��ѡ�� ĳ�ֹ���ʱ  ���ô˺��� ����ʹ��ͼ��ص�ѡ��״̬
***/
void hinttool()
{
	setzx(WHITE);
	setyuan(WHITE);
	setsjx(WHITE);
	settcjx(WHITE);
	setjx(WHITE);
	settyuan(WHITE);
	settcyuan(WHITE);
	settctyuan(WHITE);
	setPen(WHITE);
	setWipe(WHITE);
	setWorld(WHITE);
}

/********************************************************************************************************
*�����ж��������λ�� ����λ�ò�ͬ ���ز�ͬ��int������ ͬʱ ʹ ��Ӧλ���ϵ�ͼ����뱻ѡ��״̬
 return �����ص�λ����Ϣ ��ֵΪ 1 2 .... 23 24 25
**/
int hitfind()
{
	MOUSEMSG m=GetMouseMsg();
		
	if(m.x>0 && m.x<60 && m.y>30 && m.y<90)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : setSave(LIGHTGRAY);break;
			case WM_LBUTTONUP	: setSave(WHITE);return 1;break;
		}
	}



		if(m.x>60 && m.x<120 && m.y>30 && m.y<90)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : setChoice(LIGHTGRAY);return 2;break;
		}
	}


	if(m.x>300 && m.x<360 && m.y>0 && m.y<30)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : 
				hinttool();
				setzx(LIGHTGRAY);
				
				return 6;break;
		
		}
	}


	if(m.x>300 && m.x<360 && m.y>30 && m.y<60)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : 
				hinttool();
				setyuan(LIGHTGRAY);
			return 8;break;
		}
	}

	if(m.x>300 && m.x<360 && m.y>60 && m.y<90)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : 
				
				hinttool();
				setsjx(LIGHTGRAY);
				return 10;break;
		}
	}

	if(m.x>300 && m.x<360 && m.y>90 && m.y<120)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : 
				hinttool();
				settcjx(LIGHTGRAY);
				
				return 12;break;
		}
	}


	if(m.x>360 && m.x<420 && m.y>0 && m.y<30)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN :
				hinttool();
				setjx(LIGHTGRAY);
				return 7;break;
		}
	}

	if(m.x>360 && m.x<420 && m.y>30 && m.y<60)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : 
				hinttool();
				settyuan(LIGHTGRAY);
				return 9;break;
		}
	}

	
	if(m.x>360 && m.x<420 && m.y>60 && m.y<90)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN :
				hinttool();
				settcyuan(LIGHTGRAY);
				return 11;break;
		}
	}


	if(m.x>360 && m.x<420 && m.y>90 && m.y<120)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : 
				hinttool();
				settctyuan(LIGHTGRAY);
				return 13;break;
		}
	}


		if(m.x>150 && m.x<240 && m.y>30 && m.y<60)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : 
				hinttool();
				setPen(LIGHTGRAY);
				return 3;break;
		}
	}


		if(m.x>150 && m.x<240 && m.y>60 && m.y<90)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN :
				hinttool();
				setWorld(LIGHTGRAY);
				return 4;break;
		}
	}

		
		if(m.x>150 && m.x<240 && m.y>90 && m.y<120)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : 
				hinttool();
				setWipe(LIGHTGRAY);
				return 5;break;
		}
	}

	if(m.x>660 && m.x<720&& m.y>0 && m.y<60)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : showcolor(BLACK);	
				return 18;break;
		}
	}

	if(m.x>720 && m.x<780&& m.y>0 && m.y<60)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : showcolor(BLUE);	
				return 19;break;
		}
	}

	if(m.x>780 && m.x<840&& m.y>0 && m.y<60)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : showcolor(GREEN);	
				return 20;break;
		}
	}


		if(m.x>840 && m.x<900 && m.y>0 && m.y<60)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : showcolor(CYAN);	
				return 21;break;
		}
	}


	if(m.x>660 && m.x<720&& m.y>60 && m.y<120)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : showcolor(RED);	
				return 22;break;
		}
	}

	if(m.x>720 && m.x<780&& m.y>60 && m.y<120)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : showcolor(MAGENTA);
				return 23;break;
		}
	}

	if(m.x>780 && m.x<840&& m.y>60 && m.y<120)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : showcolor(BROWN);	
				return 24;break;
		}
	}


		if(m.x>840 && m.x<900 && m.y>60 && m.y<120)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : showcolor(YELLOW);
				return 25;break;
		}
	}


		if(m.x>480 && m.x<600 && m.y>0 && m.y<30)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : 
				setxk1(LIGHTGRAY);
				setxk2(WHITE);
				setxk4(WHITE);
				setxk6(WHITE);
				
				return 14;break;
		}
	}



		if(m.x>480 && m.x<600 && m.y>30 && m.y<60)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : 
				setxk1(WHITE);
				setxk2(LIGHTGRAY);
				setxk4(WHITE);
				setxk6(WHITE);
				return 15;break;
		}
	}

		if(m.x>480 && m.x<600 && m.y>60&& m.y<90)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : 	
				setxk1(WHITE);
				setxk2(WHITE);
				setxk4(LIGHTGRAY);
				setxk6(WHITE);	
				return 16;break;
		}
	}
		if(m.x>480 && m.x<600 && m.y>90&& m.y<120)
	{
		switch(m.uMsg)
		{
			case WM_LBUTTONDOWN : 
				setxk1(WHITE);
				setxk2(WHITE);
				setxk4(WHITE);
				setxk6(LIGHTGRAY);
					
				return 17;break;
		}
	}


	return 0;
}
/************************************************************************************************************************************
*���û�����ɫ�����ͼ�ε���ɫ
*@veriable color :������ɫ�����ͼ�ε���ɫ
**/
void setcolor(COLORREF color)
{
	setfillcolor(color);
	setlinecolor(color);
}
