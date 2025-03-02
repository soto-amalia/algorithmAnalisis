/*
y=200*3;
print(y);
-->Ciclos (Asignación, compracion e incremento o decremento) n=3 for(int i=0; i<n; i++){}
HIcimos n+1 compraciones y n incrementos ATemporal f(n)=2n+2 f(0)=2 f(1)=4 f(20)=42 o(n)
ANalisis espacial 8 bytes 0(1)
---> for(int i=0; i<n; i+=2){} 1 asignacion, n/+1 comprara y n/2 incrementos  f(n)=n+2 o (n)
--->for(int i=0; i<0; i*=2 o i/=2 será logaritmo n){}
Palindromos , pilascon aarreglos checar* 1 asig, n/4+1 y n/4 incrementos
f(n)=n/2 +2 o(n) y espacial 8 bites o(1)
---> for(int i=0; i<=1; i+*){} 1 asignación, 2 comparaciones y n+1 incrementos
A-Temporal f(n)=2n+4
---->for(int i=0; i<100; i++){} 1 asignacion 101 compraciones y 1000 incrementos a-Temporal f(n)=202 o(1)
y de A-espacial todos hasta ahora son de 4 bytes o(1)
---->for(int i=1; i<=n; i++){} 1 asignacion n+1 compraciones y n incrementos 
f(n)=2n+2 o(n) a-Temporal 8 bytes o(1)
----->for(int i=0; i<n; i++){
    for(int i=0; i<n; i++){
    }} (Ciclo anidado)- CUadratica 2n+2 comparaciones (2n+2)=ancuadrada+2n ent A-Temporal f(2ncuadrada +2n+2)

---> for(int i=1; i<n; i++){
        for(int j=0; i<=n; j++){
        }}
        A-Temporal 
        A-Espacial 12 bytes o(1)
Analisis de complejidad temporal 
(x=x+1;)
1 asignacion 
1 arit. =2 ops o(1)-Constante
n=tamaño del problema 
--->for(int i=1; i<n; i++){   1 n+1 n(MUltiplicacion de matrics con 3 ciclos anidados) --2n+2
        for(int j=0; i<n; j++){   1 n+1 n --- 2ncuadrada+2n
            for(int k=0; k<n; j++){ 1 n+1 n
    }}}
            A-temporal  (an+2)ncuadrada= 2ncubica +2ncuadrada +2ncuadrada+2n=2n cubica+4ncuadrda 
            A- 16 bytes 
Analisis espacial 
1 variable=4bites o(1)-Constante
Operaciones básicas 
-Asignaciones
-Incrementos

-Comparaciones 
-Operaciones Aritmeticas
*/