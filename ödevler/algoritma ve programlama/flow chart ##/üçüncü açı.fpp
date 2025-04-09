11       	 <--SHAPES
12       	 <--LINES
id1
2       	 <--TYPE
249       	 <--LEFT
77       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
65280       	 <--BORDERCOLOR
8454016       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START



id2
91       	 <--TYPE
182       	 <--LEFT
135       	 <--TOP
196       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
birinci açý
birinci

id3
91       	 <--TYPE
191       	 <--LEFT
205       	 <--TOP
180       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
ikinci açý
ikinci

id4
0       	 <--TYPE
167       	 <--LEFT
289       	 <--TOP
228       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
ADD
birinci
ikinci
toplam2
id5
92       	 <--TYPE
209       	 <--LEFT
371       	 <--TOP
152       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER_EQUAL
toplam2
180

id7
91       	 <--TYPE
549       	 <--LEFT
221       	 <--TOP
252       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
hata açýlarý tekrar giriniz


id6
0       	 <--TYPE
180       	 <--LEFT
479       	 <--TOP
196       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
180
toplam2
üçüncü
id8
0       	 <--TYPE
174       	 <--LEFT
560       	 <--TOP
228       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
ADD
üçüncü
toplam2
toplam3
id9
92       	 <--TYPE
523       	 <--LEFT
543       	 <--TOP
152       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER
toplam3
180

id10
91       	 <--TYPE
754       	 <--LEFT
542       	 <--TOP
252       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
üçüncü açý deðeri =
üçüncü

id11
2       	 <--TYPE
1077       	 <--LEFT
548       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
255       	 <--BORDERCOLOR
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

id5,id7
reserved 1
EVET
id7,id2
reserved 1

id5,id6
reserved 1
HAYIR
id6,id8
reserved 1

id8,id9
reserved 1

id9,id7
reserved 1
EVET
id9,id10
reserved 1
HAYIR
id10,id11
reserved 1

