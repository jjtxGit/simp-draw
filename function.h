/*********************************************************
*画 直角三角形 的函数
*/
void tranle(int x1,int y1,int x2,int y2)//根据两点绘制直角三角形
{
	line(x1,y1,x2,y2);
	line(x1,y1,x1,y2);
	line(x1,y2,x2,y2);
}
/*********************************************************
*画 直线 的功能实现函数
*/
void drawzx()
{
	MOUSEMSG m;//创建鼠标 对象
	COLORREF color=getlinecolor();//临时存储当前颜色
	while(1)// 第一层循环锁定 进入待绘图状态
	{
		m=GetMouseMsg();
		int x1,x2,x3,y1,y2,y3;
		if(m.y>120&&m.uMsg==WM_LBUTTONDOWN)//如果点击在了绘图区域
		{
			x2=x1=m.x;
			y2=y1=m.y;
			while(1)//第二层循环锁定 进入绘图状态
			{
					m=GetMouseMsg();
					x3=m.x;
					y3=m.y;
					if(y3<=125)//图形绘制越界保护
					{
						y2=y3=125;
					}
					if(x3!=x2||y3!=y2)//鼠标动态刷新
					{	
						
						setrop2(R2_NOT);
						line(x1,y1,x2,y2);
						line(x1,y1,x3,y3);
						x2=x3;
						y2=y3;
						
					}
					if(m.uMsg==WM_LBUTTONDOWN)//鼠标再次点击 绘图结束 跳出 第二层循环锁定
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
	setzx(WHITE);//使 画 直线 的 图标进入未选中状态 
}

/*********************************************************
*画矩形的功能实现函数
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
*画圆的功能实现函数
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
*画椭圆的功能实现函数
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
*画直角三角形的功能实现函数
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
*画 填充圆 的能实现函数
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
*画填充矩形的功能实现函数
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
*画填充椭圆的功能实现函数
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
* 擦除 的功能实现函数
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
* 笔迹 的功能实现函数
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
*文字 功能实现函数
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
*选择 功能实现函数
*/
void choice(void)
{

	COLORREF color=getcolor();
	setlinestyle(PS_DOT);//改变画线样式
	int x1=0,x2=0,x3=0,y1=0,y2=0,y3=0;
	MOUSEMSG m;

	while(1)
	{
		setrop2(R2_NOT);
		m=GetMouseMsg();
		if(m.y>y1&&m.y<y3&&m.x>x1&&m.x<x3&&m.mkLButton)//点击被选中的区域时
		{
			COLORREF color1= getlinecolor();

			setrop2(R2_COPYPEN);
			setlinecolor(WHITE);
			rectangle(x1,y1,x3,y3);
			setlinecolor(color1);
			setrop2(R2_NOT);
			
			int x=0,y=0;
			int width=x3-x1,high=y3-y1;//计算被选择区域的宽度和高度。
			
			IMAGE image;//创建IMAGE对象
			IMAGE * image_point=&image;//创建image对象指针
			getimage(image_point,x1,y1,width,high);
			x=m.x-x1;
			y=m.y-y1;

			int x4,y4,x5,y5;
			while(1)
			{
				m=GetMouseMsg();
				while(m.mkLButton)//鼠标左键 被 按下执行的程序
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
		if(m.y>128&&m.uMsg==WM_LBUTTONDOWN)//选取 要选择 的区域
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
				if(m.uMsg==WM_LBUTTONDOWN)//如果鼠标左键按下 
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
*保存 功能实现函数
*/
void save(void)
{
	IMAGE image;//创建image对象
	getimage(&image,0,120,900,480);
	saveimage("我的画图.jpg",&image);

}