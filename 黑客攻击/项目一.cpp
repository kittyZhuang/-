#include<graphics.h>
#include<Windows.h>

int main(void){
	//���û����С
	initgraph(420,705);
	//����ͼƬ
	loadimage(0,_T("bg.jpg"));
	//�滭һ����෽��
	rectangle(9,8,410,695); 
	//fillrectangle(9,8,410,695);
	 //���û���(����)����ɫ
	setlinecolor(RGB (255, 255, 0)); 
	//setbkcolor(RGB (64, 128, 128)); //���ñ���ɫ
    //cleardevice(); //�ñ���ɫ���������Ļ(��������)
	//��һ����
	line(9,32,410,32);
	line(9,145,410,145);
	line(9,195,410,195);
	line(9,245,410,245);
	line(9,295,410,295);
	line(9,345,410,345);
	line(9,395,410,395);
	line(9,445,410,445);
	line(9,495,410,495);
	line(9,545,410,545);
	line(9,595,410,595);
	line(265,145,265,595);
	//����������ɫ
	settextcolor(RGB(255,255,0));
	settextstyle(30,10,_T("΢���ź�"));
	//��ָ��λ������ַ���
	outtextxy(153,16,_T("è��-TX�����"));
	outtextxy(14,50,_T("���Ƣ�"));
	outtextxy(126,50,_T("���Ƣ�"));
	outtextxy(236,50,_T("���Ƣ�"));
	outtextxy(346,50,_T("�ɹ���"));
	outtextxy(68,155,_T("����͸��"));
	outtextxy(68,205,_T("��Ʒ͸��"));
	outtextxy(68,255,_T("����͸��"));
	outtextxy(68,305,_T("�ڴ�����"));
	outtextxy(68,355,_T("˲�����"));
	outtextxy(68,405,_T("��Χ���"));
	outtextxy(68,455,_T("�ӵ�׷��"));
	outtextxy(68,505,_T("�������"));
	outtextxy(68,555,_T("˲�併��"));


	//��һ��Բ
   setlinecolor(RGB (255, 255, 0)); //���û���(����)����ɫ
   setlinestyle( PS_SOLID, 10); //��������Ϊʵ��, �����߿�Ϊ 10 ����
   circle(41,110,5);
   circle(160,110,5);
   circle(270,110,5);
   circle(375,110,5);
    
	system("pause");
	closegraph();
	return 0;
}
