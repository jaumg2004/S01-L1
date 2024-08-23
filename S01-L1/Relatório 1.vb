10 INPUT "Digite o valor de a: ", A
20 INPUT "Digite o valor de b: ", B
30 INPUT "Digite o valor de c: ", C
40 D = B*B - 4*A*C
50 IF D < 0 THEN PRINT "As raízes são complexas.": GOTO 100
60 X1 = (-B + SQR(D)) / (2*A)
70 X2 = (-B - SQR(D)) / (2*A)
80 PRINT "A primeira raiz é "; X1
90 PRINT "A segunda raiz é "; X2
100 END


10 RANDOMIZE TIMER
20 N = INT(RND * 10) + 1
30 PRINT "Número gerado: "; N
40 F = 1
50 FOR I = 1 TO N
60 F = F * I
70 NEXT I
80 PRINT "O fatorial de "; N; " é "; F
90 END
