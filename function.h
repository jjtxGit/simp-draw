/*********************************************************
*�� ֱ�������� �ĺ���
*/
void tranle(int x1,int y1,int x2,int y2)//�����������ֱ��������
{
	line(x1,y1,x2,y2);
	line(x1,y1,x1,y2);
	line(x1,y2,x2,y2);
}
/*********************************************************
*�� ֱ�� �Ĺ���ʵ�ֺ���
*/
void drawzx()
{
	MOUSEMSG m;//������� ����
	COLORREF color=getlinecolor();//��ʱ�洢��ǰ��ɫ
	while(1)// ��һ��ѭ������ �������ͼ״̬
	{
		m=GetMouseMsg();
		int x1,x2,x3,y1,y2,y3;
		if(m.y>120&&m.uMsg==WM_LBUTTONDOWN)//���������˻�ͼ����
		{
			x2=x1=m.x;
			y2=y1=m.y;
			while(1)//�ڶ���ѭ������ �����ͼ״̬
			{
					m=GetMouseMsg();
					x3=m.x;
					y3=m.y;
					if(y3<=125)//ͼ�λ���Խ�籣��
					{
						y2=y3=125;
					}
					if(x3!=x2||y3!=y2)//��궯̬ˢ��
					{	
						
						setrop2(R2_NOT);
						line(x1,y1,x2,y2);
						line(x1,y1,x3,y3);
						x2=x3;
						y2=y3;
						
					}
					if(m.uMsg==WM_LBUTTONDOWN)//����ٴε�� ��ͼ���� ���� �ڶ���ѭ������
					{
						setrop2(R2_COPYPEN);
						setlinecolor(color);
						line(x1,y1,x3,y3);
						break;
					}			
			}
		}

		
			
		if(m.uMsg==WM_RBUTTONDOWN || (m.y<120&&m.uMsg==WM_LBUTTONDOWN))
			break;
	}
	setzx(WHITE);//ʹ �� ֱ�� �� ͼ�����δѡ��״̬ 
}

/*********************************************************
*�����εĹ���ʵ�ֺ���
*/
void drawjx()
{
	MOUSEMSG m;
	COLORREF color=getlinecolor();
	while(1)
	{
		m=GetMouseMsg();
		int x1,x2,x3,y1,y2,y3;
		if(m.y>120&&m.uMsg==WM_LBUTTONDOWN)
		{
			x2=x1=m.x;
			y2=y1=m.y;
			while(1)
			{
					m=GetMouseMsg();
					x3=m.x;
					y3=m.y;
					if(y3<=125)
					{
						y2=y3=125;
					}
					if(x3!=x2||y3!=y2)
					{	
						
						setrop2(R2_NOT);
						rectangle(x1,y1,x2,y2);
						setrop2(R2_NOT);
						rectangle(x1,y1,x3,y3);
						x2=x3;
						y2=y3;
						
					}
					if(m.uMsg==WM_LBUTTONDOWN)
					{
						
						setrop2(R2_COPYPEN);
						setlinecolor(color);
						rectangle(x1,y1,x3,y3);
						break;
					}			
			}
		}
		
		if(m.uMsg==WM_RBUTTONDOWN || (m.y<120&&m.uMsg==WM_LBUTTONDOWN))
			break;
	}
	setjx(WHITE);
}

