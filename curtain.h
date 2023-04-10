//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//#define bar 219
//
//COORD coord = {0,0};
//
//void gotoxy (int x, int y)
//
//{
//	coord.X=x;
//	coord.Y=y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
//}

struct stamp{
	char stampee [300];
}star;

//#logo
void logo()
{
	gotoxy(60, 15);
		printf ("VACCINE REGISTRATION PORTAL");
}
//maarquee haha
void W()
{
		gotoxy(5,4);
			printf ("W");
}
void E()
{
		gotoxy(7,4);
			printf ("E");
}
void L()
{
		gotoxy(9,4);
			printf ("L");
}
void C()
{
		gotoxy(11,4);
			printf ("C");
}
void O()
{
		gotoxy(13,4);
			printf ("O");
}
void M()
{
		gotoxy(15,4);
			printf ("M");
}
void EI()
{
		gotoxy(17,4);
			printf ("E");
}

////
void c1()
{
			gotoxy(25, 8);
		printf (" ");
}
void c2 ()
{
			gotoxy (25,7);
		printf (" ");
				
}
void c3 ()
{
			gotoxy (25, 6);
		printf (" ");
}
void c4 ()
{
			gotoxy (25, 5);
		printf (" ");
}
void c5 ()
{
			gotoxy (25,4);
		printf (" ");
}
void c1m()
{
		printf (" ");
}
////
//#1 line
void line1()
{
	int a;
		for(a=0;a<120;++a)
		
		{
			printf ("%c", bar);
		}
}
void line2 ()
{
	int b;
		for (b=0;b<120;++b)
		{
			printf ("%c", bar);
		}
}

void call_em()
{
			system ("color 5f");
	int aye;
	int a=1,b=0;
	int mx=0, my=0;
	int hex= 25, mex = 26, shex = 26, pex = 35, dex =35, fix = 35, dix = 41, qex = 44, tex = 47, sex = 50, bex = 52, yex = 57, wex = 63, aix = 59; 
	int ux = 66, kx = 68, lex = 71, ox = 71, zx = 71, cix = 77;
	int whay = 8, dey = 8, fiy = 6, diy = 8, qey = 6, tiy = 8, siy = 7, biy = 8, yiy = 8, wey = 8, aiy = 6, uy = 8, ky = 6, oy = 8, zy = 6, ciy=8;
	for (b=0;b<14;++b)
	
	{	
									////Letter E
						if (b==5||b==6||b==7||b==8||b==9||b==10)
						{
						
								gotoxy (hex + 1, whay);
									c1m ();
								hex += 1;
					
						}
						
						if (b==5||b==6||b==7||b==8||b==9||b==10)
						{
								gotoxy (mex, 4);
									c1m ();
								mex += 1;
					
						}
						
						if (b==5||b==6||b==7||b==8)
						{
						
								gotoxy (shex, 6);
									c1m ();
								shex += 1;
					
						}
								///Leeter D//////////////////////////////
								
								if (b==5||b==6||b==7||b==8 || b == 9 || b == 10)
								{
								
										gotoxy (pex, 8);
											c1m ();
										pex += 1;
							
								}
								if (b==5||b==6||b==7)
										{
						
										gotoxy (dex, dey);
											c1m ();
										dey -= 1;
					
										}
								if (b==5 || b == 6 || b ==7 || b==8 || b == 9 || b == 10)
								{
										gotoxy (fix, fiy);
											c1m ();
												fix +=1;
								}
								
								if (b==5 || b == 6 || b == 7 || b == 8 || b == 9 )
										{
											gotoxy (dix, diy);
												c1m ();
													diy -=1;
										}
									
									//////////////////letter W ////////////////////
								
								
								if (b == 5 || b == 6 || b == 7)
									{
											gotoxy (qex, qey);
												c1m ();
													qex +=1;
														qey +=1;
									}
								if (b == 5 || b == 6 || b == 7)
								{
											gotoxy (tex, tiy);
												c1m ();
													tex+=1;
														tiy -=1;
								}
								
								if (b == 5 || b == 6)
								{
											gotoxy (sex, siy);
												c1m ();
													sex+=1;
														siy +=1;
								}
								if (b == 5 || b == 6 || b == 7)
									{
											gotoxy (bex, biy);
												c1m ();
													bex +=1;
														biy -=1;
									}
////////////////////////////////////////Letter a//////////////
												if (b == 5 || b == 6 ||  b == 7 ||  b == 8 || b == 9 || b == 10)
												{
														gotoxy (yex, yiy);
															c1m ();
																yex+=1;	
												}	
												
												if (b == 5 || b== 6 || b == 7)
												{
														gotoxy (wex, wey);
															c1m  ();
																wey-=1;
												}
												if (b == 7)
												{
														gotoxy (57, 7);
															c1m ();
												}
												if (b == 8)
												{
														gotoxy (58, 6);
															c1m ();
												}
												if (b == 9 || b == 10 ||  b == 11 || b == 12)
												{
														gotoxy (aix, aiy);
															c1m ();
																aix +=1;
												}
//////////////////////////////////letter R/////////////////////////////////////////////
															if (b==5 || b == 6 || b == 7)
																{
																	gotoxy (ux, uy);
																		c1m ();
																		uy-=1;	
																}
															if (b == 8 || b == 9)
															{
																	gotoxy (kx, ky);
																		c1m ();
																			kx-=1;
															}
///////////////////////////////////////////////letter D, final letter for eduwade hehe/////////////////////////////////////
										 	
								if (b==5||b==6||b==7||b==8 || b == 9 || b == 10)
								{
								
										gotoxy (lex, 8);
											c1m ();
										lex += 1;
							
								}
								if (b==5||b==6||b==7)
										{
						
										gotoxy (ox, oy);
											c1m ();
										oy -= 1;
					
										}
								if (b==5 || b == 6 || b ==7 || b==8 || b == 9 || b == 10)
								{
										gotoxy (zx, zy);
											c1m ();
												zx+=1;
								}
								
								if (b==5 || b == 6 || b == 7 || b == 8 || b == 9 )
										{
											gotoxy (cix, ciy);
												c1m ();
													ciy -=1;
										}
	if (b == 4  || b == 5)
	{
		c1 ();
	}
	if (b == 6)
	{
		c2 ();
	}
	if (b == 7)
	{
		c3 ();
	}
	if (b == 8)
	{
		c4 ();
	}
	if (b == 9)
	{
		c5 ();
	}
		logo ();
			if (b==3)
			{
					W ();
			}
			if (b==4)
			{
					E ();
			}
			if (b==5)
			{
					L ();
			}
			if (b==6)
			{
					C ();
			}
			if (b==7)
			{
					O ();
			}
			if (b==8)
			{
					M ();
			}
			if (b==9)
			{
					EI();
			}
	
		gotoxy(mx, my);
		line1();
			my+=1;
			gotoxy(mx,my);
		line2();
		my+=1;
		Sleep(50);
	
	}
	getche ();
	system ("cls");
	char syst [300] = "This System was done by Shadow...................";
			FILE *read;
				read = fopen ("readme.txt", "ab+");
					if (read == NULL)
					{
						
					}
					else
					{
						fflush (stdin);
						strcat (star.stampee, syst);
						fwrite (&star, sizeof (star), 1, read);
					}
		fclose (read);
}