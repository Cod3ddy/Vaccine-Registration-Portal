void topView ()
{
int sn=1, uno, SORT;
char st = 205, underScore = 95;
char *header [9]= {"No", "CAN/CODE", "CIT/CODE", "NAME", "S/NAME", "P/NO", "DISTRICT", "AREA", "VENUE"};
	shacord = sizeof (d);
	FILE *cad;
		cad = fopen ("candidate/candidates.txt", "r");
			if (cad == NULL)
			{
				MessageBox (0, "File cannot be found", "Error", 0);
			}
				int axi = 0, why = 0, axe = 75;
				//table-header first lol, shadoiwy hands
					// displaying the *header string array.......
				for (SORT=0; SORT < 9; ++SORT)
				{
					if (SORT == 7 || SORT == 8)
					{
						gotoxy (axe, why);
						printf ("%s", header [SORT]);
						axe +=15;
					}
					else 
					{
						gotoxy (axi, why);
						printf ("%s", header [SORT]);
						axi +=10;	
					}
				}
				printf ("\n");
			printf ("\n");
						for (uno = 0; uno<109; uno ++)
						{
							printf ("%c", st);
						}
			
				///// moving accross the plain mwahaha
					int posX = 10, posY = 4;
			while (fread(&d, shacord, 1, cad)==1)
			{
				printf ("\n\n");
					printf ("%d", sn);
					
						gotoxy (posX, posY);
						printf ("%s", d.candi_code);
								posX+=10;
									gotoxy(posX, posY);
									printf ("%s", d.citizen_code);
										posX+=10;
												gotoxy(posX, posY);
												printf ("%s", d.name);
													posX+=10;
														gotoxy(posX, posY);
														printf ("%s", d.surname);
													posX+=10;
														gotoxy(posX, posY);
														printf ("%d", d.phone);
										posX+=10;
												gotoxy(posX, posY);
												printf ("%s", d.r.district);
								posX+=15;
									gotoxy(posX, posY);
									printf ("%s", d.r.area);
						posX+=15;
							gotoxy(posX, posY);
							printf ("%s", d.r.vtd.venue);
				printf ("\n\n");
				for (uno = 0; uno<109; uno ++)
					{
							printf ("%c", underScore);
					}
				sn +=1;
				posY+=4;
				posX=10;
				getch ();
			}
}
void topDelete ()
{
	
}
void topModify ()
{
	
}
