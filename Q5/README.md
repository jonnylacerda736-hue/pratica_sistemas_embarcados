Conceito: Use um sensor de luz para acender um LED automaticamente quando o ambiente ficar escuro.
Novos Componentes: Fotoresistor (LDR).
O que você vai aprender: Leitura de entradas analógicas ( analogRead ) para medir valores que variam continuamente, como a intensidade
da luz.

Esquema de Conexão:
LED: Conecte o terminal longo (ânodo) a um resistor de 220Ω, e a outra ponta do resistor ao pino 9. O terminal curto (cátodo) vai para
o GND.
Fotoresistor (LDR): Crie um divisor de tensão. Conecte um terminal do LDR ao 5V. Conecte o outro terminal ao pino A0. Do mesmo
pino A0, conecte um resistor de 10kΩ ao GND.