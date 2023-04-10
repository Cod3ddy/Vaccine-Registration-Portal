struct signer{
	
	char username_main [30];
	char password_main [20];
	
		
}si;

long int rec;

	struct log {
			char username [30];
			char password [20];
		}lo;

void sign()
{
		char s = 205;
			char down = 186;
				char rtc = 187;
				char rbc = 188;
			char ltc = 201;
		char lbc = 200;
			int t;
				int ex = 55, ey =4;
	while (1){
		system ("color 02");
				
			gotoxy (54,4);
				printf ("%c", ltc);
			
				for (t=0;t<55;++t)
				{
					gotoxy (ex, ey);
						printf ("%c", s);
					ex+=1;
					if (t==54)
					{
						gotoxy (ex, ey);
							printf ("%c", rtc);
					}
				}
				ex =55, ey =25;
			gotoxy (54,25);
				printf ("%c", lbc);
				for (t=0;t<55;++t)
				{
					gotoxy (ex, ey);
						printf ("%c", s);
					ex+=1;
				}
					/// header											
	gotoxy (70, 4);
	printf ("SIGN UP");
												ex = 54, ey =5;
												for (t=0;t<20;++t)
												{
													gotoxy (ex, ey);
														 printf ("%c", down);
													ey +=1;
													if (t==19){
														gotoxy (110, 25);
															printf ("%c", rbc);
													}
												}
												
											ex = 110, ey =24;
											for (t=0;t<20;++t)
											{
												gotoxy (ex, ey);
													printf ("%c", down);
												ey-=1;
											}
//////////////////////////////////////////////////////////////////////////////////////////////////

FILE *fp;	
	fp = fopen ("admin/admins.txt", "ab+");
	if (fp == NULL)
	{
		printf ("error");
	}
	
	else {
			fflush (stdin);
			gotoxy (70, 10);
			printf ("ENTER USER NAME");

					//pointer
					gotoxy (73, 12);
					printf (">...");
					//second pointer
					gotoxy (73, 17);
					printf (">...");

				gotoxy (70, 15);
				printf ("ENTER PASSWORD");

			gotoxy (73, 12);
				gets (si.username_main);
														
			gotoxy (73, 17);
				gets (si.password_main);

				gotoxy (70, 20);
				printf ("Saving :");
 
//variables
int i;
char b=219;
//just printing some ascii characters

					gotoxy (78, 20);
					for (i = 0; i < 20; i++)

						{
					printf("%c", b);
			
					Sleep(250);
						}
		fwrite (&si,sizeof (si),1,fp);	
	MessageBox(0,"Saved Successfully", "Saving",0);
	}
	fclose (fp);
				gotoxy (65, 22);
				printf ("Press any key to go back");
					gotoxy(70, 24);

					getche ();
														
					if (getche)
					{
						break;
					}
}
system ("cls");
}


void login()
{
		char s = 205;
			char down = 186;
				char rtc = 187;
				char rbc = 188;
			char ltc = 201;
		char lbc = 200;
		int check=0;
			int t;
				int ex = 55, ey =4;
	while (1){
		system ("color 02");
		gotoxy (54,4);
				printf ("%c", ltc);
			
				for (t=0;t<55;++t)
				{
					gotoxy (ex, ey);
						printf ("%c", s);
					ex+=1;
					if (t==54)
					{
						gotoxy (ex, ey);
							printf ("%c", rtc);
					}
				}
				ex =55, ey =25;
			gotoxy (54,25);
				printf ("%c", lbc);
				for (t=0;t<55;++t)
				{
					gotoxy (ex, ey);
						printf ("%c", s);
					ex+=1;
				}
	/// title		
	gotoxy (70, 4);
	printf ("Log In");
					//pointer
					gotoxy (73, 12);
					printf (">...");
					//second pointer
					gotoxy (73, 17);
					printf (">...");
							
											ex = 54, ey =5;
												for (t=0;t<20;++t)
												{
													gotoxy (ex, ey);
														 printf ("%c", down);
													ey +=1;
													if (t==19){
														gotoxy (110, 25);
															printf ("%c", rbc);
													}
												}
												
											ex = 110, ey =24;
											for (t=0;t<20;++t)
											{
												gotoxy (ex, ey);
													printf ("%c", down);
												ey-=1;
											}
//////file
			
			fflush (stdin);
			gotoxy (70, 10);
			printf ("Enter User Name");
				gotoxy (73, 15);
				printf ("Enter Password");
			gotoxy (73, 12);
			gets(lo.username);
				gotoxy (70, 17);
				gets(lo.password);	
		
				
FILE *fp;
	fp = fopen ("admin/admins.txt", "rb");
		while (fread(&si, sizeof (si), 1, fp)==1)
		{													
			if (strcmp (lo.password, si.password_main)==0 && strcmp (lo.username, si.username_main)==0)
				{
					check = 1;
					break;
			}
		}		
		
		if (check == 1)
		{
				gotoxy (70, 21);
						printf ("Please Wait ");
                        //Loop de loop varibales
   							 char z = 219;
	 							int y;																					 
						  //Loop de loop varibales
						    gotoxy (81, 21);
						for (y=0; y<10; y++)
							{
								printf ("%c", z);
								Sleep (300);
							}
								gotoxy (70, 20);
									printf ("Log in successful!!");
								gotoxy (65, 21);
									printf ("Press any key to continue");
								gotoxy(70, 22);
									getche ();
										if (getche)
											{
												system ("cls");
													gotoxy(0,0);
													top_tier ();
											}
		}																							

			else
				{
                    gotoxy (70, 21);
                        printf ("Please Wait ");
							//Loop de loop varibales
								char z = 46;
                                    int y;
                            //Loop de loop varibales
                                gotoxy (81, 21);
                                	for (y=0; y<10; y++)
                                        {
                                        	printf ("%c", z);
											Sleep (250);
                                    	}
								gotoxy(70, 21);
								printf ("Credentials don't match!!!!");
								system ("cls");
				} 
	
	fclose (fp);
														
					gotoxy(70, 22);
						getche ();
							if (getche)
								{
									system ("cls");
									menu ();
								}
							
}
}