/*********************************************************
*��Բ�Ĺ���ʵ�ֺ���
*/
void drawjyuan()
{
	MOUSEMSG m;
	COLORREF color=getlinecolor();
	while(1)
	{
		m=GetMouseMsg();
		int x1,x2,x3,y1,y2,y3,r2,r3;
		if(m.y>120&&m.uMsg==WM_LBUTTONDOWN)
		{
			x2=x1=m.x;
			y2=y1=m.y;
			while(1)
			{
					m=GetMouseMsg();
					x3=m.x;
					y3=m.y;
					r2=(int)sqrt((x1-x2)*(x1-x2)+(y2-y1)*(y2-y1));
					r3=(int)sqrt((x1-x3)*(x1-x3)+(y3-y1)*(y3-y1));
					if((y1-r3)<=125)
					{
						r2=r3=(y1-125);
					}
					if(x3!=x2||y3!=y2)
					{	
						
						setrop2(R2_NOT);
						line(x1,y1,x2,y2);
						circle(x1,y1,r2);
						setrop2(R2_NOT);
						line(x1,y1,x3,y3);
						circle(x1,y1,r3);
						x2=x3;
						y2=y3;
						
					}
					if(m.uMsg==WM_LBUTTONDOWN)
					{
						setrop2(R2_NOT);
						line(x1,y1,x2,y2);
					
						setrop2(R2_COPYPEN);
						setlinecolor(color);
						circle(x1,y1,r3);
						break;
					}			
			}
		}
	
		if(m.uMsg==WM_RBUTTONDOWN || (m.y<120&&m.uMsg==WM_LBUTTONDOWN))
			break;
	}
	hinttool();
}
/*********************************************************
*����Բ�Ĺ���ʵ�ֺ���
*/
void drawtyuan()
{
	MOUSEMSG m;
	COLORREF color=getlinecolor();
	while(1)
	{
		m=GetMouseMsg();
		int x1,x2,x3,y1,y2,y3;
		if(m.y>120&&m.uMsg==WM_LBUTTONDOWN)
		{
			x2=x1=m.x;
			y2=y1=m.y;
			while(1)
			{
					m=GetMouseMsg();
					x3=m.x;
					y3=m.y;
					if(y3<=125)
					{
						y2=y3=125;
					}
					if(x3!=x2||y3!=y2)
					{	
						
						setrop2(R2_NOT);
						ellipse(x1,y1,x2,y2);
						
						ellipse(x1,y1,x3,y3);
						x2=x3;
						y2=y3;
						
					}
					if(m.uMsg==WM_LBUTTONDOWN)
					{
						setrop2(R2_NOT);
						ellipse(x1,y1,x2,y2);
						setrop2(R2_COPYPEN);
						setlinecolor(color);
						ellipse(x1,y1,x3,y3);
						break;
					}			
			}
		}
	
		if(m.uMsg==WM_RBUTTONDOWN || (m.y<120&&m.uMsg==WM_LBUTTONDOWN))
			break;
	}
	hinttool();
}

/*********************************************************
*��ֱ�������εĹ���ʵ�ֺ���
*/
void drawtsjx()
{
	MOUSEMSG m;
	COLORREF color=getlinecolor();
	while(1)
	{
		m=GetMouseMsg();
		int x1,x2,x3,y1,y2,y3;
		if(m.y>120&&m.uMsg==WM_LBUTTONDOWN)
		{
			x2=x1=m.x;
			y2=y1=m.y;
			while(1)
			{
					m=GetMouseMsg();
					x3=m.x;
					y3=m.y;
					if(y3<=125)
					{
						y2=y3=125;
					}
					if(x3!=x2||y3!=y2)
					{	
						
						setrop2(R2_NOT);
						tranle(x1,y1,x2,y2);
						setrop2(R2_NOT);
						tranle(x1,y1,x3,y3);
						x2=x3;
						y2=y3;
						
					}
					if(m.uMsg==WM_LBUTTONDOWN)
					{
						setrop2(R2_NOT);
						
						setrop2(R2_COPYPEN);
						setlinecolor(color);
						tranle(x1,y1,x3,y3);
						break;
					}			
			}
		}
	
		if(m.uMsg==WM_RBUTTONDOWN || (m.y<120&&m.uMsg==WM_LBUTTONDOWN))
			break;
	}
	hinttool();
}

/*********************************************************
*�� ���Բ ����ʵ�ֺ���
*/
void drawtcyuan()
{
	MOUSEMSG m;
	COLORREF color=getlinecolor();
	while(1)
	{
		m=GetMouseMsg();
		int x1,x2,x3,y1,y2,y3,r2,r3;
		if(m.y>120&&m.uMsg==WM_LBUTTONDOWN)
		{
			x2=x1=m.x;
			y2=y1=m.y;
			while(1)
			{
					m=GetMouseMsg();
					x3=m.x;
					y3=m.y;
					r2=(int)sqrt((x1-x2)*(x1-x2)+(y2-y1)*(y2-y1));
					r3=(int)sqrt((x1-x3)*(x1-x3)+(y3-y1)*(y3-y1));
					if((y1-r3)<=125)
					{
						r2=r3=(y1-125);
					}
					if(x3!=x2||y3!=y2)
					{	
						
						setrop2(R2_NOT);
						solidcircle(x1,y1,r2);
						setrop2(R2_NOT);
						solidcircle(x1,y1,r3);
						x2=x3;
						y2=y3;
						
					}
					if(m.uMsg==WM_LBUTTONDOWN)
					{
						setrop2(R2_COPYPEN);
						setfillcolor(color);
						solidcircle(x1,y1,r3);
						break;
					}			
			}
		}
	
		if(m.uMsg==WM_RBUTTONDOWN || (m.y<120&&m.uMsg==WM_LBUTTONDOWN))
			break;
	}
	hinttool();
}


