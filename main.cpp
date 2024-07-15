#include <graphics.h>

int main(void) {
		
	initgraph(600, 400);

	//加载图片
	loadimage(0, _T("bg.jpg"));
	//设置文本字体
	settextstyle(30, 0, _T("微软雅黑"));
	setcolor(YELLOW);
	//画一个矩形，左上角 300，40，右下角坐标550，80
	rectangle(300,40,550,80);
	//在矩形内打印文本
	outtextxy(310, 45, _T("1-网站 404攻击"));

	rectangle(300, 100, 550,140);
	outtextxy(310, 105, _T("2-网站 篡改攻击"));

	rectangle(300,160, 550, 200);
	outtextxy(310, 165, _T("3-网站 攻击修复"));

	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, _T("4-查看攻击记录"));

	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, _T("5-DNS攻击"));

	rectangle(300,340, 550, 380);
	outtextxy(310, 345, _T("6-退出"));
	
	system("pause");

	closegraph();

	return 0;
}