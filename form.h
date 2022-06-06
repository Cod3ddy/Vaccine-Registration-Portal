void form_gen ()
{
		char s = 205;
			char down = 186;
				char rtc = 187;
				char rbc = 188;
			char ltc = 201;
		char lbc = 200;
				int e=0;
			
				gotoxy (30, 3);
					printf ("%c", ltc);	
				gotoxy (30, 45);
					printf ("%c", lbc);
				gotoxy (100, 3);
					printf ("%c", rtc);
				gotoxy (100, 45);
					printf ("%c", rbc);
						///section headings;
				gotoxy (55, 5);
					printf ("CANDIDATE INFORMATION");
				gotoxy (60, 19);
					printf ("RESULTS");
			int ex=31, ey=3;
		for (e=0; e< 69; ++e)
		{
				gotoxy (ex, ey);
			printf ("%c", s);
				ex +=1;
				
			
		}
			ex = 31, ey=45;
			e =0;
		for (e=0;e<69;++e)
		{
			gotoxy (ex, ey);
			printf ("%c", s);
			ex +=1;
		}
			ex = 30, ey = 4, e = 0;
		for (e=0; e<41; ++e)
		{
			gotoxy (ex, ey);
			printf ("%c", down);
			ey +=1;
		}
			ex = 100, ey = 4, e = 0;
		for (e=0; e< 41; e++)
		{
			gotoxy (ex, ey);
			printf ("%c", down);
				ey +=1;
		}
		//separator
			ex = 32, ey = 17, e = 0;
		
		for (e=0; e < 67; ++ e)
		{
			gotoxy (ex, ey);
			printf ("%c", bar);
				ex +=1;
		}
			ex = 32, ey = 33, e = 0;
		
		for (e=0; e < 67; ++ e)
		{
			gotoxy (ex, ey);
			printf ("%c", bar);
				ex +=1;
		}
}