/*********************************************************
*�������εĹ���ʵ�ֺ���
*/
void drawtcjx()
{
	MOUSEMSG m;
	COLORREF color=getlinecolor();
	while(1)
	{
		m=GetMouseMsg();
		int x1,x2,x3,y1,y2,y3;
		if(m.y>120&&m.uMsg==WM_LBUTTONDOWN)
		{
			x2=x1=m.x;
			y2=y1=m.y;
			while(1)
			{
					m=GetMouseMsg();
					x3=m.x;
					y3=m.y;
					if(y3<=125)
					{
						y2=y3=125;
					}
					if(x3!=x2||y3!=y2)
					{	
						
						setrop2(R2_NOT);
						solidrectangle(x1,y1,x2,y2);
						setrop2(R2_NOT);
						solidrectangle(x1,y1,x3,y3);
						x2=x3;
						y2=y3;
						
					}
					if(m.uMsg==WM_LBUTTONDOWN)
					{
						
						setrop2(R2_COPYPEN);
						setfillcolor(color);
						solidrectangle(x1,y1,x3,y3);
						break;
					}			
			}
		}
		
		if(m.uMsg==WM_RBUTTONDOWN || (m.y<120&&m.uMsg==WM_LBUTTONDOWN))
			break;
	}
	hinttool();
}



/*********************************************************
*�������Բ�Ĺ���ʵ�ֺ���
*/
void drawtctyuan()
{
	MOUSEMSG m;
	COLORREF color=getlinecolor();
	while(1)
	{
		m=GetMouseMsg();
		int x1,x2,x3,y1,y2,y3;
		if(m.y>120&&m.uMsg==WM_LBUTTONDOWN)
		{
			x2=x1=m.x;
			y2=y1=m.y;
			while(1)
			{
					m=GetMouseMsg();
					x3=m.x;
					y3=m.y;
					if(y3<=125)
					{
						y2=y3=125;
					}
					if(x3!=x2||y3!=y2)
					{	
						
						setrop2(R2_NOT);
						solidellipse(x1,y1,x2,y2);
						
						solidellipse(x1,y1,x3,y3);
						x2=x3;
						y2=y3;
						
					}
					if(m.uMsg==WM_LBUTTONDOWN)
					{
						
						setrop2(R2_COPYPEN);
						setfillcolor(color);
						solidellipse(x1,y1,x3,y3);
						break;
					}			
			}
		}
		
		if(m.uMsg==WM_RBUTTONDOWN || (m.y<120&&m.uMsg==WM_LBUTTONDOWN))
			break;
	}
	hinttool();
}



/*********************************************************
* ���� �Ĺ���ʵ�ֺ���
*/
void drawwipe()
{
	MOUSEMSG m;
	COLORREF color=getfillcolor();
	setfillcolor(getbkcolor());
	while(1)
	{
		m=GetMouseMsg();
		if(m.y>128&&m.uMsg==WM_LBUTTONDOWN)
		{
			m=GetMouseMsg();	
			while(m.mkLButton)
				{
					
					solidcircle(m.x,m.y,5);
					m=GetMouseMsg();
					if(m.uMsg==WM_LBUTTONDOWN)
						break;
				}
		}
		
		if(m.uMsg==WM_RBUTTONDOWN || (m.y<120&&m.uMsg==WM_LBUTTONDOWN))
			break;
	}
	hinttool();
	setfillcolor(color);
}
/*********************************************************
* �ʼ� �Ĺ���ʵ�ֺ���
*/

void drawpen()
{
	MOUSEMSG m;
	COLORREF color=getfillcolor();
	setlinestyle(PS_DASH);
	setfillcolor(getbkcolor());
	while(1)
	{
		m=GetMouseMsg();
		if(m.y>128&&m.uMsg==WM_LBUTTONDOWN)
		{
				m=GetMouseMsg();
				while(m.mkLButton)
				{
					
					line(m.x,m.y,m.x+1,m.y+1);
					m=GetMouseMsg();
					if(m.uMsg==WM_LBUTTONDOWN)
						break;
				}
		}
		
		if(m.uMsg==WM_RBUTTONDOWN || (m.y<120&&m.uMsg==WM_LBUTTONDOWN))
			break;
	}
	hinttool();
	setfillcolor(color);
}
/**********************
*���� ����ʵ�ֺ���
*/

