Implemente um algoritmo para converter um número natural em base decimal para a base binária. Vale ressaltar que deve-se utilizar, obrigatoriamente, recursão. Além disso, diferente dos exercícios anteriores de recursão, o algoritmo deve ter o main e a função responsável pela conversão. 
<br>
Passo a Passo da Conversão:<br>
<br>
a) Pegue o número decimal e divida-o por 2;<br>
b) Guarde o resto da divisão, que será sempre 0 ou 1.<br>
c) Pegue o quociente (o resultado inteiro da divisão) e divida-o por 2 novamente. Repita o processo.<br>
d) Quando o quociente final for menor que 2 (ou seja, 0 ou 1), a divisão termina.<br>
<br>
IMPORTANTE!!<br>
<br>
O número binário é formado juntando o último quociente (que será o primeiro dígito à esquerda) e todos os restos.<br>

 <br>
Exemplos<br>
Teste 1<br>
1110 == dec2bin(14);<br>
Teste 2<br>
111 == dec2bin(7);<br>
