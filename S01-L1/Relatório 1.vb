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
