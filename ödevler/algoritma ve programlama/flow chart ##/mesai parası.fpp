12       	 <--SHAPES
12       	 <--LINES
id1
2       	 <--TYPE
343       	 <--LEFT
81       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START



id2
91       	 <--TYPE
213       	 <--LEFT
164       	 <--TOP
332       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
ka� saat �al��t�n�z ?
�al���lan saat

id3
91       	 <--TYPE
187       	 <--LEFT
247       	 <--TOP
380       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
saatlik �cretiniz ne kadar ?
saatlik �cret

id4
92       	 <--TYPE
281       	 <--LEFT
355       	 <--TOP
192       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER
�al���lan saat
40

id5
0       	 <--TYPE
561       	 <--LEFT
366       	 <--TOP
356       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
�al���lan saat
40
fazla �al���lan saat
id6
0       	 <--TYPE
961       	 <--LEFT
365       	 <--TOP
492       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
fazla �al���lan saat
saatlik �cret
fazla paran�n yar�s�
id7
0       	 <--TYPE
1006       	 <--LEFT
443       	 <--TOP
396       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
fazla paran�n yar�s�
2
fazla paran�n tamam�
id8
0       	 <--TYPE
1002       	 <--LEFT
514       	 <--TOP
412       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
saatlik �cret
40
40 saate kadar al�nacak para
id9
0       	 <--TYPE
928       	 <--LEFT
578       	 <--TOP
556       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
ADD
40 saate kadar al�nacak para
fazla paran�n tamam�
al�nacak para
id10
91       	 <--TYPE
575       	 <--LEFT
575       	 <--TOP
276       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
al�nacak para =
al�nacak para

id11
0       	 <--TYPE
183       	 <--LEFT
463       	 <--TOP
388       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
saatlik �cret
�al���lan saat
al�nacak para
id12
2       	 <--TYPE
678       	 <--LEFT
677       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



  
---- LINES ---- from,to ----
id1,id2
reserved 1

id2,id3
reserved 1

id3,id4
reserved 1

id4,id5
reserved 1
EVET
id5,id6
reserved 1

id6,id7
reserved 1

id7,id8
reserved 1

id8,id9
reserved 1

id9,id10
reserved 1

id4,id11
reserved 1
HAYIR
id11,id10
reserved 1

id10,id12
reserved 1

