#include <graphics.h>

int main(void) {
		
	initgraph(600, 400);

	//����ͼƬ
	loadimage(0, _T("bg.jpg"));
	//�����ı�����
	settextstyle(30, 0, _T("΢���ź�"));
	setcolor(YELLOW);
	//��һ�����Σ����Ͻ� 300��40�����½�����550��80
	rectangle(300,40,550,80);
	//�ھ����ڴ�ӡ�ı�
	outtextxy(310, 45, _T("1-��վ 404����"));

	rectangle(300, 100, 550,140);
	outtextxy(310, 105, _T("2-��վ �۸Ĺ���"));

	rectangle(300,160, 550, 200);
	outtextxy(310, 165, _T("3-��վ �����޸�"));

	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, _T("4-�鿴������¼"));

	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, _T("5-DNS����"));

	rectangle(300,340, 550, 380);
	outtextxy(310, 345, _T("6-�˳�"));
	
	system("pause");

	closegraph();

	return 0;
}