	.module _1514.c
	.area text(rom, con, rel)
	.dbfile 1514.c
	.dbfunc e judge _judge fI
;              y -> R10,R11
;              x -> R12,R13
	.even
_judge::
	rcall push_xgset003C
	mov R10,R18
	mov R11,R19
	mov R12,R16
	mov R13,R17
	.dbline -1
	.dbline 7
; 
; 
; 
;             #include <stdio.h>
; 
; int judge(int x, int y)
; {
	.dbline 8
;    if(y==0 || x%y==0 || x>2*y)
	tst R10
	brne X0
	tst R11
	breq L5
X0:
	mov R18,R10
	mov R19,R11
	mov R16,R12
	mov R17,R13
	rcall mod16s
	cpi R16,0
	cpc R16,R17
	breq L5
X1:
	mov R2,R10
	mov R3,R11
	lsl R2
	rol R3
	cp R2,R12
	cpc R3,R13
	brge L2
X2:
L5:
	.dbline 9
;       return 1;
	ldi R16,1
	ldi R17,0
	rjmp L1
L2:
	.dbline 11
;    else
;       return 1^judge(y, x-y);
	mov R18,R12
	mov R19,R13
	sub R18,R10
	sbc R19,R11
	mov R16,R10
	mov R17,R11
	rcall _judge
	ldi R24,1
	ldi R25,0
	eor R16,R24
	eor R17,R25
	.dbline -2
L1:
	.dbline 0 ; func end
	rjmp pop_xgset003C
	.dbsym r y 10 I
	.dbsym r x 12 I
	.dbend
	.dbfunc e main _main fI
;              k -> <dead>
;              r -> y+402
;              j -> R22,R23
;              y -> y+202
;              x -> y+2
;              i -> R20,R21
	.even
_main::
	sbiw R28,63
	sbiw R28,63
	sbiw R28,63
	sbiw R28,63
	sbiw R28,63
	sbiw R28,63
	sbiw R28,63
	sbiw R28,63
	sbiw R28,63
	sbiw R28,35  ; offset = 602
	.dbline -1
	.dbline 15
; }
; 
; int main()
; {
	.dbline 18
;    int x[100], y[100], r[100];
;    int i,j,k;
;    for(i=0;;i++){
	clr R20
	clr R21
L7:
	.dbline 18
	.dbline 19
;    scanf("%d%d", &x[i],&y[i]);
	mov R2,R20
	mov R3,R21
	lsl R2
	rol R3
	mov R4,R2
	mov R5,R3
	mov R24,R28
	mov R25,R29
	subi R24,54  ; offset = 202
	sbci R25,255
	add R2,R24
	adc R3,R25
	std y+1,R3
	std y+0,R2
	mov R24,R28
	mov R25,R29
	adiw R24,2
	mov R18,R4
	mov R19,R5
	add R18,R24
	adc R19,R25
	ldi R16,<L11
	ldi R17,>L11
	rcall _scanf
	.dbline 21
; 
;       if(x[i]==y[i] && x[i]==0)
	mov R2,R20
	mov R3,R21
	lsl R2
	rol R3
	mov R24,R28
	mov R25,R29
	adiw R24,2
	mov R30,R2
	mov R31,R3
	add R30,R24
	adc R31,R25
	ldd R10,z+0
	ldd R11,z+1
	mov R24,R28
	mov R25,R29
	subi R24,54  ; offset = 202
	sbci R25,255
	mov R30,R2
	mov R31,R3
	add R30,R24
	adc R31,R25
	ldd R2,z+0
	ldd R3,z+1
	cp R10,R2
	cpc R11,R3
	brne L12
X3:
	tst R10
	brne L12
	tst R11
	brne L12
X4:
	.dbline 22
;          break;
	rjmp L9
L12:
	.dbline 23
;       if(x[i] > y[i])
	mov R10,R20
	mov R11,R21
	lsl R10
	rol R11
	mov R24,R28
	mov R25,R29
	subi R24,54  ; offset = 202
	sbci R25,255
	mov R30,R10
	mov R31,R11
	add R30,R24
	adc R31,R25
	ldd R2,z+0
	ldd R3,z+1
	mov R24,R28
	mov R25,R29
	adiw R24,2
	mov R30,R10
	mov R31,R11
	add R30,R24
	adc R31,R25
	ldd R4,z+0
	ldd R5,z+1
	cp R2,R4
	cpc R3,R5
	brge L14
X5:
	.dbline 24
;          r[i] = judge(x[i], y[i]);
	mov R12,R20
	mov R13,R21
	lsl R12
	rol R13
	mov R24,R28
	mov R25,R29
	subi R24,54  ; offset = 202
	sbci R25,255
	mov R30,R12
	mov R31,R13
	add R30,R24
	adc R31,R25
	ldd R18,z+0
	ldd R19,z+1
	mov R24,R28
	mov R25,R29
	adiw R24,2
	mov R30,R12
	mov R31,R13
	add R30,R24
	adc R31,R25
	ldd R16,z+0
	ldd R17,z+1
	rcall _judge
	mov R10,R16
	mov R11,R17
	mov R24,R28
	mov R25,R29
	subi R24,110  ; offset = 402
	sbci R25,254
	mov R30,R12
	mov R31,R13
	add R30,R24
	adc R31,R25
	std z+1,R11
	std z+0,R10
	rjmp L15
L14:
	.dbline 26
;       else
;          r[i] = judge(y[i], x[i]);
	mov R12,R20
	mov R13,R21
	lsl R12
	rol R13
	mov R24,R28
	mov R25,R29
	adiw R24,2
	mov R30,R12
	mov R31,R13
	add R30,R24
	adc R31,R25
	ldd R18,z+0
	ldd R19,z+1
	mov R24,R28
	mov R25,R29
	subi R24,54  ; offset = 202
	sbci R25,255
	mov R30,R12
	mov R31,R13
	add R30,R24
	adc R31,R25
	ldd R16,z+0
	ldd R17,z+1
	rcall _judge
	mov R10,R16
	mov R11,R17
	mov R24,R28
	mov R25,R29
	subi R24,110  ; offset = 402
	sbci R25,254
	mov R30,R12
	mov R31,R13
	add R30,R24
	adc R31,R25
	std z+1,R11
	std z+0,R10
L15:
	.dbline 27
;    }
L8:
	.dbline 18
	subi R20,255  ; offset = 1
	sbci R21,255
	.dbline 18
	rjmp L7
L9:
	.dbline 28
;    for(j=0;j<i;j++){
	clr R22
	clr R23
	rjmp L19
L16:
	.dbline 28
	.dbline 29
;       if(r[j])
	mov R24,R28
	mov R25,R29
	subi R24,110  ; offset = 402
	sbci R25,254
	mov R30,R22
	mov R31,R23
	lsl R30
	rol R31
	add R30,R24
	adc R31,R25
	ldd R2,z+0
	ldd R3,z+1
	tst R2
	brne X6
	tst R3
	breq L20
X6:
	.dbline 30
;          printf("Stan wins\n");
	ldi R16,<L22
	ldi R17,>L22
	rcall _printf
	rjmp L21
L20:
	.dbline 32
;       else
;          printf("Ollie wins\n");
	ldi R16,<L23
	ldi R17,>L23
	rcall _printf
L21:
	.dbline 33
;    }
L17:
	.dbline 28
	subi R22,255  ; offset = 1
	sbci R23,255
L19:
	.dbline 28
	cp R22,R20
	cpc R23,R21
	brlt L16
X7:
	.dbline -2
L6:
	.dbline 0 ; func end
	adiw R28,63
	adiw R28,63
	adiw R28,63
	adiw R28,63
	adiw R28,63
	adiw R28,63
	adiw R28,63
	adiw R28,63
	adiw R28,63
	adiw R28,35  ; offset = 602
	ret
	.dbsym l k 3 I
	.dbsym l r 402 A[200:100]I
	.dbsym r j 22 I
	.dbsym l y 202 A[200:100]I
	.dbsym l x 2 A[200:100]I
	.dbsym r i 20 I
	.dbend
	.area data(ram, con, rel)
	.dbfile 1514.c
L23:
	.blkb 12
	.area idata
	.byte 'O,'l,'l,'i,'e,32,'w,'i,'n,'s,10,0
	.area data(ram, con, rel)
	.dbfile 1514.c
L22:
	.blkb 11
	.area idata
	.byte 'S,'t,'a,'n,32,'w,'i,'n,'s,10,0
	.area data(ram, con, rel)
	.dbfile 1514.c
L11:
	.blkb 5
	.area idata
	.byte 37,'d,37,'d,0
	.area data(ram, con, rel)
	.dbfile 1514.c
; 
; }
