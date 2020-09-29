#include<graphics.h>
#include<Windows.h>

int main(void){
	//设置画框大小
	initgraph(420,705);
	//加载图片
	loadimage(0,_T("bg.jpg"));
	//绘画一个针距方框
	rectangle(9,8,410,695); 
	//fillrectangle(9,8,410,695);
	 //设置划线(画笔)的颜色
	setlinecolor(RGB (255, 255, 0)); 
	//setbkcolor(RGB (64, 128, 128)); //设置背景色
    //cleardevice(); //用背景色清空整个屏幕(整个画布)
	//画一条线
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
	//设置字体颜色
	settextcolor(RGB(255,255,0));
	settextstyle(30,10,_T("微软雅黑"));
	//在指定位置输出字符串
	outtextxy(153,16,_T("猫王-TX过检测"));
	outtextxy(14,50,_T("检测灯①"));
	outtextxy(126,50,_T("检测灯②"));
	outtextxy(236,50,_T("检测灯③"));
	outtextxy(346,50,_T("成功④"));
	outtextxy(68,155,_T("方框透视"));
	outtextxy(68,205,_T("物品透视"));
	outtextxy(68,255,_T("车辆透视"));
	outtextxy(68,305,_T("内存自瞄"));
	outtextxy(68,355,_T("瞬间击中"));
	outtextxy(68,405,_T("范围打击"));
	outtextxy(68,455,_T("子弹追踪"));
	outtextxy(68,505,_T("人物加速"));
	outtextxy(68,555,_T("瞬间降落"));


	//画一个圆
   setlinecolor(RGB (255, 255, 0)); //设置划线(画笔)的颜色
   setlinestyle( PS_SOLID, 10); //设置线条为实线, 设置线宽为 10 像素
   circle(41,110,5);
   circle(160,110,5);
   circle(270,110,5);
   circle(375,110,5);
    
	system("pause");
	closegraph();
	return 0;
}