void drawworld()
{
	MOUSEMSG m;
	while(1)
	{
		m=GetMouseMsg();
		if(m.y>125&&m.mkLButton)
		{
			line(m.x-5,m.y,m.x-5,m.y+5);
			char c;
			int x=m.x, y=m.y;
			while(1)
			{	
				if(kbhit())
				{
					c=getch();
					if(c==13)
					{
						y=y+textheight(c);
						x=m.x;
						line(x-5,y,m.x-5,y+5);
					}
					
					outtextxy(x,y,c);
					x=x+textwidth(c);
				}
				if(MouseHit()&&GetMouseMsg().uMsg==WM_LBUTTONDOWN)
						break;
			}
		}
		if(m.uMsg==WM_RBUTTONDOWN || (m.y<120&&m.uMsg==WM_LBUTTONDOWN))
			break;
	}
	hinttool();
}
/***********************************************************************
*ѡ�� ����ʵ�ֺ���
*/
void choice(void)
{

	COLORREF color=getcolor();
	setlinestyle(PS_DOT);//�ı仭����ʽ
	int x1=0,x2=0,x3=0,y1=0,y2=0,y3=0;
	MOUSEMSG m;

	while(1)
	{
		setrop2(R2_NOT);
		m=GetMouseMsg();
		if(m.y>y1&&m.y<y3&&m.x>x1&&m.x<x3&&m.mkLButton)//�����ѡ�е�����ʱ
		{
			COLORREF color1= getlinecolor();

			setrop2(R2_COPYPEN);
			setlinecolor(WHITE);
			rectangle(x1,y1,x3,y3);
			setlinecolor(color1);
			setrop2(R2_NOT);
			
			int x=0,y=0;
			int width=x3-x1,high=y3-y1;//���㱻ѡ������Ŀ�Ⱥ͸߶ȡ�
			
			IMAGE image;//����IMAGE����
			IMAGE * image_point=&image;//����image����ָ��
			getimage(image_point,x1,y1,width,high);
			x=m.x-x1;
			y=m.y-y1;

			int x4,y4,x5,y5;
			while(1)
			{
				m=GetMouseMsg();
				while(m.mkLButton)//������ �� ����ִ�еĳ���
				{
					
					rectangle(x5-x,y5-y,x5-x+width,y5-y+high);
					m=GetMouseMsg();
					x4=x5;
					y4=y5;
					x5=m.x;
					y5=m.y;
					rectangle(x4-x,y4-y,x4-x+width,y4-y+high);
				}
				if(!m.mkCtrl)
				{
					COLORREF color2=getfillcolor();
					setfillcolor(WHITE);
					setrop2(R2_COPYPEN);
					solidrectangle(x1,y1,x3,y3);
					setfillcolor(color2);
					setrop2(R2_NOT);

				}
				putimage(x4-x,y4-y,image_point);
				m=GetMouseMsg();
				if(m.mkRButton)
					break;	
			}
			setlinecolor(color1);
			break;
		
		}
		if(m.y>128&&m.uMsg==WM_LBUTTONDOWN)//ѡȡ Ҫѡ�� ������
		{
			x2=x1=m.x;y2=y1=m.y;
			m=GetMouseMsg();	
			while(m.mkLButton)
			{	
				m=GetMouseMsg();
				x3=m.x;
				y3=m.y;
				rectangle(x1,y1,x3,y3);
				rectangle(x1,y1,x2,y2);
				x2=x3;
				y2=y3;
				if(m.uMsg==WM_LBUTTONDOWN)//������������� 
				{
					m=GetMouseMsg();
					break;
				}
			}
			setrop2(R2_COPYPEN);
			setlinecolor(LIGHTGREEN);
			rectangle(x1,y1,x3,y3);	
		}
		
		if(m.uMsg==WM_RBUTTONDOWN || (m.y<120&&m.uMsg==WM_LBUTTONDOWN))
			break;
	}
	setlinestyle(PS_SOLID);
	setrop2(R2_COPYPEN);
	setChoice(RGB(223,233,245));
}
/***********************************************************************
*���� ����ʵ�ֺ���
*/
void save(void)
{
	IMAGE image;//����image����
	getimage(&image,0,120,900,480);
	saveimage("�ҵĻ�ͼ.jpg",&image);

}