Projeto Arduino | Tinkercad

    https://www.tinkercad.com/things/2aYy1lji3uj

=== DESCRIÇÃO E EXPLICAÇÃO DO PROJETO ===

Descrição:

    O projeto visa o case da Vinheria Agnello, levando em consideração a preocupação da exposição dos vinhos ao UV, pois o vinho sofre oxidação resultando em um vinagre (nada bom para os negócios). O vinho é produzido através da fermentação de uvas, é durante este processo que os açúcares (glicose e frutose) são transformados em etanol ao ser exposto a luz agindo junto com o vidro (caso seja transparente potencializa) oxida.
    Sendo assim criamos um projeto utilizando o Arduino e outros materiais que possibilita alertar quando a luminosidade do local esteja alta aciona um buzzer (aparelho sonoro) por 3 segundos, caso esteja uma luz incidente mediana acende uma luz amarela, caso esteja com luminosidade baixa o led verde estará aceso.

Mas o que é o LDR:

    Light Dependent Resistor, O LDR (Light Dependent Resistor) é um tipo de resistor que muda sua resistência elétrica conforme a intensidade de luz que incide sobre ele.
    Já os conversores analógico para digital do Arduino, são circuitos integrados que convertem um sinal analógico (contínuo) em um sinal digital (discreto), que pode ser processado pelo microcontrolador do Arduino. Permitindo que o microcontrolador do Arduino leia e interprete esses sinais.
    O Arduino possui um conversor analógico para digital integrado em sua placa, analógicos p/ digitais de 10 bits entre 0 e 1023. Usa a função “analogRead()” ler valor analógico de um pino especifico do Arduino

Pensamento antes da codificação:

    LDR  lê valor alto => pouca incidência de luz => led verde aceso, led vermelho e amarelo apagado
    LDR  lê valor entre X e y => média incidência de luz => led verde apagado, led amarelo aceso
    LDR lê valor de y a Z  => alta incidência de luz => led vermelho aceso, liga o buzzer de 3 seg duração


--- COMO PRODUZI-LO ---

Materiais:

    - Plana Arduino Uno R3;
    - Led: Vermelho, Amarelo, Verde;
    - Buzzer;
    - LDR;
    - protoboard mini;
    - resitores: 
        3 resistores (330 Ohm) p/ LED;
        1 resistor (220 Ohm) p/ LDR;
    - fios:
        preto    - GND (4);
        azul     - 5V (1);
        Vermelho - led_red (1);
        Amarelo  - led_yel (1);
        verde    - led_Gre (1);
        roxo     - + buzzer (1);
        laranja  - ldr (1);

Como ligar:

    Pegue a placa Arduino UNO R3 e a protoboard, ligue 2 fios pretos no GND para o pino (-) da protoboard, pegue o fio azul ligue no 5V e no (+) da protoboard. Ligue os leds vermelho, amarelo e verde na protoboard no lado reto de cada led ligue os resistores de 300 Ohm um lado para o led e outro na fileira do pino ligado ao GND, no lado com a “barriguinha do led” ligue os fios vermelho amarelo e verde nos seguintes pinos: (vermelho led vermelho -> 4) (amarelo: amarelo -> 3) (verde: verde -> 2).
    Ligue o LDR na protoboard junto com um resistor de 220 Ohm e o fio laranja no pino A0 e do outro lado a fileira do GND, o buzzer com um fio roxo saindo do + ao pino 5 e o – ao GND.

    Agora codifique e ligue o Arduino ao PC.