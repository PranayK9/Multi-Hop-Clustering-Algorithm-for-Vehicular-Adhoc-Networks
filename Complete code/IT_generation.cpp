#include<stdio.h>
#include<fstream>
using namespace std;
int main()
{
	double x[1200],y[1200],v[1200];
	int i;
  ofstream myfile ("InfoTable.txt");


//n0
	for(i=0;i<=1200;i++)
	{
		if(i<=140)
		x[i]=180.0+(820/14.0)*(i/10.0);
		else if(i>140 && i<=206)
		x[i]=1000.0+(500/6.6)*(i/10.0-14);
		else if(i>206 && i<=236)
		x[i]=1500.0+(200/3.0)*(i/10.0-20.6);
		else
		x[i]=1700;
	}
	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";


//output:
//x1 x2 x3 x4 x5     first vehicle
//x1 x2 x3 x4 x5     second vehicle


//n1
	for(i=0;i<=1200;i++)
	{
		if(i<=153)
		x[i]=110.0+(890/15.3)*(i/10.0);
		else if(i>153 && i<=217)
		x[i]=1000.0+(500/6.4)*(i/10.0-15.3);
		else if(i>217 && i<=343)
		x[i]=1500.0+(1000/12.6)*(i/10.0-21.7);
		else if(i>343 && i<=450)
		x[i]=2500.0+(870/10.7)*(i/10.0-34.3);
		else
		x[i]=3370;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n2
	for(i=0;i<=1200;i++)
	{
		if(i<=166)
		x[i]=40.0+(960/16.6)*(i/10.0);
		else if(i>166 && i<=228)
		x[i]=1000.0+(500/6.2)*(i/10.0-16.6);
		else if(i>228 && i<=270)
		x[i]=1500.0+(200/4.2)*(i/10.0-22.8);
		else if(i>270 && i<=377)
		x[i]=1700.0+(100/10.7)*(i/10.0-27.0);
		else
		x[i]=1800;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n3
	for(i=0;i<=1200;i++)
	{
		if(i<=83)
		x[i]=180.0+(570/8.3)*(i/10.0);
		else if(i>83 && i<=182)
		x[i]=750.0+(250/9.9)*(i/10.0-8.3);
		else if(i>182 && i<=350)
		x[i]=1000.0+(500/16.8)*(i/10.0-18.2);
		else if(i>350 && i<=544)
		x[i]=1500.0+(200/19.4)*(i/10.0-35.0);
		else
		x[i]=1700;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n4
	for(i=0;i<=1200;i++)
	{
		if(i<=83)
		x[i]=110.0+(590/8.3)*(i/10.0);
		else if(i>83 && i<=195)
		x[i]=700.0+(250/11.2)*(i/10.0-8.3);
		else if(i>195 && i<=371)
		x[i]=950.0+(550/17.6)*(i/10.0-19.5);
		else if(i>371 && i<=434)
		x[i]=1500.0+(300/6.3)*(i/10.0-37.1);
		else if(i>434 && i<=579)
		x[i]=1800.0+(700/14.5)*(i/10.0-43.4); 
		else if(i>579 && i<=757)
		x[i]=2500.0+(670/17.8)*(i/10.0-57.9); 
		else
		x[i]=3370;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n5
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		x[i]=3370;
		else if(i>4 && i<=106)
		x[i]=3370-(620/10.2)*(i/10.0-0.4);
		else if(i>106 && i<=203)
		x[i]=2750-(750/9.7)*(i/10.0-10.6);
		else if(i>203 && i<=242)
		x[i]=2000.0-(300/3.9)*(i/10.0-20.3);
		else
		x[i]=1700;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n6
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		x[i]=3440;
		else if(i>4 && i<=118)
		x[i]=3440-(690/11.4)*(i/10.0-0.4);
		else if(i>118 && i<=214)
		x[i]=2750-(750/9.6)*(i/10.0-11.8);
		else if(i>214 && i<=248)
		x[i]=2000.0-(200/3.4)*(i/10.0-21.4);
		else
		x[i]=1800;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n7
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		x[i]=3510;
		else if(i>4 && i<=130)
		x[i]=3510-(760/12.6)*(i/10.0-0.4);
		else if(i>130 && i<=226)
		x[i]=2750-(750/9.6)*(i/10.0-13.0);
		else if(i>226 && i<=302)
		x[i]=2000.0-(300/7.6)*(i/10.0-22.6);
		else
		x[i]=1700;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n8
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		x[i]=3370;
		else if(i>4 && i<=83)
		x[i]=3370-(600/7.9)*(i/10.0-0.4);
		else if(i>83 && i<=182)
		x[i]=2770-(270/9.9)*(i/10.0-8.3);
		else if(i>182 && i<=363)
		x[i]=2500.0-(500/18.1)*(i/10.0-18.2);
		else if(i>363 && i<=508)
		x[i]=2000.0-(1000/14.5)*(i/10.0-36.3);
		else if(i>508 && i<=625)
		x[i]=1000.0-(700/11.7)*(i/10.0-50.8);
		else
		x[i]=200;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n9
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		x[i]=3440;
		else if(i>4 && i<=83)
		x[i]=3440-(690/7.9)*(i/10.0-0.4);
		else if(i>83 && i<=195)
		x[i]=2750-(250/11.2)*(i/10.0-8.3);
		else if(i>195 && i<=385)
		x[i]=2500.0-(500/19.0)*(i/10.0-19.5);
		else if(i>385 && i<=528)
		x[i]=2000.0-(1000/14.3)*(i/10.0-38.5);
		else if(i>528 && i<=571)
		x[i]=1000.0-(250/11.7)*(i/10.0-52.8);
		else if(i>571 && i<=650)
		x[i]=750.0-(550/7.9)*(i/10.0-57.1);
		else
		x[i]=200;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n10
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		x[i]=180.0;
		else if(i>184 && i<=323)
		x[i]=180.0+(820/13.9)*(i/10.0-18.4);
		else if(i>323 && i<=409)
		x[i]=1000.0+(500/8.6)*(i/10.0-32.3);
		else if(i>409 && i<=483)
		x[i]=1500;
		else if(i>483 && i<=823)
		x[i]=1500.0+(1000/34.0)*(i/10.0-48.3);
		else if(i>823 && i<=1108)
		x[i]=2500.0+(670/28.5)*(i/10.0-82.3);
		else
		x[i]=3370;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n11
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		x[i]=110.0;
		else if(i>184 && i<=335)
		x[i]=110.0+(890/15.1)*(i/10.0-18.4);
		else if(i>335 && i<=409)
		x[i]=1000.0+(410/7.4)*(i/10.0-33.5);
		else if(i>409 && i<=483)
		x[i]=1408;
		else if(i>483 && i<=849)
		x[i]=1410.0+(1090/36.6)*(i/10.0-48.3);
		else if(i>849 && i<=948)
		x[i]=2500.0+(250/9.9)*(i/10.0-84.9);
		else if(i>948 && i<=1056)
		x[i]=2750.0+(620/10.8)*(i/10.0-94.8);
		else
		x[i]=3370;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n12
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		x[i]=40.0;
		else if(i>184 && i<=278)
		x[i]=40.0+(630/9.4)*(i/10.0-18.4);
		else if(i>278 && i<=322)
		x[i]=670.0;
		else if(i>322 && i<=374)
		x[i]=670.0+(330/5.2)*(i/10.0-32.2);
		else if(i>374 && i<=394)
		x[i]=1000.0+(100/2.0)*(i/10.0-37.4);
		else if(i>394 && i<=433)
		x[i]=1100.0+(400/3.9)*(i/10.0-39.4);
		else if(i>433 && i<=570)
		x[i]=1500.0+(200/13.7)*(i/10.0-43.3);
		else
		x[i]=1700;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n13
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		x[i]=180.0;
		else if(i>184 && i<=266)
		x[i]=180.0+(570/8.2)*(i/10.0-18.4);
		else if(i>266 && i<=301)
		x[i]=750.0+(250/3.5)*(i/10.0-26.6);
		else if(i>301 && i<=398)
		x[i]=1000.0+(582/9.7)*(i/10.0-30.1);
		else if(i>398 && i<=708)
		x[i]=1582.0+(918/31.0)*(i/10.0-39.8);
		else if(i>708 && i<=885)
		x[i]=2500.0+(870/13.7)*(i/10.0-70.8);
		else
		x[i]=3370;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n14
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		x[i]=110.0;
		else if(i>184 && i<=278)
		x[i]=110.0+(640/9.4)*(i/10.0-18.4);
		else if(i>278 && i<=322)
		x[i]=750.0;
		else if(i>322 && i<=359)
		x[i]=750.0+(250/3.7)*(i/10.0-32.2);
		else if(i>359 && i<=408)
		x[i]=1000.0+(320/4.9)*(i/10.0-35.9);
		else if(i>408 && i<=548)
		x[i]=1320.0;
		else if(i>548 && i<=643)
		x[i]=1320.0+(480/9.5)*(i/10.0-54.8);
		else if(i>643 && i<=755)
		x[i]=1800.0;
		else
		x[i]=1800;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n15
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		x[i]=3370;
		else if(i>554 && i<=637)
		x[i]=3440-(620/7.7)*(i/10.0-55.4);
		else if(i>637 && i<=680)
		x[i]=2750-(250/4.3)*(i/10.0-63.7);
		else if(i>680 && i<=767)
		x[i]=2500.0-(500/8.7)*(i/10.0-68.8);
		else if(i>767 && i<=807)
		x[i]=2000.0-(200/4.0)*(i/10.0-76.7);
		else
		x[i]=1800;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n16
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		x[i]=3440;
		else if(i>554 && i<=673)
		x[i]=3440-(690/11.9)*(i/10.0-55.4);
		else if(i>673 && i<=733)
		x[i]=2750-(250/6.0)*(i/10.0-67.3);
		else if(i>733 && i<=1032)
		x[i]=2500.0-(1500/29.9)*(i/10.0-73.3);
		else if(i>1032 && i<=1103)
		x[i]=1000.0-(400/7.1)*(i/10.0-103.2);
		else if(i>1103 && i<=1200)
		x[i]=700-(500/11.7)*(i/10.0-110.3);
		else
		x[i]=200;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n17
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		x[i]=3510;
		else if(i>554 && i<=665)
		x[i]=3510-(760/11.1)*(i/10.0-55.4);
		else if(i>665 && i<=719)
		x[i]=2750-(250/5.4)*(i/10.0-66.5);
		else if(i>719 && i<=1021)
		x[i]=2500.0-(1500/30.2)*(i/10.0-71.9);
		else if(i>1021 && i<=1184)
		x[i]=1000-(800/16.3)*(i/10.0-102.1);
		else
		x[i]=200;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n18
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		x[i]=3370;
		else if(i>554 && i<=644)
		x[i]=3370-(620/9.0)*(i/10.0-55.4);
		else if(i>644 && i<=697)
		x[i]=2750-(250/5.3)*(i/10.0-64.4);
		else if(i>697 && i<=739)
		x[i]=2500.0-(374/4.2)*(i/10.0-69.7);
		else if(i>739 && i<796)
		x[i]=2126-(326/5.7)*(i/10.0-73.9);
		else if(i>796 && i<=911)
		x[i]=1800-(800/11.5)*(i/10.0-79.6);
		else if(i>911 && i<=1026)
		x[i]=1000-(800/11.5)*(i/10.0-91.1);
		else
		x[i]=200;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n19
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		x[i]=3440;
		else if(i>544 && i<=643)
		x[i]=3440-(570/9.9)*(i/10.0-54.4);
		else if(i>643 && i<=706)
		x[i]=2870-(356/6.3)*(i/10.0-64.3);
		else if(i>706 && i<=732)
		x[i]=2514-(182/2.6)*(i/10.0-70.6);
		else if(i>732 && i<=775)
		x[i]=2332-(332/6.3)*(i/10.0-73.2);
		else if(i>775 && i<=817)
		x[i]=2000.0-(300/4.2)*(i/10.0-77.5);
		else
		x[i]=1700;
	}
	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n20
	for(i=0;i<=1200;i++)
	{	
		if(i<=335)
		x[i]=110;
		else if(i>355 && i<=449)
		x[i]=110+(890/9.4)*(i/10.0-35.5);
		else if(i>449 && i<=477)
		x[i]=1000+(500/2.8)*(i/10.0-44.9);
		else if(i>477 && i<=535)
		x[i]=1500.0-(1000/5.8)*(i/10.0-47.7);
		else if(i>535 && i<=585)
		x[i]=2500.0-(870/5.0)*(i/10.0-53.5);
		else
		x[i]=3370;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n21
	for(i=0;i<=1200;i++)
	{	
		if(i<=325)
		x[i]=1700;
		else if(i>325 && i<=375)
		x[i]=1700;
		else if(i>375 && i<=381)
		x[i]=1700+(100/0.6)*(i/10.0-37.5);
		else
		x[i]=1800;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << x[i] << " " ;
	}
	 }
    myfile<<"\n";
//n0
	for(i=0;i<=1200;i++)
	{
		if(i<=140)
		y[i]=980.0-(155/14.0)*(i/10.0);
		else if(i>140 && i<=206)
		y[i]=825.0;
		else if(i>206 && i<=236)
		y[i]=825.0+(75/3.0)*(i/10.0-20.6);
		else if(i>236 && i<=324)
		y[i]=900.0+(600/9.8)*(i/10.0-23.6);
		else
		y[i]=1500;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n1
	for(i=0;i<=1200;i++)
	{
		if(i<=153)
		y[i]=980.0-(155/15.3)*(i/10.0);
		else if(i>153 && i<=343)
		y[i]=825.0;
		else if(i>343 && i<=450)
		y[i]=825.0+(150/10.7)*(i/10.0-34.3);
		else
		y[i]=975;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n2
	for(i=0;i<=1200;i++)
	{
		if(i<=166)
		y[i]=980.0-(155/16.6)*(i/10.0);
		else if(i>166 && i<=228)
		y[i]=825.0;
		else if(i>228 && i<=270)
		y[i]=825.0-(150/4.2)*(i/10.0-22.8);
		else if(i>270 && i<=377)
		y[i]=675-(635/10.7)*(i/10.0-27.0);
		else
		y[i]=40;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n3
	for(i=0;i<=1200;i++)
	{
		if(i<=83)
		y[i]=630.0+(45/8.3)*(i/10.0);
		else if(i>83 && i<=182)
		y[i]=675.0+(150/9.9)*(i/10.0-8.3);
		else if(i>182 && i<=350)
		y[i]=825;
		else if(i>350 && i<=395)
		y[i]=825.0+(75/4.5)*(i/10.0-35.0);
		else if(i>395 && i<=544)
		y[i]=900.0+(600/14.9)*(i/10.0-39.5);
		else
		y[i]=1500;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n4
	for(i=0;i<=1200;i++)
	{
		if(i<=83)
		y[i]=630.0+(45/8.3)*(i/10.0);
		else if(i>83 && i<=195)
		y[i]=675.0+(150/11.2)*(i/10.0-8.3);
		else if(i>195 && i<=579)
		y[i]=825;
		else if(i>579 && i<=757)
		y[i]=825.0+(150/17.8)*(i/10.0-57.9); 
		else
		y[i]=975.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n5
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		y[i]=870;
		else if(i>4 && i<=106)
		y[i]=870-(45/10.2)*(i/10.0-0.4);
		else if(i>106 && i<=203)
		y[i]=825-(150/9.7)*(i/10.0-10.6);
		else if(i>203 && i<=242)
		y[i]=675;
		else if(i>242 && i<=271)
		y[i]=675+(225/2.9)*(i/10.0-24.2);
		else if(i>271 && i<=372)
		y[i]=900+(600/10.1)*(i/10.0-27.1);
		else
		y[i]=1500;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n6
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		y[i]=870;
		else if(i>4 && i<=118)
		y[i]=870-(45/11.4)*(i/10.0-0.4);
		else if(i>118 && i<=214)
		y[i]=825-(150/9.6)*(i/10.0-11.8);
		else if(i>214 && i<=248)
		y[i]=675;
		else if(i>248 && i<=261)
		y[i]=675.0-(75/1.3)*(i/10.0-24.8);
		else if(i>261 && i<=345)
		y[i]=600.0-(560/8.4)*(i/10.0-26.1);
		else
		y[i]=40;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n7
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		y[i]=870;
		else if(i>4 && i<=130)
		y[i]=870-(45/12.6)*(i/10.0-0.4);
		else if(i>130 && i<=226)
		y[i]=825-(150/9.6)*(i/10.0-13.0);
		else if(i>226 && i<=302)
		y[i]=675;
		else if(i>302 && i<=513)
		y[i]=675+(825/20.1)*(i/10.0-30.2);
		else
		y[i]=1500;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n8
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		y[i]=520;
		else if(i>4 && i<=83)
		y[i]=520.0+(140/7.9)*(i/10.0-0.4);
		else if(i>83 && i<=363)
		y[i]=640+(35/28.0)*(i/10.0-8.3);
		else if(i>83 && i<=508)
		y[i]=675.0;
		else if(i>508 && i<=625)
		y[i]=675.0-(150/11.7)*(i/10.0-50.8);
		else
		y[i]=525;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n9
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		y[i]=520;
		else if(i>4 && i<=83)
		y[i]=520+(120/7.9)*(i/10.0-0.4);
		else if(i>83 && i<=384)
		y[i]=640+(35/30.1)*(i/10.0-8.3);
		else if(i>83 && i<=528)
		y[i]=675;
		else if(i>528 && i<=571)
		y[i]=675.0+(150/11.7)*(i/10.0-52.8);
		else if(i>571 && i<=650)
		y[i]=825.0+(50/79)*(i/10.0-57.1);
		else
		y[i]=875;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n10
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		y[i]=980.0;
		else if(i>184 && i<=323)
		y[i]=980.0-(155/13.9)*(i/10.0-18.4);
		else if(i>323 && i<=823)
		y[i]=825.0;
		else if(i>823 && i<=1108)
		y[i]=825.0+(100/28.5)*(i/10.0-82.3);
		else
		y[i]=925;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n11
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		y[i]=980.0;
		else if(i>184 && i<=335)
		y[i]=980.0-(155/15.1)*(i/10.0-18.4);
		else if(i>335 && i<=849)
		y[i]=825.0;
		else if(i>849 && i<=948)
		y[i]=825.0-(150/9.9)*(i/10.0-84.9);
		else if(i>948 && i<=1056)
		y[i]=675-(50/10.8)*(i/10-94.8);
		else
		y[i]=625;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n12
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		y[i]=630.0;
		else if(i>184 && i<=322)
		y[i]=630.0+(45/13.8)*(i/10.0-18.4);
		else if(i>322 && i<=374)
		y[i]=675.0+(150/7.4)*(i/10.0-33.5);
		else if(i>374 && i<=394)
		y[i]=825;
		else if(i>394 && i<=433)
		y[i]=825.0-(50/2.0)*(i/10.0-39.4);
		else if(i>433 && i<=466)
		y[i]=775;
		else if(i>466 && i<=570) 
		y[i]=775+(745/10.4)*(i/10.0-46.6);
		else
		y[i]=1500;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n13
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		y[i]=630.0;
		else if(i>184 && i<=266)
		y[i]=630.0+(45/8.2)*(i/10.0-18.4);
		else if(i>266 && i<=301)
		y[i]=675.0+(150/3.5)*(i/10.0-26.6);
		else if(i>301 && i<=708)
		y[i]=825.0;
		else if(i>708 && i<=885)
		y[i]=825.0+(100/13.7)*(i/10.0-70.8);
		else
		y[i]=925;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n14
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		y[i]=630.0;
		else if(i>184 && i<=322)
		y[i]=630.0+(45/13.8)*(i/10.0-18.4);
		else if(i>322 && i<=359)
		y[i]=675.0+(150/3.7)*(i/10.0-32.2);
		else if(i>359 && i<=643)
		y[i]=825.0;
		else if(i>643 && i<=755)
		y[i]=825.0-(785/11.2)*(i/10.0-64.3);
		else
		y[i]=40;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n15
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		y[i]=870;
		else if(i>554 && i<=637)
		y[i]=870-(45/7.7)*(i/10.0-55.4);
		else if(i>637 && i<=680)
		y[i]=825-(150/4.3)*(i/10.0-63.7);
		else if(i>680 && i<=767)
		y[i]=675.0;
		else if(i>767 && i<=807)
		y[i]=675-(75/4.0)*(i/10.0-76.7);
		else if(i>807 && i<=900)
		y[i]=600-(560/9.3)*(i/10.0-80.7);
		else
		y[i]=40;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n16
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		y[i]=870;
		else if(i>554 && i<=673)
		y[i]=870-(45/11.9)*(i/10.0-55.4);
		else if(i>673 && i<=733)
		y[i]=825-(150/6.0)*(i/10.0-67.3);
		else if(i>733 && i<=1032)
		y[i]=675.0;
		else if(i>1032 && i<=1103)
		y[i]=675.0-(150/7.1)*(i/10.0-103.2);
		else if(i>1103 && i<1200)
		y[i]=525+(350/11.7)*(i/10.0-110.3);
		else
		y[i]=875;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n17
 	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		y[i]=520;
		else if(i>554 && i<=665)
		y[i]=520+(105/11.1)*(i/10.0-55.4);
		else if(i>665 && i<=719)
		y[i]=625+(50/5.4)*(i/10.0-66.5);
		else if(i>719 && i<=1021)
		y[i]=675.0;
		else if(i>1021 && i<=1184)
		y[i]=675-(150/16.3)*(i/10.0-102.1);
		else
		y[i]=525;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n18
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		y[i]=520;
		else if(i>554 && i<=644)
		y[i]=520+(105/9.0)*(i/10.0-55.4);
		else if(i>644 && i<=697)
		y[i]=625+(50/5.3)*(i/10.0-64.4);
		else if(i>697 && i<=739)
		y[i]=675.0+(63/4.2)*(i/10.0-69.7);
		else if(i>739 && i<=796)
		y[i]=738-(63/5.7)*(i/10.0-73.9);
		else if(i>796 && i<=911)
		y[i]=675;
		else if(i>911 && i<=1035)
		y[i]=675-(150/12.4)*(i/10.0-91.1);
		else
		y[i]=525;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n19
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		y[i]=520;
		else if(i>544 && i<=643)
		y[i]=520+(86/9.9)*(i/10.0-54.4);
		else if(i>643 && i<=706)
		y[i]=606+(66/6.3)*(i/10.0-64.3);
		else if(i>706 && i<=732)
		y[i]=672.0;
		else if(i>732 && i<=775)
		y[i]=672.0+(68/6.3)*(i/10.0-73.2);
		else if(i>775 && i<=817)
		y[i]=740.0;
		else if(i>817 && i<=913)
		y[i]=740.0+(760/9.6)*(i/10.0-81.7);
		else
		y[i]=1500;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n20
	for(i=0;i<=1200;i++)
	{	
		if(i<=335)
		y[i]=980;
		else if(i>355 && i<=449)
		y[i]=980-(155/9.4)*(i/10.0-35.5);
		else if(i>449 && i<=477)
		y[i]=825-(75/2.8)*(i/10.0-44.9);
		else if(i>477 && i<=535)
		y[i]=750;
		else if(i>535 && i<=585)
		y[i]=750-(150/5.0)*(i/10.0-53.5);
		else
		y[i]=600.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";
//n21
	for(i=0;i<=1200;i++)
	{	
		if(i<=325)
		y[i]=30;
		else if(i>325 && i<=375)
		y[i]=30+(870/5.0)*(i/10.0-32.5);
		else if(i>375 && i<=381)
		y[i]=900+(50/0.6)*(i/10.0-37.5);
		else if(i>381 && i<=412)
		y[i]=950+(550/3.1)*(i/10.0-38.1);
		else
		y[i]=1500.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << y[i] << " " ;
	}
	 }
    myfile<<"\n";

//n0
	for(i=0;i<=1200;i++)
	{
		if(i<=140)
		v[i]=60.0;
		else if(i>140 && i<=206)
		v[i]=80.0;
		else if(i>206 && i<=236)
		v[i]=70.0;
		else
		v[i]=70.0;
	}
	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n1
	for(i=0;i<=1200;i++)
	{
		if(i<=153)
		v[i]=60.0;
		else if(i>153 && i<=217)
		v[i]=80.0;
		else if(i>217 && i<=343)
		v[i]=80.0;
		else if(i>343 && i<=450)
		v[i]=80.0;
		else
		v[i]=80.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n2
	for(i=0;i<=1200;i++)
	{
		if(i<=166)
		v[i]=60.0;
		else if(i>166 && i<=228)
		v[i]=80.0;
		else if(i>228 && i<=270)
		v[i]=60.0;
		else if(i>270 && i<=377)
		v[i]=60.0;
		else
		v[i]=60.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n3
	for(i=0;i<=1200;i++)
	{
		if(i<=83)
		v[i]=70.0;
		else if(i>83 && i<=182)
		v[i]=30.0;
		else if(i>182 && i<=350)
		v[i]=30.0;
		else if(i>350 && i<=395)
		v[i]=50.0;
		else
		v[i]=40.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n4
	for(i=0;i<=1200;i++)
	{
		if(i<=83)
		v[i]=70.0;
		else if(i>83 && i<=195)
		v[i]=30.0;
		else if(i>195 && i<=371)
		v[i]=30.0;
		else if(i>371 && i<=434)
		v[i]=50.0;
		else if(i>434 && i<=579)
		v[i]=50.0; 
		else
		v[i]=50.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n5
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		v[i]=60.0;
		else if(i>4 && i<=106)
		v[i]=60.0;
		else if(i>106 && i<=203)
		v[i]=80.0;
		else if(i>203 && i<=242)
		v[i]=80.0;
		else if(i>242 && i<=271)
		v[i]=80.0;
		else
		v[i]=60.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n6
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		v[i]=60.0;
		else if(i>4 && i<=118)
		v[i]=60.0;
		else if(i>118 && i<=214)
		v[i]=80.0;
		else if(i>214 && i<=248)
		v[i]=60.0;
		else if(i>248 && i<=261)
		v[i]=60.0;
		else
		v[i]=70.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n7
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		v[i]=60.0;
		else if(i>4 && i<=130)
		v[i]=60.0;
		else if(i>130 && i<=226)
		v[i]=80.0;
		else if(i>226 && i<=302)
		v[i]=40.0;
		else
		v[i]=40.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n8
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		v[i]=70.0;
		else if(i>4 && i<=83)
		v[i]=70.0;
		else if(i>83 && i<=182)
		v[i]=30.0;
		else if(i>182 && i<=363)
		v[i]=30.0;
		else if(i>363 && i<=508)
		v[i]=70.0;
		else if(i>508 && i<=625)
		v[i]=70.0;
		else
		v[i]=70.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n9
	for(i=0;i<=1200;i++)
	{	
		if(i<=4)
		v[i]=70.0;
		else if(i>4 && i<=83)
		v[i]=70.0;
		else if(i>83 && i<=195)
		v[i]=30.0;
		else if(i>195 && i<=385)
		v[i]=30.0;
		else if(i>385 && i<=528)
		v[i]=70.0;
		else if(i>528 && i<=571)
		v[i]=70.0;
		else if(i>571 && i<=650)
		v[i]=70.0;
		else
		v[i]=70.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n10
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		v[i]=60.0;
		else if(i>184 && i<=323)
		v[i]=60.0;
		else if(i>323 && i<=409)
		v[i]=60.0;
		else if(i>409 && i<=483)
		v[i]=60.0;
		else if(i>483 && i<=823)
		v[i]=30.0;
		else if(i>823 && i<=1108)
		v[i]=30.0;
		else
		v[i]=30;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n11
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		v[i]=0.0;
		else if(i>184 && i<=335)
		v[i]=60.0;
		else if(i>335 && i<=409)
		v[i]=60.0;
		else if(i>409 && i<=483)
		v[i]=60.0;
		else if(i>483 && i<=849)
		v[i]=30.0;
		else if(i>849 && i<=948)
		v[i]=30.0;
		else if(i>948 && i<=1056)
		v[i]=60.0;
		else
		v[i]=60.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n12
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		v[i]=0.0;
		else if(i>184 && i<=278)
		v[i]=70.0;
		else if(i>278 && i<=322)
		v[i]=70.0;
		else if(i>322 && i<=374)
		v[i]=70.0;
		else if(i>374 && i<=394)
		v[i]=70.0;
		else if(i>394 && i<=433)
		v[i]=70.0;
		else if(i>433 && i<=570)
		v[i]=70.0;
		else
		v[i]=70.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n13
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		v[i]=0.0;
		else if(i>184 && i<=266)
		v[i]=70.0;
		else if(i>266 && i<=301)
		v[i]=90.;
		else if(i>301 && i<=398)
		v[i]=60.0;
		else if(i>398 && i<=708)
		v[i]=30.0;
		else if(i>708 && i<=885)
		v[i]=50.0;
		else
		v[i]=50.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n14
	for(i=0;i<=1200;i++)
	{
		if(i<=184)
		v[i]=0.0;
		else if(i>184 && i<=278)
		v[i]=70.0;
		else if(i>278 && i<=322)
		v[i]=70.0;
		else if(i>322 && i<=359)
		v[i]=80.0;
		else if(i>359 && i<=408)
		v[i]=70.0;
		else if(i>408 && i<=548)
		v[i]=70.0;
		else if(i>548 && i<=643)
		v[i]=50.0;
		else if(i>643 && i<=755)
		v[i]=70.0;
		else
		v[i]=70;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n15
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		v[i]=0;
		else if(i>554 && i<=637)
		v[i]=80.0;
		else if(i>637 && i<=680)
		v[i]=70.0;
		else if(i>680 && i<=767)
		v[i]=60.0;
		else if(i>767 && i<=807)
		v[i]=60.0;
		else
		v[i]=60.0;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n16
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		v[i]=0;
		else if(i>554 && i<=673)
		v[i]=60.0;
		else if(i>673 && i<=733)
		v[i]=50.0;
		else if(i>733 && i<=1032)
		v[i]=50.0;
		else if(i>1032 && i<=1103)
		v[i]=50.0;
		else if(i>1103 && i<=1200)
		v[i]=50.0;
		else
		v[i]=50;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n17
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		v[i]=0;
		else if(i>554 && i<=665)
		v[i]=70.0;
		else if(i>665 && i<=719)
		v[i]=50.0;
		else if(i>719 && i<=1021)
		v[i]=50.0;
		else if(i>1021 && i<=1184)
		v[i]=50.0;
		else
		v[i]=50;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n18
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		v[i]=0;
		else if(i>554 && i<=644)
		v[i]=70;
		else if(i>644 && i<=697)
		v[i]=50;
		else if(i>697 && i<=739)
		v[i]=90;
		else if(i>739 && i<796)
		v[i]=65;
		else if(i>796 && i<=911)
		v[i]=70;
		else if(i>911 && i<=1026)
		v[i]=70;
		else
		v[i]=70;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n19
	for(i=0;i<=1200;i++)
	{	
		if(i<=554)
		v[i]=0;
		else if(i>544 && i<=643)
		v[i]=70;
		else if(i>643 && i<=706)
		v[i]=50;
		else if(i>706 && i<=732)
		v[i]=70;
		else if(i>732 && i<=775)
		v[i]=80;
		else if(i>775 && i<=817)
		v[i]=80;
		else
		v[i]=80;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n20
	for(i=0;i<=1200;i++)
	{	
		v[i]=180;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";
//n21
	for(i=0;i<=1200;i++)
	{	
		v[i]=180;
	}

	if (myfile.is_open())
	{

	for(int i = 0; i <= 1200; i ++){
	myfile << v[i] << " " ;
	}
	 }
    myfile<<"\n";	

	myfile.close();

	return 0;
}

